/*
Michael Ng Cen
CS211 Homework 3: 8 Queens
Fall 2018
*/
#include <iostream>
using namespace std;

int main ()
{
    int numberOfSolution = 0;
    int b[8][8] = { 0 }, r, c = 0;
    b[0][0] = 1;
nc:
    c++;
    if (c == 8)
        goto print;
    r = -1;
nr:
    r++;
    if (r == 8)
        goto backtrack;

    for (int i = 0; i < c; i++)	
        if (b[r][i] == 1)
            goto nr;
    for (int i = 1; (r - i) >= 0 && (c - i) >= 0; i++)	
        if (b[r - i][c - i] == 1)
            goto nr;
    for (int i = 1; (r + i) < 8 && (c - i) >= 0; ++i)	
        if (b[r + i][c - i] == 1)
            goto nr;
    b[r][c] = 1;
    goto nc;

backtrack:
    c--;
    if (c == -1)
    { 
        return 0;
    }
    r = 0;
    while (b[r][c] != 1)
        r++;
    b[r][c]=0;
    goto nr;
print:
    numberOfSolution++;
    cout << "Solution # " << numberOfSolution << endl;
    for (r = 0; r < 8; r++)
    {
      for (c = 0; c < 8; c++)
	{
	  cout << b[r][c] << " ";
	}
      cout << endl;
    }
    cout << endl;
    goto backtrack;
}

