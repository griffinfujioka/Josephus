/*
 * Person:
 * This class encapsulates a person within the Josephus circle.
 */

#ifndef __PERSON_H__
#define __PERSON_H__

using namespace std;

class Person {

	public: 
		Person(int position); 
		// Constructor:
		// It should not be possible to create a person without a valid position
		// ...

		~Person(); 
		// Destructor
		// ...
		
		// print the position
		void print();

		int getPos(); 

	private:
		int position; // position occupied by the person at any point of the game
						// Note: Because each position occupies a unique position initially, 
						// 		that initial position can also be treated as the identifier
						//		or name for that person
};
 
#endif

