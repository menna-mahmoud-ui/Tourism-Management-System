#ifndef CLIENT_H
#define CLIENT_H
#include<string>
using namespace std;
class Client
{
	    public:
		string name;
		string email;
		string passportNumber;
		
		string update;
		string search;
		string find;
		
		int attempts=4;
		static int count;
		
		public:
		Client();
		void UpdateInfo();
		void DisplayClient();
		void insertClient();
    
};
#endif

