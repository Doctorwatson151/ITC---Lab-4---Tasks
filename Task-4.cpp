//Abdullah Kaleem
//Roll number = L1F26BSCS0098 
#include <iostream>

using namespace std;


int main()
{


	
	char first, second, third;
	cout << "Type three Characters: ";

	//PART A:
	/*
	cin.get(first);
	cin.get(second);
	cin.get(third); */

	//Note: to check part A comment Part B and uncomment Part A.
	// PART B:						
    cin >> first >> second >> third;

	int code_1 = (char)(first);
	int code_2 = (char)(second);
	int code_3 = (char)(third);   



	cout << "First : [" << first << "] " << "Code: " << code_1 << endl;
	cout << "second : [" << second << "] " << "Code: " << code_2 <<  endl;
	cout << "Third : [" << third << "] " << "Code: " << code_3 << endl;
	


	return 0;

	// cin only takes one character while cin.get() also takes spaces.

}