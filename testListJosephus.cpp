// testListJosephus.cpp

#include<ctime> 
#include"ListJosephus.h"
using namespace std; 

void testListJosephus()
{
	int N=0, M=0; 
	cout << "Please enter a value for the number people playing: "; 
	cin >> N; 
	cout << "Please enter a value for the number of passes: ";
	cin >> M; 

	clock_t lStart=clock();

	int *list=NULL; 
	list = new int[N]; 
	int i=0;
	ListJosephus test(N,M); 
	while (test.isEmpty() == false)
	{
		list[i] = test.eliminateNext().getPos(); 
		test.printAll(); 
		i++; 
	}

	clock_t lEnd=clock(); 

	i=0; 

	cout << "Players were eliminated in the following order: " << endl; 
	while(i<N)
	{
		cout << list[i] << ", "; 
		i++;
	}

	cout << "\n\nThe winner of this game was: "; 
	cout << list[N-1] << endl; 

	  cout << "\nCPU elapsed time in seconds in the List situation: " 
	  <<(double)(lEnd-lStart)/CLOCKS_PER_SEC << endl; 

  cout << "\nThe average elimination time was: " << (((double)(lEnd-lStart)/CLOCKS_PER_SEC) / N) << endl; 


}

