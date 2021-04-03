// Chase Morris 
// CIS 1202  
// 4/3/2021
#include <iostream>
#include <iomanip>
using namespace std;

// calculates the average of the three numbers. 
float average(float *i1, float *i2, float *i3) // fixed integrial incoming values and passed by reference 
{
	return (*i1 + *i2 + *i3) / 3; 
}

// asks the user for the three numbers to be averaged, the calls the average function and displays 
// the average of said numbers. 
int main()
{
	float n1,n2,n3; // set the numbers as float, you also do not need to initialize them because they
	// will be initialized 
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // fixed over write of n2 

	float a = average(&n1, &n2, &n3); // passed in variables by reference, do not use up space copying 
	// values into functions 

	cout << setprecision(5) << fixed << "The average is " << a << endl; // fixed setprecision to 1, you may want
	// a more precise reading than just .x, .xxxxx is better 

	// fixed program auto closes 
	cin.get(); 
	cin.ignore();

	// you do not need to return 0 at the end of main, as it already does that 
}