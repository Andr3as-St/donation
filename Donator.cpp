#include "UserHeader.h"

#include "RequestDonationListHeader.h"


Donator::Donator(string name, string phone): User(name, phone)

{
	
}

Donator::Donator():User()

{
	
}

Offers Donator::getOfferList()
		
		{
			
			return offersList;
		}
		
void Donator::showOfferList()
		
		{
			if(offersList.getList().size()==0)
			
			{
				cout <<"Adeia Offers List!!!"<<endl;
				
			}
			else
			
			
			{
				int i;
				
				for(RequestDonation &r : offersList.getList())
				
				{
					cout <<r.getEntity().getName();
										
					cout <<r.getQuantity();
					
					cout <<endl;
					
					
				}
				
				
				
			}
			
			
			
		}
