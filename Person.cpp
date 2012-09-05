// Person.cpp


#include<iostream> 
#include<cstdlib> 
#include<assert.h>
#include "Person.h"
using namespace std; 

Person::Person(int position1)
{
	assert(position1 >= 0); // Make sure the position is valid. 
	position = position1; 
		
}

Person::~Person()
{ 
}

void Person::print()
{
	cout << position;  
}
		
int Person::getPos()
{
	return(position); 
}