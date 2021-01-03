/*
Name: Michael Ng Cen
CS211 Homework 7: Stable Marriage
*/
#include <iostream>
using namespace std;
int mp[3][3]={0,2,1, 
              0,2,1, 
              1,2,0};
              
int wp[3][3]={2,1,0,
              0,1,2,
              2,0,1};
              
bool ok(int q[], int c) 
{
   for (int i = 0; i < c; i++) 
   {
      if (q[c] == q[i]) 
      {
         return false;
      }
      if ((mp[c][q[i]] < mp[c][q[c]]) && (wp[q[i]][c] < wp[q[i]][i])) 
      {
         return false;
      }
      if ((wp[q[c]][i] < wp[q[c]][c]) && (mp[i][q[c]] < mp[i][q[i]])) 
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

void print(int q[]) 
{
   int i, j;
   cout << "Man" << "  " << "Woman" << endl;
   for (i = 0; i < 3; i++) 
   {
      cout << i << "    " << q[i] << endl;
   }
   cout << "\n";
}

int main() 
{
   int solution = 0;
   int q[3];
   q[0] = 0;
   int c = 1;
   bool test = false;
   while (true) 
   {
      while (c < 3) 
      {
         if (!test)
            q[c] = -1;
         test = false;
         while (q[c] < 3) 
         {
            q[c]++;
            while (q[c] == 3) 
            {
               backtrack(c);
               q[c]++;
            }
            if (ok(q, c))
               break;
         }
         c++;          }
      solution++;
      cout << "Solution Number: " << solution << "\n";
      print(q);
      backtrack(c);
      test = true;
   }
   return 0;
}



