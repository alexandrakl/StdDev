//Alexandra Klimenko
//Homework 2
//Completed 1/25/2016

#include <iostream>
#include <math.h>

//sum function
double sum(double values[], int size) {
	double summ = 0;
	for (int i = 0; i < size; i++) {
		summ += values[i];
	}
	return summ;
}

//mean function
double mean(double values[], int size) {
	double mean = sum(values, size)/size;
	return mean;
}

//standard deviation function
double stdDev(double values[], int size) {
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += pow(values[i] - mean(values, size), 2);
	}

	double stdDev = sqrt(total/ size);
	std::cout << "The standard deviation is: " << stdDev << std::endl;
	return stdDev;
}

int main() {

	const int size = 10;
	double values[size];

	//ask for input values to fill in the array
	std::cout << "Input " << size << " double values to fill in the array: " << std::endl;
	for (int i = 0; i < size; i++) {
		std::cin >> values[i];
	}

	stdDev(values, size);	
	return 0;
}


