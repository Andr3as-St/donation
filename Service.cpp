#include "EntityHeader.h"

Service::Service():Entity()
   
   {
   	
   }
   
Service:: Service(string name, string description, int id): Entity(name,description,id)	
   
   {
   	
   }
	
string Service::getDetails()
	
	{
		return "Eidos Entity: Service";
	}
