#include<iostream>
#include <conio.h>

using namespace std;

int *A;
int n, m;

void input(int * A) {

	

	cout << "input a matrix:" << endl;

	for (int i = 0; i < n; i++) {
		cout << "----------------------------" << endl;
		cout  << "string  "<< i<<" :";
		for (int j = 0; j < m; j++) {

			cin >> *(A + i*m + j);
		}
	}

};
void output(int * A) {

	cout << "output a matrix:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "\t";
		for (int j = 0; j < m; j++) {
			cout << *(A + i*m + j);
			cout << " ";
		}
		cout << endl;
	}

};

void edit(int *A) {
	int temp;

		for (int i = 0; i< n; i++) {
			//temp = INT_MAX;
			temp = (*(A + i*m ));
			for (int j = 0; j < m; j++) {
				if (!(temp <(*(A + i*m + j)))) {temp = (*(A + i*m + j));}
				}
			for (int j = 0; j < m; j++) {
				*(A + i*m + j) =*(A + i*m + j)- temp;
					}
	}
};

void main() {

	cout << "input n:"; cin >> n;
	cout << "input m:"; cin >> m;
	A = new int[n*m];
	cout << sizeof(A) << endl;
	
		input(A);
		system("cls");
		output(A);
		
		edit(A);
		output(A);
		system("pause");
		delete[] A;
}