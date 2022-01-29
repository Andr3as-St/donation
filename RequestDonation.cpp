#include "RequestDonationHeader.h"



RequestDonation::RequestDonation(Entity entity, double quantity):entity(entity),quantity(quantity)
		
{
			
}
		
RequestDonation::RequestDonation()
		
{
			
}
	
Entity RequestDonation::getEntity()
	
	{
		return this->entity;
	}
	
void RequestDonation::setEntity(Entity entity)
	
	{
		this->entity = entity;
	}
	
double RequestDonation::getQuantity()
	
	{
		
		return this->quantity;
	}
	
void RequestDonation::setQuantity(double quantiy)
	
	{
		this->quantity = quantity;
	}
	
