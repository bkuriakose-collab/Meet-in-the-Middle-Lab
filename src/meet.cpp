#include "meet.hpp"
#include <fstream>
#include <string>


using namespace std;


double findMedian(string fileName) {


    ifstream inputFile(fileName);

    int value;

    int count = 0;

    char comma;

    if (inputFile.fail()) {
        return 0;
    }


    while (inputFile >> value) {

        count = count + 1;
        inputFile >> comma;
    }
    inputFile.close();


    int* numbers = new int[count];


    ifstream inputFile2(fileName);


    int i = 0;
    while (inputFile2 >> value) {

        numbers[i] = value;
        i = i + 1;
        inputFile2 >> comma;
    }
    double median;


    if (count % 2 == 1) {

        median = numbers[count / 2];
    }
    else {


        median = (numbers[count / 2 - 1] + numbers[count / 2]) / 2.0;
    }


    delete[] numbers;


    return median;
}

