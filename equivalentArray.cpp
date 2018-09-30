// Michael Ng Cen
#include <iostream>
using namespace std;
bool equivalent(int a[], int b[], int n)
{
	int match = 0;
	int s, i = 0;
	while (s < n) 
	{
    		while(i < n) 
		{
      			if (a[i] != b[(i + s) % n]) 
			{
        			match = 0;
        			break;
      			} else match++;
      			i++;
   		 }
    		if (match == n)
      		return true;
    		s++;
 	}
  	return false;
}
int main()
{
  cout << boolalpha;
  int a[5] = {1,2,3,4,5};
  int b[5] = {3,4,5,1,2};
  cout << equivalent(a, b, 5) << endl;
}

