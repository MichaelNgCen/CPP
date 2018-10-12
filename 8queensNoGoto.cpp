/*
Name: Michael Ng Cen
CS211 Homework 4: 1D 8 queens with goto
Fall 2018
*/
#include <iostream> 
#include <cmath>
using namespace std;
bool isOK(int q[], int col) 
{
   for (int i = 0; i < col; i++) 
   {
      if (q[i] == q[col] || ((col - i) == abs(q[col] - q[i]))) 
      {
         return false;
      }
   }
   return true;
}
void backtrack(int & col) 
{
   col--;
   if (col == -1) 
   {
      exit(0);
   }
}
void print(int q[]) {
   for (int x = 0; x < 8; x++) 
   {
      cout << q[x] << " ";
   }
   cout << endl << endl;

}

int main() 
{
   int q[8], c = 0, usedbacktrack = 0, solution = 0;
   q[0] = 0;
   c++;
   while (true) 
   {
      while (c < 8) 
      {
         if (!usedbacktrack) 
         {
            q[c] = -1;
         }
         usedbacktrack = 0;
         while (q[c] < 8) 
         {
            q[c]++;
            while (q[c] == 8) 
            {
               backtrack(c);
               q[c]++;
            }
            if (isOK(q, c)) 
            {
               break;
            }
         }
         c++;
      }
      solution++;
      cout << "Solution Number: " << solution << endl;
      print(q);
      backtrack(c);
      usedbacktrack = 1;
   }
}
