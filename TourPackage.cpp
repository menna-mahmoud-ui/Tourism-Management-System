#include "TourPackage.h"
#include <iostream>
using namespace std;
int TourPackage::availableSeats=100000;
TourPackage :: TourPackage(){}

void TourPackage :: insertPackage()
    {
    
		cout<<"          ****   Package form   ****  "<<endl;
		cout<<" Enter the packageID : ";
		getline(cin,packageID);
		cout<<" Enter the Destination : ";
		getline(cin,destination);
		cout<<" Enter the date : ";
		getline(cin,date);
		availableSeats--;
		if (availableSeats>0){
			cout<<" package added successfully . \n seats left : "<<availableSeats<<endl;
			updatePackage();
		}
		else 
		cout<<" sorry, there are no avaiable Seats here! "<<endl;
	}
	
	void TourPackage:: updatePackage()
	{
		cout<<" DO you want to Update the informatiom or add a package ?  \n 1-Add Package \n 2-Update the information \n 3-thank you \n Enter your choice : ";
		cin>>Choice;
		cin.ignore();
		if(Choice==1){
			if(availableSeats!=0){
			insertPackage();
			availableSeats--;
		}
		else 
	    cout<<" sorry, there is no avaiable Seats here! "<<endl;
		}
		
		else if (Choice==2){
		cout<< "           ***** update package form ***** " <<endl;
		cout<<" Enter the new Destination : ";
		getline(cin,destination);
		cout<<" Enter the new date : ";
		getline(cin,date);
		cout<<" Package information was updated successfully "<<endl;
	}
	}
	
	void TourPackage:: displayPackage()
	{
		cout<<"          ****   Package information   ****  "<<endl;
		cout<<" Package ID : "<<packageID<<endl;
		cout<<" Destination : "<<destination<<endl;
		cout<<" Date : "<<date<<endl;
		cout<<" AvaiableSeats : "<<availableSeats<<endl;
	}
	
