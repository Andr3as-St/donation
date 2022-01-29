#ifndef MENUHEADER_H_INCLUDED
#define MENUHEADER_H_INCLUDED

#include <iostream>
using namespace std;

class Menu

{
  public:
  
    int getInt();
	
	string getString();
	
	double getDouble();
	
	void show_donator_menu();
	
	void show_beneficiary_menu();
	
	void show_admin_menu();
	
	void admin_menu_monitor();
	

};










#endif
