//Michael Ng Cen Homework #1

#include <iostream>
using namespace std;
int main ()
{	
	long long int i = 1;	
	while (true)
	{
		long long int k=i*i;
		int x = k%10;
		int y = ((k/10)%10);  
		if (x%2 ==1 && y%2 ==1)
		{
			cout << k << endl;
			return 0;
		}
		i++;
	}
}
