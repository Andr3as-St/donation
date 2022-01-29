#include "EntityHeader.h"

Material::Material():Entity()
		
		{
			level1 = 0;
			
			level2 = 0;
			
			level3 = 0;
		}

Material::Material(string name, string description,int id, double l1, double l2, double l3): Entity(name,description,id)
		
		{
			level1 = l1;
			
			level2 = l2;
			
			level3 = l3;
			
		}
		
double Material::getL1()
		
		{
			return this->level1;
		}
		
double Material::getL2()
		
		{
			return this->level2;
		}
		
double Material::getL3()
		
		{
			return this->level3;
		}
	
string Material::getDetails()
	
		{
	   return "Eidos: Material\nEpipedo1:" + to_string(this->level1)+ " Epipedo2: " + to_string(this->level2)+ " Epipedo3:" + to_string(this->level3);
		
		}
