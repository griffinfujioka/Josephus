// ListJosephus.cpp

#include <iostream> 
#include "ListJosephus.h"
using namespace std; 

ListJosephus::ListJosephus()
{
	circle.clear(); // Make sure to start with an empty circle
	size = 0; 
	M = 0; 
	counter = 0; 
}

ListJosephus::ListJosephus(int N, int M1)
{
	circle.clear(); // Make sure to start with an empty circle 
	size=N; // Set up member variables. 
	M=M1; 
	int i = 0; 

	for(i=0; i<size; i++)
	{
		Person* temp = new Person(i); // Create a new person, assigned position i
		circle.push_back(*temp); // Push that person on to the list
	}


	counter = 0; 
}

ListJosephus::~ListJosephus()
{
	//**  Need nothing, because it's STL and takes care of itself. ** .. I think. 
}

void ListJosephus::init(int N, int M1)
{
	circle.clear(); // Make sure to start with an empty circle 
	size=N; // Set up member variables. 
	M=M1; 
	int i = 0; 

	for(i=0; i<size; i++)
	{
		Person* temp = new Person(i); 
		circle.push_back(*temp); 
	}


	counter = 0; 
}

void ListJosephus::clear()
{
	circle.clear(); // Yay for STL lists!
	return; 
}

int ListJosephus::currentSize()
{
	return(circle.size()); // STL 
}

bool ListJosephus::isEmpty()
{
	return(circle.empty()); // STL 
}

Person ListJosephus::eliminateNext()
{
	int i = 0; // Dummy variable 
	while (i < M) // counts up to M 
	{
		i++;
		counter = i;  
		counter %= size; // gives position of Person to be deleted
	}
	int k=0;
	list<Person>::iterator it1 = circle.begin();
	while(k < counter) // k counts up to the loser's position 
	{
		k++;
		it1++; 
	}
	// After that loop, it1 points to the Person who is about to be booted. 

	Person temp = *it1; // Store in temporary variable 
	circle.erase(it1); // Delete that variable 
	size--; // Decrement size, VERY IMPORTANT. 

	cout << "Eliminated This Turn: ";
	temp.print();

	return (temp);
}


void ListJosephus::printAll()
{
	list<Person>::iterator it2 = circle.begin(); 
	cout << "Here are all of the people in the circle: " << endl; 

	for(int i=0; i<size; i++)
	{
		it2->print(); 
		cout << ", "; 
		it2++;  
	}
	return; 

}

