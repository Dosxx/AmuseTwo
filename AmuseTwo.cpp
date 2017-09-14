// Author:	Kekeli D Akouete		
// Source file:	Amusetwo.cpp
// Description:	Amusement park cashier receipt application	
// IDE used:	NetBean IDE 8.1

#include <iostream>
#include <iomanip>
using namespace std;

//Place constants here
const double CHILDPRICE = 12.00;
const double ADULTPRICE = 26.50;
const double DISCNT = 3.00;
const double SECURITY_FEE = 15.00;

int main ()

{	
//Place variables here
    int childTicket,adultTicket,totalTicket,conf_numb = 99;
    double childTotal,adultTotal;
    double total_Bill,payment,change;
      

//The following cout will output the title

	cout << "\n                        Chesapeake Amusement Park" << endl << endl;
        
//Place input statements here
        
        cout << "          Enter children tickets or -1 to Stop. . . ";
        cin >> childTicket;
    while(childTicket > -1)
    {
        cout << "          Enter adults tickets  . . . . . . . . . . ";
        cin >> adultTicket;
        conf_numb += 1;
//Place calculations here   
        childTotal = (childTicket * CHILDPRICE)-((childTicket/4)*CHILDPRICE);
    if(adultTicket > 5)
        adultTotal = (adultTicket * ADULTPRICE) - DISCNT;
    else
    {
        adultTotal = adultTicket * ADULTPRICE;
    }
        totalTicket = childTicket + adultTicket;
        
     if(totalTicket > 20 || childTicket >= 14)
     {
        total_Bill = childTotal + adultTotal + SECURITY_FEE;
     }
     else
          total_Bill = childTotal + adultTotal;
        
// Output formating here
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "\n\n                        Chesapeake Amusement Park";
	cout << "\n                        -------------------------";
	cout << "\n\n                       Tickets        Price        Total\n";

	cout << "              Children  " << setw(3)  << childTicket 
		                   << setw(16) << CHILDPRICE 
				   << setw(13) << childTotal << endl;
        cout << "              Adults    "  << setw(3)    << adultTicket
                                       << setw(16) << ADULTPRICE
                                       << setw(13) << adultTotal << endl;
        cout << "                        " << setw(3) << totalTicket << endl 
                                                       << endl;
    if(totalTicket > 20 || childTicket >= 14) {   
        cout << "                   Security Fee" << setw(15) << "        $" << setw(10)
                                            << SECURITY_FEE << endl;
                        }
        
//Place remaining input/output statements here
        cout << "                    Total Bill "  << setw(15) <<"        $" << setw(10)  
                                           << total_Bill << endl <<endl;
    do
    {    
        cout << "                    Cash received ....";
        cin >> payment;
        if(payment < total_Bill)
            cout << "                Cash must be >= to Total Bill"<< endl << endl; 
    }    
    while(payment < total_Bill);
    
        change = payment - total_Bill;
        cout << "               Change          " << setw(25) << change 
                                                                   << endl;
        cout << "               Confirmation Number = " << conf_numb ;
        cout << "\n\n";
        
        cout << "          Enter children tickets or -1 to Stop. . . ";
        cin >> childTicket;
    }
        
    return 0;

}


