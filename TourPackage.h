#ifndef TOURPACKAGE_H
#define TOURPACKAGE_H
#include<string>
using namespace std;
class TourPackage
{
        protected:
		string packageID;
		string destination;
		string date;
		
	    int Choice;
		string updatePackageInformation;
		static int availableSeats;
		
		public:
		TourPackage();
		void updatePackage();
		void displayPackage();
		
		void insertPackage();
};
#endif
