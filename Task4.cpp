#include <iostream>
using namespace std;
float discount(int amount,string day,string month);
int main()
{
	int amount;
	float result;
	string day,month;
	cout <<"ENter total amount: ";
	cin >>amount;
	cout <<"Enter day: ";
	cin >>day;
	cout <<"ENter month:";
	cin >>month;
	result = discount(amount,day,month);
	cout <<"your total bill after deduction is :"<<result;
}
float discount(int amount,string day,string month)
{ 
   float payable=amount;
	if (day=="Sunday"&& (month=="October"||"March"||"August" ))
	{
		payable = amount -((amount *10)/100);
		
	}

	else if (day =="MOnday"&& month == "November"||"December")
	{
			payable = amount -((amount *5)/100);
	}
	else 
	{
		payable;
	}
	return payable;
	
}
