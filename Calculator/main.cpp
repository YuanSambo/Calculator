#include <iostream>
using namespace std;

float calculate(const float num1,const char operation,const float num2)
{
	switch(operation)
  {

	case'+': return num1+num2;
	case'-': return num1-num2;
	case'*': return num1*num2;
	case'/': return num1/num2;
	default: cout<<"Logical Error";
  }
	
	
	
}

int main()
{
    float a,b;
    char op;
   cout<<"Welcome to Yuan's Calculator \n";  // ANG CRINGE POTEK
   cout<<"Enter a two numbers: ";
   cin>>a>>b;
   cout<<"\n Enter Operation : ";
   cin>>op;
   
  cout<<a<<op<<b<<"="<<calculate(a,op,b);
	
	
	
	
}
