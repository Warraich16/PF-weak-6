#include <iostream>
using namespace std;
char calagg(int marks);
int main()
{
	int marks;
	char result;
	cout <<"Enter marks: ";
	cin >>marks;
	result =calagg(marks);
	cout <<"YOur grade is :"<<result;
	
	
}
char calagg(int marks)
{ 
    char grade;
	if (marks < 50)
	{
		grade = 'F';
	}
	else if (marks >50 && marks<60)
	{
		grade = 'E';
	}
	else if (marks >61 && marks <70)
	{
		grade ='D';
	}
    else if (marks >71 && marks <80)
    {
    	grade ='C';
	}
	else if (marks >81 && marks <85)
	{
		grade ='B';
	}
	else if (marks > 85)
	{
		grade ='A';
	}
	
    else 
    {
    	grade = 'A';
	}
	return grade;

}

