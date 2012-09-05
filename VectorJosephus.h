/*
 * VectorJosephus:
 * This class implements a Josephus circle using an STL Vector
 * N : initial number of players
 * M : interval to jump for next removal
 */

#ifndef __VECTORJOSEPHUS_H__
#define __VECTORJOSEPHUS_H__

#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

class VectorJosephus {

public:
	// Constructors:
	// 		Provide a default empty circle constructor 
	VectorJosephus();

	//		- a constructor that initializes the circle with N people who 
	//				will play this game
	//		- position values should be system assigned in the order of insertion
	//			for example, if N=5, then the people in the circle should be
	//						assigned positions: 0,1,2,3,4.
	VectorJosephus(int N,int M);


	// Destructor:
	~VectorJosephus();

	// Public methods:

	//		this does the same thing as the 1-argument constructor above
	void init(int N,int M);

	//	makes the circle empty
	void clear();

	//	prints the number of people in the circle
	int currentSize();

	//	returns true if circle is empty
	bool isEmpty();

	// eliminates the next person as per the game's rule
	Person eliminateNext();

	// prints the current content of circle in sequence starting from the person with the least position number
	void printAll();

	// any other member functions of your choice
	// ....

private:
	vector<Person> circle;
	int size;	// dynamic size of circle; initially size=N and then it will keep decreasing with each elimination
	int M;		// interval size; i.e., number of positions to skip before next elimination
	int counter; 

	// any other variables of your choice
	// ....
};

void testVectorJosephus(); // Function prototype


#endif

