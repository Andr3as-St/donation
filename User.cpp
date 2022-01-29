#include "UserHeader.h"

#include <string>


User::User(string name, string phone):name(name),phone(phone)
	
	{
		
	}
		
User::User():name(""),phone("")
		
{
			
}
	
string User::getName()
	
{
 return this->name;
}
	
void User::setName(string name)
	
	{
		this->name = name;
	}
	
string User::getPhone()
	
	{
		return this->phone;
	}
	
void User::setPhone(string phone)
	
	{
		this->phone = phone;
	}
