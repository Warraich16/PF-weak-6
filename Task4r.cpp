#include <iostream>
using namespace std;
float totalincome(string screening,int rows,int colums);
int main()
{
	float result;
	string screening;
	int rows,colums;
 cout <<"Enter screening: ";
 cin >>screening;
 cout <<"Enter number of rows: ";
 cin >>rows;
 cout <<"Enter number of colums: ";
 cin >>colums;	
 result= totalincome(screening,rows,colums);
 cout <<"total bill is: "<<result;
}
float totalincome(string screening,int rows,int colums)
{
	float bill;
	
	if (screening=="Premier")
	{
		bill=12.00*rows*colums;
	}
	if (screening=="Normal")
	{
		bill=7.50*rows*colums;
	}
	if (screening=="discount")
	{
		bill=5.00*rows*colums;
	}
	return bill;
	
}
