#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> t[3];
    int num, candidate, to, from, move=0;
    cout << "Please enter the number of rings to move: ";
    cin >> num;
    cout << endl;
    for(int i = num+1; i >= 1 ;i--)
        t[0].push_back(i);
        t[1].push_back(num+1);
        t[2].push_back(num+1);
        from=0;
        if((num%2)==1) to=1;
        else to=2;
        candidate=1;
    while( t[1].size() < num+1)
    { 
        t[to].push_back(t[from].back());
        t[from].pop_back();
        cout << "Move # " << ++move << ": Transfer ring " <<candidate << " from tower " << char(from+65) << " to tower " << char(to+65) << endl;
        if(num%2==1)
	{
            if(t[(to+1)%3].back() < t[(to+2)%3].back())
                from = (to+1)%3;
            else
                from = (to+2)%3;
            if(t[(from)].back() < t[(from+1)%3].back())
                to = (from+1)%3;
            else
                to = (from+2)%3;
            candidate = (t[from].back());
        } 
        else 
	{ 
            if(t[(to+1)%3].back() < t[(to+2)%3].back())
                from=(to+1)%3;
            else
                from=(to+2)%3;
            if(t[(from)].back() < t[(from+2)%3].back())
                to=(from+2)%3;
            else
                to=(from+1)%3;
            candidate = (t[from].back()); 
        }
    }
    return 0;
}