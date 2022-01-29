#include "RequestDonationListHeader.h"
#include "UserHeader.h"
#include "OrganizationHeader.h"


void Offers::add(Donator don, RequestDonation req)
	
	{
	
		don.getOfferList().getList().push_back(req);
		
	}
	
void Offers::commit(Donator don, Organization o)

{
	int i;
	      
	   for(RequestDonation &r: don.getOfferList().getList())
	   
	   {
	   	o.getDonations().getList().push_back(r);
	   	
	   }
	
		don.getOfferList().reset();
	
}

void Offers::modify(Donator don , RequestDonation req, double posotita) 

{
   
   don.getOfferList().RequestDonationList::modify(req.getEntity().getId(),posotita);
	
}
