#ifndef USERHEADER_H_INCLUDED
#define USERHEADER_H_INCLUDED

#include <iostream>

#include "RequestDonationListHeader.h"

using namespace std;

class User

{
	private:
	string name;
	string phone;
	
	public:
		
		User(string, string);
		
		User();
		
		string getName();
		
		void setName(string);
		
		string getPhone();
		
		void setPhone(string);
		
	
	
};

class Admin: public User

{
	private:
		bool isAdmin = true;
		
	public:
		Admin(string, string);
		Admin();
		bool is_Admin();
			
	
	
};

class Entity;


class Requests;

class RequestDonationList;


class Beneficiary: public User

{
	private:
		
	int noPersons=1;
		
	RequestDonationList receivedList;
		
	Requests requestsList;
	
	public:
		
		Beneficiary(string, string);
		
		Beneficiary();
		
		int getPersons();
		
		void setPersons(int);
		
		RequestDonationList getReceivedList();
		
		Requests getRequestList();
		
		double quantity_from_entity(Entity);
		
		void showReceivedList();
		
		void showRequestList();
		
};

class Offers;

class Donator: public User

{
	private:
	
	Offers offersList;	
	
   public:
   	    
   	    Donator(string, string);
   	    
   	    Donator();
   	   
   		Offers getOfferList();
   		
   		void showOfferList();
   		
	
};



#endif
