#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Solution() {
	vector<int> daysInMonth(12);

	daysInMonth[0] = 31;  daysInMonth[1] = 28; daysInMonth[2] = 31;
	daysInMonth[3] = 30; daysInMonth[4] = 31; daysInMonth[5] = 30;
	daysInMonth[6] = 31; daysInMonth[7] = 31; daysInMonth[8] = 30;
	daysInMonth[9] = 31; daysInMonth[10] = 30; daysInMonth[11] = 31;


	// another way to initialize a vector
	vector<string> week = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	cout << "__Month__" << endl;
	// iteration over vector
	for (int x : daysInMonth) {
		cout << x << ", ";
	}

	cout << "\n__Week__" << endl;
	// another way to iterate over vector
	for (int i = 0; i < week.size(); i++) {
		cout << week[i] << ", ";	
	}

	return 0;
}


// main method
int main() {
	Solution();
}
