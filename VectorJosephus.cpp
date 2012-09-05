// VectorJosephus.cpp

#include<iostream> 
#include"VectorJosephus.h"
#include"Person.h" 
using namespace std; 

VectorJosephus::VectorJosephus()
{
	circle.clear(); // Start with an empty circle 
	size = 0; 
	M = 0; 
	counter = 0; 
}

VectorJosephus::VectorJosephus(int N, int M1)
{
	circle.clear(); // Start with an empty circle
	size = N; 
	M=M1; 
	for(int i=0; i<size; i++)
	{
		Person* temp = new Person(i); // Create a new person, assigned position i
		circle.push_back(*temp);  // Push that person to the back of the list
	}
	counter=0; 
}

VectorJosephus::~VectorJosephus()
{
	// Since it's an STL object, I don't think I need anything here.. 
}

void VectorJosephus::init(int N, int M1)
{
	circle.clear(); // Start with an empty circle
	size = N; 
	M=M1; 
	for(int i=0; i<size; i++)
	{
		Person* temp = new Person(i); 
		circle.push_back(*temp); 
	}
	counter=0; 
}

void VectorJosephus::clear()
{
	circle.clear();  // STL 
	return; 
}

int VectorJosephus::currentSize()
{
	return(circle.size()); // STL 
}

bool VectorJosephus::isEmpty()
{
	return(circle.empty()); // STL 
}

Person VectorJosephus::eliminateNext()
{
	int i = 0; // Dummy variable 
	while (i < M) // counts up to M 
	{
		i++;
		counter = i;  
		counter %= size; // gives position of Person to be deleted
	}
	int k=0;
	vector<Person>::iterator it1 = circle.begin();
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


void VectorJosephus::printAll()
{
	vector<Person>::iterator it2 = circle.begin(); 

	cout << "Here are all of the people in the circle: " << endl; 
	for(int i=0; i<(circle.size()); i++)
	{
		it2->print(); 
		cout << ", "; 
		it2++; 
	}
	return; 
} 