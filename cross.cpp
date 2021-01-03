#include <iostream>
#include <cmath>
using namespace std;

bool ok( int cross[], int box)
{
    int i = 0;
    int checkValues[8][5] = 
    {
        { -1 },
        { 0, -1 },
        { 0, -1 },
        { 0, 1, 2, -1 },
        { 0, 1, 3, -1 },
        { 1, 4, -1 },
        { 2, 3, 4, -1 },
        { 3, 4, 5, 6, -1 }
    };
        
	for (int i = 0; i < box; ++i) 
	{
	  if (cross[i] == cross[box]) 
	  {
	    return false;
	  }
	}
	while (checkValues[box][i] != -1) 
	{
	  if (abs(cross[box] - cross[checkValues[box][i]]) == 1) 
	  {
	    return false;
	  }
	  ++i;
	}
	return true;
}

void backtrack(int & col) 
{
	  --col;
	  if (col == -1) 
	  {
	    exit(1);
	  }
}

void print(int q[]) 
{
	  cout << " " << q[0] << q[1] << endl;
	  cout << q[2] << q[3] << q[4] << q[5] << endl;
	  cout << " " << q[6] << q[7] << " ";
	  cout << "\n" << "\n";
}

int main() 
{
	  int solution = 0;
	  int q[8], c = 0;
	  bool test = false;

	  while (true) 
	  {
	    while (c < 8) 
	    {
	      if (!test)
	        q[c] = -1;

	      test = false;

	      while (q[c] < 8) 
	      {
	        q[c]++;

	        if (q[c] == 8) 
	        {
	          backtrack(c);
	          continue;
	        }

	        if (ok(q, c)) break;
	      }

	      c++;
	    }
	    solution++;
	    cout << "Solution Number: " << solution << "\n";
	    print(q);
	    backtrack(c);
	    test = true;
	  }
	  return 0;
}

