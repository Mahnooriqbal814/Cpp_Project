#include<iostream>
using namespace std;

int main()
{
int number1, number2, smallest ;
cout<<"Enter first number: ";
cin>>number1;
cout<<"Enter second number: ";
cin>>number2;
    
if(number1<number2)
{
smallest=number1;
}
else
{
smallest=number2;
}
cout<<"Smallest of the two number is: "<<smallest;
return 0;
}
