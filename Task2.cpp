#include <iostream>
using namespace std;
int isgreat(int num1,int num2,int num3);
int main()
{
	int result,num1,num2,num3;
  cout <<"Enter first number: ";
  cin >>num1;
  cout <<"Enter second number: ";
  cin >>num2;
  cout <<"Enter third number: ";
  cin >>num3;
  
  result = isgreat(num1,num2,num3);
  cout <<"The greater number is "<<result;
  
  result = isgreat(num1,num2,num3);
  cout <<"INvalid";
  
}
int isgreat(int num1,int num2,int num3)
{
	if (num1 > num2 && num1 >num3)
	{
	   return num1;
	}
	else if (num2 >num3 && num2>num1)
	{
		return num2;
		
	}
	else if (num3>num1 && num3>num2)
	{
		return num3;
	}
	else 
	{
	  return=0;
	}
}

