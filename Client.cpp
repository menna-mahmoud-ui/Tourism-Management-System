#include "Client.h"
#include <iostream>
#include <cctype>
using namespace std;
int Client:: count=1;

Client::Client(){}
void Client::insertClient()
    {

		cout<<"          ****   Client form   ****       "<<endl;
		cout<<" Enter the information for client number "<<count<<endl;
		cout<<" Enter Your Name : ";
		getline(cin, name);
		while (attempts--){
		cout<<" Enter Your Email : ";
		getline(cin,email);
		if (email.find('@')&&email.find(".com")!=string::npos){
			break;
		}
		else{
		cout<<"Error ! Email must contain '@' sympol and '.com' . "<<endl;
		if (attempts>0){
			cout <<"you have "<<attempts<<"attempt(s) left "<<endl;
		}
		else {
		cout<<"Too many invalid attempts. Exiting program. ";
		return;
        }
        }
        }
        while (attempts>0){
		cout<<" Enter Your passportNumber : ";
		getline(cin,passportNumber);
		if(passportNumber.length()!=9){
		cout<<" Error! The passport Number must be 9 characters long try again."<<endl;
	     attempts--;
	     continue;
     	}
	    if (! isupper(passportNumber[0])){
	    cout <<"Error! The first character must be an uppercase latter (A-Z)."<<endl;
	    attempts--;
	    continue;
     	}
	    for (int i=1;i<9;i++){
	    	if (! isdigit(passportNumber[i]))
	    	cout<<"Error! Characters 2 to 9 must be digits (0-9)."<<endl;
	    	break;
		}
	  	if (attempts!=0){
     	break;
        }
     	}

		if (attempts==0){
		cout <<"Too many invalid attempts. Exiting program. "<<endl;
		return;
    	}
		UpdateInfo();
		count++;
	
	}
     
     
	void Client:: UpdateInfo()
	{
		cout<<" DO you want to Update the informatiom ? \n yes or no ?";
		getline(cin,update);
		if (update =="yes")
		{
		string choice;
		cout <<"which field do you want to update ? "<<endl;
		cout<<"1. Name \n 2. Email \n 3. Passport Number \n 4. All \n Enter your choice (1/2/3/4): "<<endl;
		getline(cin, choice);
		if (choice=="1"||choice=="4"){
		cout<<" Enter Your new Name : ";
		getline(cin, name);
	}
	if (choice=="2"||choice=="4"){
		while (attempts--){
		cout<<" Enter Your Email : ";
		getline(cin,email);
		if (email.find('@')&&email.find(".com")!=string::npos){
			break;
		}
		else{
		cout<<"Error ! Email must contain '@' sympol and '.com' . "<<endl;
		if (attempts>0){
			cout <<"you have "<<attempts<<"attempt(s) left "<<endl;
		}
		else {
		cout<<"Too many invalid attempts. Exiting program. ";
		return;
        }
        }
        }
	}
	if (choice=="3"||choice=="4"){
		        while (attempts>0){
		cout<<" Enter Your passportNumber : ";
		getline(cin,passportNumber);
		if(passportNumber.length()!=9){
		cout<<" Error! The passport Number must be 9 characters long try again."<<endl;
	     attempts--;
	     continue;
     	}
	    if (! isupper(passportNumber[0])){
	    cout <<"Error! The first character must be an uppercase latter (A-Z)."<<endl;
	    attempts--;
	    continue;
     	}
	    for (int i=1;i<9;i++){
	    	if (! isdigit(passportNumber[i]))
	    	cout<<"Error! Characters 2 to 9 must be digits (0-9)."<<endl;
	    	break;
		}
	  	if (attempts!=0){
     	break;
        }
     	}

		if (attempts==0){
		cout <<"Too many invalid attempts. Exiting program. "<<endl;
		return;
    	}
	}
		cout<<endl;
		DisplayClient();	
		}
		else{
		cout<<"Thank You <3 "<<endl;
		cout<<endl;
	}
	}
	
		void Client:: DisplayClient()
	{
		cout<<"          ****   client information   ****  "<<endl;
		cout<<" Your Name is : "<<name<<endl;
		cout<<" Your Email is : "<<email<<endl;
		cout<<" Your passportNumber is : "<<passportNumber<<endl;
		
	}
		
		
