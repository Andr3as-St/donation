#ifndef ENTITYHEADER_H_INCLUDED
#define ENTITYHEADER_H_INCLUDED

#include <iostream>
using namespace std;

class Entity
	{
	
	private:
		string name;
		string description;
		int id;
		
		
	public:
		Entity(string, string, int);
		
		Entity();
		
		string getName();
		
		string getDescription();
		
		string getEntityInfo();
		
		virtual string getDetails();
		
		virtual string toString();
		
		int getId();
		
};

class Material: public Entity

{
	private:
  	
  	double level1, level2, level3;
  	
  	public:
  		
  		Material();
  		
  		Material(string, string, int, double, double, double);
	    
	    double getL1();
	    
	    double getL2();
	    
	    double getL3();
	    
	    string getDetails();
	    	
};

class Service: public Entity

{
	public:
		Service();
		
		Service(string, string, int);
		
		string getDetails();
	
	
};




#endif
