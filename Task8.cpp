#include <iostream>
using namespace std;
float price(int bughet,string category,int people);
int main()
{
	int bughet,people,ticketprice;
	float amount,amount_after_ded;
	string category;
	float famount,x;
	
	cout <<"Enter your total group bughet from 1000 to 1000000 : ";
	cin >>bughet;
	
	cout <<"Enter the ticket category which you want to buy Vip Or NOrmal: ";
	cin >>category;
	
	cout <<"Enter number of peoples in your group from 1 to 200 : ";
	cin >>people;
	
	amount_after_ded = price(bughet,category,people);
	
   	if (amount_after_ded > 0)
	{
		cout <<"You have "<<amount_after_ded <<" QR left ";
	}
	else 
	{
		x = amount_after_ded*(-1);
		cout <<"Dont have enough money you need "<<x <<" QR ";
	}
	



}
	float price(int bughet,string category,int people)
	{
	   float ticketprice,amount,Ramount,famount,amount_after_ded;
	  
     if (category == "Normal")
     {
        ticketprice=249.99;
	 
	 if (people <=4)
	 {
		amount = 0.75*bughet;
		Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
	   			 
	 }
	  else if (people>=5 && people <= 9)
	  {
	    amount = 0.60*bughet;
		Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
		
	  }
	   else if (people>=10 && people <=24)
	  {
	    amount = 0.50*bughet;
		Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
		
	  }
	   else if (people>=25 && people <= 49)
	  {
	    amount = 0.40*bughet;
		Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
	  }
	   else if (people >= 50 )
	  {
	    amount = 0.25*bughet;
		Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;

	  }
}
      if (category == "Vip")
     {
     	ticketprice=499.99;
	 
	  if (people<=4)
	  {
		amount = 0.75*bughet;
		Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
	
	  }
	  else if (people>=5 && people <= 9)
	  {
	    amount = 0.60*bughet;
	   Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
	
	  }
	   else if (people>=10 && people <= 24)
	  {
	    amount = 0.50*bughet;
		Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
		
	  }
	   else if (people>=25 && people <= 49)
	  {
	    amount = 0.40*bughet;
	    Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded =Ramount-famount;
	  }
	   else if (people >= 50 )
	  {
	    amount = 0.25*bughet;
	   Ramount = bughet-amount;
		famount = people*ticketprice;
		amount_after_ded = Ramount-famount;
		
      }
   }
   
	      
    return amount_after_ded;

    
}
