#include "MenuHeader.h"

	   	
	void Menu::show_donator_menu()
	
	{
		cout<<"--------------------"<<endl;
		
		cout<<"1. Prosthiki Neas Prosforas"<<endl;
		
		cout <<"2. Provoli Prosforwn"<<endl;
		
		cout <<"3. Oristiki Ypoboli Prosforwn"<<endl;
		
		cout <<"4. Piso" <<endl;
		
		cout <<"5. Aposindesi"<<endl;
		
		cout <<"6. Eksodos"<<endl;
		
		cout<<"--------------------"<<endl;
		
	}

	
	void Menu::show_beneficiary_menu()
	
	{
	   cout<<"--------------------"<<endl;
	
		cout<<"1. Prosthiki Neou Aitimatos"<<endl;
		
		cout <<"2. Provoli twn Aitimatwn"<<endl;
		
		cout <<"3. Oristiki Ypovoli Aitimatwn"<<endl;
		
		cout <<"4. Piso"<<endl;
		
		cout<<"5. Aposindesi"<<endl;
		
		cout <<"6. Exodos"<<endl;
		
	    cout<<"--------------------"<<endl;
	
	}
	
void Menu::show_admin_menu()
	
	{
	 cout<<"--------------------"<<endl;

		cout <<"1. Provoli "<<endl;
		cout <<"2. Parakoloythisi Organismou "<<endl;
		cout <<"3. Piso"<<endl;
		cout <<"4. Aposindesi"<<endl;
		cout <<"5. Eksodos"<<endl;
		
		cout<<"--------------------"<<endl;


	}
	
void Menu::admin_menu_monitor()
	
	{
	   cout<<"--------------------"<<endl;

		cout <<"1. Provoli Listas twn Beneficiaries"<<endl;
		
		cout <<"2. Provoli Listas twn Donators"<<endl;
		
		cout <<"3. Katharismos twn Listwn  twn Beneficiaries "<<endl;
	    
		cout<<"--------------------"<<endl;

		
	}
	

	
int Menu::getInt()
		
		{
			int input;
			
			cin>>input;
						
			return input;
		
		}
	
string Menu::getString()
	   
	   {
	   	string input;
	   	
	   	cin>>input;
	   	
	   	return input;
	   	
	   }

double Menu::getDouble()
	   
	   {
	   	double input;
	   	
	   	cin>>input;
	   	
	   	return input;
	   	
	   }
