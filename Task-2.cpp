//Abdullah Kaleem 
//L1F26bscs0098 

#include <iostream>


using namespace std;

int main()
{

	char grade_letter = 'A';
	char section = 'C';
	char initial = 'M';

	/*cout << "Enter your grade: ";
	cin >> grade_letter;

	cout << "Enter your section: ";
	cin  >> section;

	cout << "Enter the first letter of your name: ";
	cin >> initial; */


	cout << "Grade: " << grade_letter << endl;
	cout << "Section: " << section << endl;
	cout << "Initial: " << initial << endl;


	int code = (int)grade_letter;
	cout << "ASCII code of grade: " << code << endl;

	char next_letter = (char)(grade_letter + 1);

	cout << "Next letter: " << next_letter << endl;
	cout << "Grade + 1 without conversion: " << grade_letter + 1 << endl;
	


	int az = 'z' - 'a';
	cout << "Letters between A and Z: " << az << endl;

	char letterplus_3 = (char)(grade_letter + 3);
	cout << "Grade after A, B and C: " << letterplus_3 << endl;









}