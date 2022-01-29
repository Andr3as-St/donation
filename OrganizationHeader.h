#ifndef ORGANIZATIONHEADER_H_INCLUDED
#define ORGANIZATIONHEADER_H_INCLUDED


#include "UserHeader.h"


#include <iostream>
using namespace std;

class Admin;

class Organization

{
	private:
		string name;
		
		Admin admin;
		
		vector<Entity> entityList;
		
		vector <Donator> donatorList;
		
		vector <Beneficiary> beneficiaryList;
		
		RequestDonationList currentDonations;
		
		public:
		Organization(string);
		
		Organization();
		
		Admin getAdmin();
		
		void setAdmin(Admin);
		
		RequestDonationList getDonations();
		
		string getName();
		
		bool exists_entity(int);
		
		vector<Entity> getEntities();
		
		vector <Donator> getDonators();
		
		vector <Beneficiary> getBeneficiaries();
		
		void addEntity(Entity);
		
		void insertDonator(Donator);
		
		void insertBeneficiary(Beneficiary);
		
		void removeEntity(Entity);
		
		void removeDonator(Donator);
		
		void removeBeneficiary(Beneficiary);
		
		Beneficiary find_beneficiary(string);
		
	    Donator find_donator(string);
	    
	    void listEntities();
	    
	    void listMaterials();
	    
	    void listServices();
	    
	    void listBeneficiaries();
	    
	    void listDonators();
	    
	    Entity getEntity(int id);
	    
	    
	    

		
		
		
		
		
		
		
		
		
		
};








#endif
