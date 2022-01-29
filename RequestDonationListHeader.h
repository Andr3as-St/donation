#ifndef REQUESTDONATIONLISTHEADER_H_INCLUDED
#define REQUESTDONATIONLISTHEADER_H_INCLUDED

#include <iostream>
#include <vector>
#include <typeinfo>

#include "RequestDonationHeader.h"


using namespace std;

class RequestDonationList


{
	private:
		vector<RequestDonation> rdEntities;
	
	public:
		vector<RequestDonation> getList();
		
		RequestDonation get(int);
		
		void remove(int);
		
		void modify(int, double);
		
		void monitor();
		
		void reset();
		
		void add(RequestDonation);
		
		
};

class Beneficiary;
class Organization;

class Requests: public RequestDonationList

{
	public:
		bool validRequestDonation(RequestDonation, Beneficiary);
		
		void add(Beneficiary, RequestDonation);
		
		void commit(Beneficiary, Organization o);
		
	    void modify(Beneficiary, RequestDonation, double);
		
		
	
};

class Donator;

class Organization;

class Offers: public RequestDonationList

{

public:
	
	void add(Donator, RequestDonation);
		
		void commit(Donator, Organization);
		
	    void modify(Donator, RequestDonation, double);

};





#endif
