#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
//TODO: If needed, extra libraries go here
using namespace std;

//TODO: Function Prototypes (calls) go here.

int harmonicMeans();


int main() {
	// problem 1 test
	harmonicMeans();
	cout << endl;

	// problem 2 tests
	string testString1 = "Hello Ernie!";
	cout << testString1 << " with cap Es: ";
	capEs(testString1);
	cout << testString1 << endl;

	testString1 = "Eeeee Eee Eeee";
	cout << testString1 << " with cap Es: ";
	capEs(testString1);
	cout << testString1 << endl << endl;

	// problem 3 tests
	int n = 101100;
	cout << n << " in binary: " << binaryToDecimal(n) << endl;
	n = 1000;
	cout << n << " in binary: " << binaryToDecimal(n) << endl << endl;


	// problem 4 tests
	vector<int> v{ 1, 2, 2, 3, 2, 2, 3 };
	cout << "before removeConsecutiveDuplicates: ";
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << ' ';
	}
	removeConsecutiveDuplicates(v);
	cout << endl << "after removeConsecutiveDuplicates:  ";
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << ' ';
	} 
	cout << endl;

	vector<int> w{ 11, 11, 11, 44, 44, 0, 29, 33, 33, 33, 33, 33 };
	cout << "before removeConsecutiveDuplicates: ";
	for (int i = 0; i < w.size(); ++i) {
		cout << w[i] << ' ';
	}
	removeConsecutiveDuplicates(w);
	cout << endl << "after removeConsecutiveDuplicates:  ";
	for (int i = 0; i < w.size(); ++i) {
		cout << w[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}

//TODO: Function Definitions go here.

/**
 * 
    Write a function harmonicMeans that repeatedly asks the user for two int values until at least one of them is 0. For each pair, 
	the function should calculate and display the harmonic mean of the numbers. 
	The harmonic mean of the numbers is the inverse of the average of the inverses. The harmonic mean of x and y can be calculated as:
    harmonic_mean = 2.0 * x * y / (x + y);

 

Sample output:

Enter two integer values: 2 4

The harmonic mean of 2 and 4 is 2.66667

Enter two integer values: 2 6

The harmonic mean of 2 and 6 is 3

Enter two integer values: 2 9

The harmonic mean of 2 and 9 is 3.27273

Enter two integer values: 2 0
 **/

int harmonicMeans() {
	int x;
	int y;
	float harmMeansEquation;
	bool runProgram =  true;	

	while (runProgram)
	{
		//Step 4:  Equation  & Console Output

		cout << "Enter 2 integer (whole) numbers: ";
		cin >> x;
		cin >> y;

		harmMeansEquation = 2.0 * x * y / (x + y);

		if (x != 0 && y != 0)
		{
			cout << "The harmonic mean of " << x << " and " << y << " is " << harmMeansEquation;
		}
		
		if (x == 0 || y == 0)
		{
			runProgram = false;
		}
		

	}

	return 0;	

}

string capEs(string cappedWord) {

}

//Problem 3 Notes
/**
 * Do not use a string in your solution.
 * Do not use any container such as array or vector.
 * Also do not use any built-in base conversion functions from the system libraries.
 * (This means stuff like std::stoi)
 * */

int binaryToDecimal(int num) {

}

vector<int> removeConsecutiveDuplicates(vector<int> &v){

}