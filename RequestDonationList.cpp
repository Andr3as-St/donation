#include "RequestDonationListHeader.h"


vector<RequestDonation> RequestDonationList::getList()
	
	{
		return this->rdEntities;
	}
	
void RequestDonationList::add(RequestDonation req)
	
	{
					
			int found=0;
			
			for(RequestDonation & e : rdEntities)
			
			{
				if(e.getEntity().getId()==req.getEntity().getId())
				
				{
					found =1;
					
					double newpos = e.getQuantity()+ req.getQuantity();
					
					e.setQuantity(newpos);
					
					break;
				}
				
				
			}
			
			if(found==0)
			
			{
				rdEntities.push_back(req);
			}
						
		}	
	
RequestDonation RequestDonationList::get(int kodikos)
	
	{
	  
	  RequestDonation req;
		
	   for(RequestDonation & e : rdEntities)
		
		{
			if(e.getEntity().getId()==kodikos)
			
			{
				req = e;
				
				break;
			}
						
		}
		
		return req;
	}
	
void RequestDonationList::remove(int kodikos)
	
	{
		int mikos,i;
		
		mikos = rdEntities.size();
		
		for(i=0;i<mikos;i++)
		
		{
			if(rdEntities[i].getEntity().getId()==kodikos)
			
			{
				rdEntities.erase(rdEntities.begin()+i);
				
				break;
				
			}			
		}
				
	}

void RequestDonationList::modify(int kodikos, double pos)
	
	{
		
		
			for(RequestDonation & e : rdEntities)
		
		{
			if(e.getEntity().getId()==kodikos)
			
			{
				
				e.setQuantity(pos);
				
				break;
				
			}
				
		}
		
		
	}
	
	
void RequestDonationList::monitor()
	
	{		
		for(RequestDonation & e : rdEntities)
		
		{
		    
			cout<<endl;
			cout <<"Onoma Entity:"<<e.getEntity().getName()<<"\nPosotita:"<<e.getQuantity()<<endl;
			cout<<endl;
			
		}
		
	}
	
	
void RequestDonationList::reset()
	
	{
		rdEntities.clear();
	}
	

