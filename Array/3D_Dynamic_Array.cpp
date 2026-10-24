#include <iostream>
using namespace std;

int main() 
{
	// representation of three dimensional array
	int noOfTwoD = 3;
	int noOfRows = 3;
	int noOfElements = 3;
	
	int ***ptr = new int **[noOfTwoD];
	
	for (int i = 0; i < noOfTwoD; i++) {
		ptr[i] = new int *[noOfRows];
		for (int j = 0; j < noOfElements; j++) {
			ptr[i][j] = new int [noOfElements];
		}
	}
	
	for (int i = 0; i < noOfTwoD; i++) {
		for (int j = 0; j < noOfRows; j++) {
			for (int k = 0; k < noOfElements; k++) {
				cout << "Required input at [" << j << "][" << k << "]:";
				cin >> ptr[i][j][k];
			}
		}
		cout << endl;
		cout << "Inputs Stored Successfully for Array No 1 " << i + 1 << endl; 
	}
	
	cout << "~~~~~~Output~~~~~~~" << endl;	
	for (int i = 0; i < noOfTwoD; i++) {
		for (int j = 0; j < noOfRows; j++) {
			for (int k = 0; k < noOfElements; k++) {
				cout << ptr[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	
	for (int i = 0; i < noOfTwoD; i++) {
		for (int j = 0; j < noOfRows
		; j++) {
			delete[] ptr[i][j];
		}
		delete[] ptr[i];
	}
	delete[] ptr;	
	return 0;
}