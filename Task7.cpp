#include <iostream>
using namespace std;
float lowestprice(int kilometers,string time);
int main()
{
	int kilometers;
	string time;
	float result;
	cout <<"Enter number of kilometers: ";
	cin >>kilometers;
	cout <<"Enter time day or night: ";
	cin >>time;
	result = lowestprice(kilometers,time);
	cout <<"The cheapest price is: "<<result;
	
}
float lowestprice(int kilometers,string time)
{
	float price;
	if (time=="day"&& kilometers<20)
	{
		price = 0.70+(0.79*kilometers);
        		
	}
	else if (time=="night"&&kilometers<20)
	{
		price =0.70+(0.90*kilometers);
		
	}
	else if (time=="day"&&"night"&&kilometers >20 && 100)	
	{
	    price = 0.09*kilometers;	
	}	
	else if (time=="day"&&"night"&& kilometers >=100)	
	{
	    price = 0.06*kilometers;	
	}	
	return price;
	
	
}

