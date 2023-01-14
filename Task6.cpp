#include <iostream>
using namespace std;
string checkspeed(float speed);
int main()
{
	float speed;
	string result;
	cout <<"Enter speed: ";
	cin >>speed;
	result = checkspeed(speed);
	cout <<"YOu are going "<< result;
}
string checkspeed(float speed)
{
	string Speed;
	if (speed<=10.00)
	{
		Speed="Slow";
	}
	else if (speed > 10.00 && speed <=50.00)
	{
		Speed="average";
	}
	else if (speed > 50.00 && speed <=150.00)
	{
		Speed="fast";

	}
	else if (speed > 150.00 && speed <=1000.00)
	{
		Speed="ultrafast";
	}
    else if (speed > 1000)
    {
    	Speed = "extremely fast";
	}
	return Speed;
}

