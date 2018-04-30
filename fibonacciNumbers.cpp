/*************************************************************************************************
Print the nth number of Fibonacci number 
prints either if the n is prime or not 
prints n numbers of Fibonacci numbers
*************************************************************************************************/
#include <iostream>
using namespace std;
int Fibonacci (int x)
{
    if (x <= 1)
      return x;
   return Fibonacci(x-1) + Fibonacci(x-2);
}
void prime (int x)
{	if (x==1 || x==2)
	{
		cout << x << " is prime \n";
	}	
		for(int i = 2; i<x; i++)
		{
			if (x%i==0)
			{	
				cout << x << " is not prime \n";
				break;
			}
			if (x%i!=0)
			{
                		cout << x << " is prime \n";
				break;
			}  	
		}		
}
int main ()
{
    int numbers, next, first = 0, second = 1;
    cout << "Enter a number: ";
    cin >> numbers;
    if (numbers==1)
    {
        cout << Fibonacci(numbers) << " is the " << numbers << "st Fibonacci number \n";
    }
    if (numbers==2)
    {
        cout << Fibonacci(numbers) << " is the " << numbers << "nd Fibonacci number \n";
    }
    if (numbers==3)
    {
        cout << Fibonacci(numbers) << " is the " << numbers << "rd Fibonacci number \n";
    }
    if (numbers != 1 && numbers != 2 && numbers != 3)
    {
        cout << Fibonacci(numbers) << " is the " << numbers << "th Fibonacci number \n";
    }
    prime(numbers);
    cout << "First " << numbers << " Fibonacci Numbers: ";
    for (int c = 1 ; c <= numbers ; c++ )
    {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << " ";
   }
 
   return 0;
}

