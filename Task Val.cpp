#include <iostream>
using namespace std;
int play(string year, int holidays,int weekends);
int main()
{
	string year;
	int holidays,weekends;
	float final;
	 cout <<"Enter the year Noraml or Leap: ";
	 cin >>year;
	 cout <<"Enter the number of the holidays in the year: ";
	 cin >>holidays;
	 cout <<"Enter the number of weekends which vladimir travel to home: ";
	 cin >>weekends;
	 final = play(year,holidays,weekends);
	  cout <<"Vladimir plays "<<final << " days in the entire year ";
}
int play(string year, int holidays,int weekends)
{
	int final;
	if (year == "Normal")
	{
	  
	 int free = 48-weekends;
	 float a = free*0.75;
	 float free_holi = 0.66667*holidays;
	 final = a+free_holi+weekends;
}
	 

    if (year == "leap")
    {
    
       int free = 48-weekends;
	 float a = free*0.75;
	 float free_holi = 0.66667*holidays;
	 float Final = a+free_holi+weekends;
	 float b = Final*0.15;
     final = b+Final;	
     
  }

     return final;
}
