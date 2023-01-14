#include <iostream>
using namespace std;
string checktitle(char gender,int age);
int main()
{
	int age;
	char gender;
	string result;
	cout <<"Enter your gender: ";
	cin >>gender;
	cout <<"Enter your age: ";
	cin >>age;
	result = checktitle(gender,age);
	cout <<"YOur gender is :"<<result;
}
string checktitle(char gender,int age)
{
	string Gender;
	if (gender =='m'&& age>=16)
	{
		Gender = "Mr.";
	}
	
	if (gender =='m'&& age<16)
	{
		Gender = "Master";
	}
	
	if (gender =='F'&& age>=16)
	{
		Gender = "Ms.";
	}
	
	if (gender =='F'&& age<16)
	{
		Gender = "Miss";
	}
	return Gender;
}
