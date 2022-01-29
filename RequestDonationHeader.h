#ifndef REQUESTDONATIONHEADER_H_INCLUDED
#define REQUESTDONATION_H_INCLUDED

#include "EntityHeader.h"

#include <iostream>

using namespace std;


class RequestDonation

{
	private: 
  
    Entity entity;
	
	double quantity;
	
	public:
		
		RequestDonation(Entity, double);
		
		RequestDonation();
		
		Entity getEntity();
		
		double getQuantity();
		
		void setEntity(Entity);
		
		void setQuantity(double);
	
	
};

#endif
