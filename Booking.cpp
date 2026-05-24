#include"Booking.h"
#include "Client.h"
#include "TourPackage.h"
#include<iostream>
#include <string>
using namespace std;
	double price=0.0;
Booking :: Booking() {}

int Booking :: getBookingid() {
return bookingId;
}

void Booking :: insertBooking(){
	
	count =0;
	maxAttempts=5;
	cout<<"           **** Booking form ****    "<<endl;
	cout<<" Enter Booking ID: ";
	cin>>bookingId;
	cin.ignore();
	cout<<" Enter Booking Date: ";
	getline(cin, bookingdate);
	cout<<" Enter Number of Guests: ";
	cin>>numberofGuests;
	cin.ignore();
    while (!paymentSuccess) {
        cout << "Please choose a Payment Method: \n1- Visa \n2- Cash \n3- Bank Transfer" << endl;
        getline(cin, paymentMethod);

        if (paymentMethod == "Visa") {
            cout << "You choose Visa.\nEnter visa card number: ";
            cin >> visaCardNumber;
            cin.ignore();
            cout << "Please enter the Expiry Date of your card: ";
            cin >> expiryDate;
            cin.ignore();
            cout << "Please enter your card's CVV (the 3-digit number on the back of your card): ";
            cin >> CVV;
            cin.ignore();

            while (visaCardNumber.length() != 16 && count < maxAttempts) {
                count++;
                if (count == maxAttempts) {
                    cout << "You have exceeded the maximum number of attempts.\n";
                    cout << "Please choose another Payment Method.\n";
                    cin.ignore();
                    break;
                }
                cout << "Error. The card number must be 16 digits.\nPlease try again. " << (maxAttempts - count) << " attempts left.\n";
                cout << "Enter visa card number again: ";
                cin >> visaCardNumber;
                cin.ignore();
            }

            if (visaCardNumber.length() == 16) {
                cout << "The payment was successfully completed.\n";
                paymentSuccess = true;
            }
            else { 
                continue; 
            }
        } 
        else if (paymentMethod == "Bank Transfer") {
            cout << "You chose Bank Transfer.\nPlease proceed with the transfer to our bank account.\n";
            paymentSuccess = true;
        }
        else if (paymentMethod == "Cash") {
            cout << "You chose Cash.\nPlease visit our office to pay and confirm your booking.\n";
            paymentSuccess = true;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
   	calculateRewardsandDiscount();

	cout <<" Would you like to add something to your booking ?\n (yes|no) ";
	cin>>addMore;
	cin.ignore();
	if (addMore=="yes"){
	cout<<" Enter Special Requests: ";
	getline(cin, specialRequests);
	updateBooking();
}

	
}

void Booking :: displayBooking() {

	cout<<"       ****    Booking Information    ****      "<<endl;
	cout<<" Booking ID: " << bookingId << endl;
	cout<<" Booking Date: " << bookingdate << endl;
	cout<<" Guests: " << numberofGuests << endl;
	cout<<" Payment Method: " <<paymentMethod << endl;
	cout<<" Special Requests: " << specialRequests << endl;
	cout<<" Reward Points: " << rewardPoints << endl;
	cout<<" Discount %: " << discountPercent << "%" << endl;
	cout<<" Total After Discount: " << price << endl;

}

void Booking :: updateBooking(){
	cout<<" DO you want to Update the informatiom or add Booking ?  \n 1-Add Booking \n 2-Update the information \n 3-thank you \n Enter your choice : ";
	cin>>Choice;
		cin.ignore();
		if(Choice==1)
			insertBooking();
	else if (Choice==2){
    cout<<"      ****   Update Booking   ****" << endl;	
	cout<<" New Booking Date: ";
	getline(cin, bookingdate);
	cout<<" New Number of Guests: ";
	cin>>numberofGuests;
	cin.ignore();
	cout<<" New Payment Method: ";
	getline(cin, paymentMethod);
	cout<<" New Special Requests: ";
	getline(cin, specialRequests);
	calculateRewardsandDiscount();
	displayBooking(); 
}
}

void Booking :: calculateRewardsandDiscount(){

	cout<<"Enter the price : ";
	cin>>price;
	cin.ignore();
	rewardPoints = static_cast<int>( price / 1000);//modern type casting
	discountPercent = rewardPoints * 0.1 ;
	if(discountPercent > 20.0)
	discountPercent = 20.0;
	double discountValue = price * (discountPercent / 100.0);
	price -= discountValue;
	cout<<" Reward Points: " << rewardPoints << endl;
	cout<<" Discount %: " << discountPercent << "%" << endl;
	cout<<" Total After Discount: " << price << endl;
}


