//testVectorJosephus.cpp

#include<ctime>
#include"VectorJosephus.h"
using namespace std; 

void testVectorJosephus()
{
	int N=0, M=0; 
	cout << "Please enter the number of players: "; 
	cin>> N; 
	cout << "Please enter the number of passes: "; 
	cin>> M; 

	clock_t vStart = clock(); 


	int *list = NULL; 
	list = new int[N]; 
	int i=0; 
	VectorJosephus test(N, M); 
	while(test.isEmpty() == false)
	{
		list[i]=test.eliminateNext().getPos(); 
		test.printAll(); 
		i++; 
	}


	i = 0;
	cout << "Players were eliminated in the following order: " << endl; 
	while (i<N)
	{
		cout << list[i] << ", ";
		i++;
	}

	clock_t vEnd = clock(); 

	cout << "\n\nThe winner of this game was: "; 
	cout << list[N - 1] << endl;

	cout << "\nCPU elapsed time in seconds in the Vector situation: "
       <<(double)(vEnd - vStart)/CLOCKS_PER_SEC <<endl;

  cout << "\nThe average elimination time was: " << (((double)(vEnd - vStart)/CLOCKS_PER_SEC) / N) << endl; 




}
