#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
//TODO: If needed, extra libraries go here
using namespace std;

//TODO: Function Prototypes (calls) go here.

int harmonicMeans();

string capEs( string cappedWord);

int binaryToDecimal(int num);

vector<int> removeConsecutiveDuplicates(vector<int> &vec);

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

int harmonicMeans() {

}

string capEs(string cappedWord) {

}

int binaryToDecimal(int num) {

}

vector<int> removeConsecutiveDuplicates(vector<int> &v){

}