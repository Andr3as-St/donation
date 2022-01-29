#include "EntityHeader.h"

Entity::Entity(string name, string description, int id):name(name),description(description),id(id)
		
		{

		}
		
Entity::Entity():name(""),id(0), description("")
		
		{
			
		}
		
string Entity::getName()
		
		{
			return this->name;
		}
		
string Entity::getDescription()
		
		{
			return this->description;
		}
		
int Entity::getId()
		
		{
			return this->id;
		}
		
string Entity::getEntityInfo()
		
		{
			
			return " ID :" + to_string(id) + " Onoma: " +  this->name + " Perigrafi:"+ this->description; 
			
		}
	
  string Entity::getDetails()
	
	{
		return "";
	}

string Entity::toString()
	
	{
		return "\nBasikes Plirofories:\n"+ getEntityInfo() + "\n Epipleon Plirofories\n:" +  getDetails();
		
	}
