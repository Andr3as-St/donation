#include "OrganizationHeader.h"

#include "UserHeader.h"

#include "MenuHeader.h"

#include "EntityHeader.h"

int main(int argc, char** argv) {
	
	Menu menu;

	Material mat1("Material1","Mat1 Description",1,80.0,120.0,200.0);
		
	Material mat2("Material2","Mat2 Description",2,90,130,305);
	
	Material mat3("Material3","Mat3 Description",3,145,188,352);
	
	Service ser1("Service1", "Ser1 Description",4);
	
	Service ser2("Service2", "Ser2 Description",5 );
	
	Service ser3("Service3","Ser3 Description",6);
	
	Organization org("Ceid Donation Org");
	
	Admin admin("Admin1","1111111111");
	
	org.setAdmin(admin);
		
	Donator don("Donator1","2222222222");
	
	Beneficiary ben1("Beneficiary1","3333333333");
	
	Beneficiary ben2("Beneficiary2","4444444444");
	
	org.insertDonator(don);
	
	org.insertBeneficiary(ben1);
	
	org.insertBeneficiary(ben2);
	
	org.addEntity(mat1);
	org.addEntity(mat2);
	org.addEntity(mat3);
	org.addEntity(ser1);
	org.addEntity(ser2);
	org.addEntity(ser3);
	
    cout<<"Kalosirthtate sto Ceid Donation System. Parakalo doste to kinito sas:";		
   	
	string kinito= menu.getString();
	 	
	bool flag = true;
	
	while(flag==true)
	{
	
	if(kinito==admin.getPhone())
	
	
	{
	    cout<<"Kalosirthes Adminiistrator:"<<endl;
		
        menu.show_admin_menu();
		
				
		int epilogi = menu.getInt();
		
		if(epilogi==1)
		
		{
			
						
			cout<<"1. Material (epilekste 1)"<<endl;
			cout<<"2. Services(epilekste 2)"<<endl;
			
			int katigoria = menu.getInt();
			
			
			if(katigoria==1)
			
			{
				org.listMaterials();
				
				cout<<"Doste to ID tou material:"<<endl;
				
				int kodikos_material = menu.getInt();
				
				Entity mymat = org.getEntity(kodikos_material);
				
				cout<<"Plirofories Material:"<<endl;
				
				cout<<mymat.getEntityInfo()<<endl;
				
			}
			
			else if(katigoria==2)
			
			{
				
				org.listServices();
				
				cout<<"Doste to ID tou Service:"<<endl;
				
				int kodikos_service = menu.getInt();
				
				Entity myser = org.getEntity(kodikos_service);
				
				cout<<"Plirofories Service"<<endl;
				
				cout<<myser.getEntityInfo()<<endl;
			}
			
			
		}
		
		else if(epilogi==2)
		
		{
			
			menu.admin_menu_monitor();
			
			int monitor_epilogi = menu.getInt();
			
			if(monitor_epilogi==1)
			
			{
				
				org.listBeneficiaries();
				
				cout<<"Doste Kinito tou Beneficiary:"<<endl;
				
				string kinito_beneficiary = menu.getString();
				
				Beneficiary theben;
				
				theben = org.find_beneficiary(kinito_beneficiary);
				
				cout<<"O epilegmenos beneficiary einai:"<<theben.getName()<<endl;
				
				cout<<"Lista Eidwn pou exei lavei"<<endl;
			
				theben.showReceivedList();
				
				cout <<endl;
				
				cout<<"1. Katharismos Listas pou exei lavei"<<endl;
				
				cout <<"2. Diagrafi Beneficiary"<<endl;
				
				int choice_beneficiary = menu.getInt();
				
				if(choice_beneficiary==1)
				
				{
					theben.getReceivedList().reset();
					
					cout <<"O katharismos egine me epityxia!!!"<<endl;
					
				}
				
				else if(choice_beneficiary==2)
				
				{
					org.removeBeneficiary(theben);
				}
					
			}
			
			else if(monitor_epilogi==2)
			
			{
				
				org.listDonators();
				
				cout<<"Doste to kinito tou Donator:"<<endl;
				
				string kinito_donator = menu.getString();
				
				Donator thedon;
				
				thedon = org.find_donator(kinito_donator);
				
				cout<<"1. Diagrafi Donator"<<endl;
				
				cout <<"2.Provoli Prosforwn Donator"<<endl;
				
				int epilogi_donator = menu.getInt();
				
				if(epilogi_donator==1)
				
				{
					org.removeDonator(thedon);
					
					cout<<"O donator diagrafike me epityxia"<<endl;
				}
				
				else
				
				{
					thedon.showOfferList();
				}
				
			}
			
			else if(monitor_epilogi==3)
			
			{
			
				int i;
				
				for(Beneficiary &b: org.getBeneficiaries())
				
				{
					
					b.getReceivedList().reset();
					
				}
				
				
				cout<<"Oles oi listes diagrafikan me epityxia"<<endl;
			}
			
			else
			
			{
				cout<<"Lathos Epilogi"<<endl;
			}
			
		}
		
		else if(epilogi==3)
		
		{
			
		}
		
		else if(epilogi==4)
		
		{
			
			cout <<"An thelete na sindetheite ksana epilekste y"<<endl;
			
			string apantisi = menu.getString();
			
			if(apantisi=="y")
			
			{
				cout <<"Doste to kinito sas tilefono:"<<endl;
				
				kinito = menu.getString();
			}
			
			else
			
			{
				flag = false;
				
				cout <<"Antio!!"<<endl;
			}
		}
		
		else if(epilogi==5)
		
		{
			flag = false;
			cout<< " Antio!!!!"<<endl;
		}
		
		else
		
		{
			cout<<"Lathos Epilogi"<<endl;
		}
		
		
	}
	
		else if(kinito==ben1.getPhone() || kinito==ben2.getPhone())
	
	{
	   Beneficiary theben = org.find_beneficiary(kinito);
	   
		menu.show_beneficiary_menu();
		
		int epilogi = menu.getInt();
		
		
		if(epilogi==1)
		
		{
						
			cout<<"1. Material(epilekste 1)"<<endl;
			cout<<"2. Services(epilekste 2)"<<endl;
			
			int katigoria = menu.getInt();
				
			if(katigoria==1)
			
			{
				org.listMaterials();
				
				cout<<"Doste to ID tou material:"<<endl;
				
				int kodikos_material = menu.getInt();
				
				Entity mymat = org.getEntity(kodikos_material);
				
				cout <<"Doste Posotita:"<<endl;
				
				double posotita = menu.getDouble();
				
				cout<<"Id of Entity:"<<mymat.getId()<<endl;
				
				cout<<"Epilegmeni posotita:"<<posotita<<endl;
				
				RequestDonation r(mymat,posotita);
								
			   theben.getRequestList().add(theben,r);

				
			}
			
			else if(katigoria==2)
			
			{
				
				org.listServices();
				
				cout<<"Doste to ID tou Service: "<<endl;
				
				int kodikos_ser = menu.getInt();
				
				Entity myser = org.getEntity(kodikos_ser);
				
				cout <<"Doste tin posotita:"<<endl;
				
				double posotita = menu.getDouble();
					
				RequestDonation r(myser,posotita);
				
				theben.getRequestList().add(theben,r);
				
			}
			
		
			
		}
		
		else if(epilogi==2)
		
		{
		   
		   theben.showRequestList();
		   
		   cout<<"Doste to Id tou Entity: "<<endl;
		   
		   int kod = menu.getInt();
		   
		   Entity myent = org.getEntity(kod);
		   
		   cout<<"1. Tropopoihsh"<<endl;
		   
		   cout<<"2. Diagrafi"<<endl;
		   
		   RequestDonation r(myent,0);
		   
		   int ep = menu.getInt();
		   
		   if(ep==1)
		   
		   {
		   	cout<<"Doste posotita:"<<endl;
		   	
		   	double posotita = menu.getDouble();
		   	
		   	theben.getRequestList().modify(theben,r,posotita);
		   	
		   	cout<<"I tropopoihsh egine me epityxia!!"<<endl;
		   	
		   }
		   
		   else if(ep==2)
		   
		   {
		   	theben.getRequestList().remove(kod);
		   	
		   	cout<<"I diagrafi egine me epityxia!!"<<endl;
		   }
		   			
		}
		
		else if(epilogi==3)
		
		{
		
			theben.getRequestList().commit(theben,org);
			
		}
		
		else if(epilogi==4)
		
		{
			
			
		}
		
		else if(epilogi==5)
		
		{
			
			
			cout <<"An thelete na sindetheite ksana epileksete y"<<endl;
			
			string apantisi = menu.getString();
			
			if(apantisi=="y")
			
			{
				cout <<"Doste kinito tilefono:"<<endl;
				
				kinito = menu.getString();
			}
			
			else
			
			{
				flag = false;
				
				cout <<"Antio!!!!"<<endl;
			}
			
			
			
			
		}
		
		else if(epilogi==6)
		
		{
			flag = false;
			cout<< "Antio!!!!!"<<endl;
			
		}
		
		else
		
		
		{
			cout <<"Lathos Epilogi!!!"<<endl;
			
		}
		
		
	}
	
	else if(kinito ==don.getPhone())
	
	{
        menu.show_donator_menu();
				
		int epilogi = menu.getInt();
		
		if(epilogi==1)
		
		{
						
			cout<<"1. Material(epilekste 1)"<<endl;
			cout<<"2. Services (epilekdte 2)"<<endl;
			
			int katigoria = menu.getInt();
			
			
			if(katigoria==1)
			
			{
				org.listMaterials();
				
				cout<<"Doste to ID tou material:"<<endl;
				
				int kodikos_material = menu.getInt();
				
				Entity mymat = org.getEntity(kodikos_material);
				
				cout <<"Doste tin posotita:"<<endl;
				
				double posotita = menu.getDouble();
				
				
				RequestDonation r(mymat,posotita);
								
				don.getOfferList().add(don,r);
				
			}
			
			else if(katigoria==2)
			
			{
				
				org.listServices();
				
				cout<<"Doste to ID tou Service: "<<endl;
				
				int kodikos_service = menu.getInt();
				
				Entity myser = org.getEntity(kodikos_service);
				
				cout <<"Doste tin posotita:"<<endl;
				
				double posotita = menu.getDouble();
				
				
				RequestDonation r(myser,posotita);
								
				don.getOfferList().add(don,r);
		
			}
			
			
			
			
			
			
			
		}
		
		else if(epilogi==2)
		
		{
		   
		   don.showOfferList();
		   
		   cout<<"Doste to ID tou Entity "<<endl;
		   
		   int kod = menu.getInt();
		   
		   Entity myent = org.getEntity(kod);
		   
		   cout<<"1. Tropopoihsh"<<endl;
		   
		   cout<<"2. Diagrafi"<<endl;
		   
		   RequestDonation r(myent,0);
		   
		   int ep = menu.getInt();
		   
		   if(ep==1)
		   
		   {
		   	cout<<"Doste Posotita:"<<endl;
		   	
		   	double posotita = menu.getDouble();
		   	
		   	don.getOfferList().modify(don,r,posotita);
		   	
		   	cout<<"I tropopoihsh egine me epityxia"<<endl;
		   	
		   }
		   
		   else if(ep==2)
		   
		   {
		   	don.getOfferList().remove(kod);
		   	
		   	cout<<"I diagrafi egine me epityxia"<<endl;
		   }
		    
		    
			
		}
		
		else if(epilogi==3)
		
		{
			don.getOfferList().commit(don,org);
			
			cout <<"To commit egine me epityxia!!"<<endl;

		}
		
		else if(epilogi==4)
		
		{
			
		}
		
		else if(epilogi==5)
		
		{
			
			cout <<"An thelete na sindetheite ksana epilekste y"<<endl;
			
			string apantisi = menu.getString();
			
			if(apantisi=="y")
			
			{
				cout <<"Doste to kinito tilefono sas:"<<endl;
				
				kinito = menu.getString();
			}
			
			else
			
			{
				flag = false;
				
				cout <<"Antio!!!"<<endl;
			}
			
			
		}
		
		else if(epilogi==6)
		
		{
			cout<<"Antio!!!!"<<endl;
			
		}
		
		else
		
		{
			cout <<"Lathos Epilogi: "<<endl;
		}
		
	}
	

	
}
	
	return 0;
}

