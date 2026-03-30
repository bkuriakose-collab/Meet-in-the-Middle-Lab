#include <iostream>
#include "src/meet.hpp"
#include <fstream>
#include <string>
using namespace std;


int main() {
	string fileName;

	double median;
	cout << "Enter file name: ";
	getline(cin, fileName);

	median = findMedian(fileName);

	cout << "The median is: " << median << "." << endl;
	return 0;
}
