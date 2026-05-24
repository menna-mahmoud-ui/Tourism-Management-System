#include"TourismAgency.h"
#include"client.h"
#include"TourPackage.h"
#include"Booking.h"
#include<iostream>
#include <string>
using namespace std;
TourismAgency:: TourismAgency(){}

void TourismAgency::insertClients() {
	::Client c;
	c.insertClient();
	clients.push_back(c);
	cout << "Client added successfully!" << endl;
}

void TourismAgency::insertPackages() {
	::TourPackage P;
	P.insertPackage();
	packages.push_back(P);
	cout << "Tour Package added successfully!" << endl;
}

void TourismAgency ::insertBookings() {
    ::Booking b;
	b.insertBooking();
	bookings.push_back(b);
	cout << "Booking added successfully!" << endl;
}

void TourismAgency::displayAllClients(){
    cout << "    ****  All Clients Information  ****     " << endl;
    for(int i = 0; i < clients.size(); ++i){
    	clients[i].DisplayClient();
    	cout << endl;
    	cout<<"             ****************************************     "<<endl;
    	
	}
}

void TourismAgency::displayAllPackages() {
    cout << "    ****  All Packages Information  ****     " << endl;
    for(int i = 0; i < packages.size(); ++i){
    	packages[i].displayPackage();
    	cout << endl;
		cout<<"             ****************************************     "<<endl;
			
	}
}

void TourismAgency::displayAllBookings() {
    cout << "    ****  All Bookings Information  ****     " << endl;
    for(int i = 0; i < bookings.size(); ++i){
        bookings[i].displayBooking();
		cout << endl;
		cout<<"             ****************************************     "<<endl;	
	}
}

void TourismAgency::searchBookingByID() {
	string find;
	cout<<" Do you want search for a client ? "<<endl;
	    getline(cin,find);
	    if(find=="yes"){
	int id;
	cout <<" Enter the booking id to search  : ";
	cin>>id;
	cin.ignore();
    bool found = false;
    for(int i = 0; i < bookings.size(); ++i){
    	if(bookings[i].getBookingid() == id){
    		bookings[i].displayBooking();
    		found = true;
		}
	}
    if(!found)
    cout << " Booking with ID " << id << " not found!" << endl; 
}
}
void TourismAgency::deleteBookingByID() {
	int id;
	cout <<" Enter the booking id to delete it : ";
	cin>>id;
	cin.ignore();
    for (int i = 0; i < bookings.size(); ++i) {
        if (bookings[i].getBookingid() == id) {
            bookings.erase(bookings.begin() + i);
            cout << "Booking with ID " << id << " deleted successfully!" << endl;
            return;
        }
    }
    cout << "Booking with ID " << id << " not found!" << endl;
    }
    



