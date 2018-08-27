/*
Author: M.S.Flores
Program: Force in. body
Description: The program determines the Force in a body.
*/
#include <iostream>
using namespace std;
int main() 
{
	float m1,m2,d;
	const double k=0.0000000667;
  double F;
    
  //Prompt the user to enter inputs
	cout << "Determining the Force" << endl;
	cout << "Enter the first mass :" ;
	cin >> m1;
	cout << "Enter the second mass :" ;
	cin >> m2;
	cout << "Enter the distance :" ;
	cin >> d;
	
	 F=k*((m1*m2)/(d*d));
	 
    
   //output of the program 
	 cout << "The Force is :"<< F << endl;

	return 0;
}

