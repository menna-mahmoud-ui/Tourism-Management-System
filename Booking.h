#ifndef BOOKING_H
#define BOOKING_H
#include "TourPackage.h"
#include "Client.h"
#include<iostream>
#include <string>
#include <vector>
using namespace std;
class Booking : public Client, public TourPackage
{
	
		protected:
		int bookingId;
		string bookingdate;
		int numberofGuests;
		
		string discountCode;
		string paymentMethod;
		string specialRequests;
		
		double rewardPoints;
		double discountPercent;
		double totalAmount;
		
		string visaCardNumber;
		string expiryDate;
		string CVV;
		
		bool paymentSuccess = false;
		string addMore;
		vector<Booking> bookings;
		
		public:
		int count;
		int maxAttempts;
		Booking();
		
		void insertBooking();
		void displayBooking();
		void deleteBooking();
		
		void calculateRewardsandDiscount();
		int getBookingid() ;
		void updateBooking();
		
		bool empty();
};
#endif
