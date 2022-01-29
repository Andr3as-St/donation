#include "UserHeader.h"

#include "RequestDonationListHeader.h"


Beneficiary::Beneficiary(string name, string phone):User(name,phone)

{
	
}

Beneficiary::Beneficiary():User()

{
	
}

int Beneficiary::getPersons()
		{
			return this->noPersons;
		}
			
		void Beneficiary::setPersons(int noPersons)
		
		{
			this->noPersons = noPersons;
		}
		
		RequestDonationList Beneficiary::getReceivedList()
		
		{
			
			return receivedList;
		}
		
		
		double Beneficiary::quantity_from_entity(Entity e)
		
		{
			double total = 0.0;
						
			for(RequestDonation & r: receivedList.getList())
			
			{
				
				if(r.getEntity().getId()==e.getId())
				
				{
					total = total + r.getQuantity();
				}
				
				
			}

          return total;
		}
				
		void Beneficiary::showReceivedList()
		
		{
			if(receivedList.getList().size()==0)
			
			{
				cout <<"Adeia Received List!!!"<<endl;
				
			}
			else
			
			
			{
				int i;
				
				for(RequestDonation &r : receivedList.getList())
				
				{
					cout <<r.getEntity().getName();
										
					cout <<r.getQuantity();
					
					cout <<endl;
					
					
				}
				
				
				
			}
			
			
			
		}
	
	Requests Beneficiary::getRequestList()
	
	{
		return requestsList;
	}
	
	void Beneficiary::showRequestList()
	
	{
		
		
		if(requestsList.getList().size()==0)
		
		{
			cout<<"Adeia Requests List"<<endl;
		}
		
		for(RequestDonation & r : requestsList.getList())
		
		{
			cout<<r.getEntity().getName()<<endl;
			cout <<r.getQuantity()<<endl;
			
		}
				
	}
