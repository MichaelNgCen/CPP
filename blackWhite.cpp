#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int c) {
   for (int i = 0; i < c; ++i)
      if (q[i] == q[c] || abs(q[i] - q[c]) == c - i)
         return false;
   return true;
}

void print(int q[]) {
   static int solution = 0;
   int i, j, k, l;
   typedef char box[5][7];   
   box bb, wb, *board[8][8];
   char ws = '*';
  char _e = ' ';

    for (i=0; i<5; i++)
      for (j=0; j<7; j++) {
         bb[i][j] = ' ';
         wb[i][j] = '*';
      }

    box bq ={
            ws, ws, ws, ws, ws, ws, ws,
            ws, _e, ws, _e, ws, _e, ws,
            ws, _e, _e, _e, _e, _e, ws,
            ws, _e, _e, _e, _e, _e, ws,
            ws, ws, ws, ws, ws, ws, ws
    };


    box wq ={
            _e, _e, _e, _e, _e, _e, _e,
            _e, ws, _e, ws, _e, ws, _e,
            _e, ws, ws, ws, ws, ws, _e,
            _e, ws, ws, ws, ws, ws, _e,
            _e, _e, _e, _e, _e, _e, _e
    };


   for(i=0; i<8; i++)
      for(j=0; j<8; j++)
         if((i+j)%2 == 0){
            if(q[i] ==j)
              board[i][j] = &wq;
              else
              board[i][j] = &wb;
         }
         else {
            if(q[i] == j)
              board[i][j] = &bq;
              else
              board[i][j] = &bb;
         }
   

   cout << "Solution #" << ++solution << ":\n ";
   

   for (i=0; i<7*8; i++)
      cout << '_';
   cout << "\n";

 
   for (i=0; i<8; i++)          
      for (k=0; k<5; k++) {     
         cout << '|';
         for (j=0; j<8; j++)    
            for (l=0; l<7; l++) 
               cout << (*board[i][j])[k][l];
         cout << '|' << "\n";
      }

   
   cout << " ";
   for (i=0; i<7*8; i++)
      cout << '_';
   cout << "\n\n";
}

void next(int q[], int c) {
   if (c == 8)
      print(q);
   else for (q[c] = 0; q[c] < 8; ++q[c])
      if (ok(q, c))
         next(q, c+1);
}

int main() {
   int q[8];
   next(q, 0);
   return 0;
}