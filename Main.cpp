// Main.cpp


#include<ctime>
#include<iostream>
#include"VectorJosephus.h"
#include"ListJosephus.h"
#include"Person.h"
using namespace std;
int main(int argc,char *argv[]) {

	cout << "********** VECTOR **********" << endl; 
  testVectorJosephus(); 

  cout << endl; 
  cout << endl; 
  cout << endl; 

	cout << "********** LIST **********" << endl; 

  testListJosephus();
       
  return 0;
}
