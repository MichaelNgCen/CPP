/*  Name: Ng Cen, Michael
 * Description: Program converts amount of money to bills needed. */
  
#include <iostream>
using namespace std;
int main()
{
	int tot_money;
 	int twenties, tens, fives, singles;
 
 	cout << "Enter the amount of money:\n";
 	cin >> tot_money;
 	twenties = tot_money/20;
 	tens = tot_money%20 / 10;
 	fives = tot_money%10 / 5;
 	singles = tot_money%5;
 	cout << twenties << " twenties + " << tens <<" tens + " << fives <<" fives + " << singles <<" singles \n";
 
return 0;
}

