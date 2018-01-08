#include<iostream>
#include <conio.h>
#include<math.h>

using namespace std;

int *A;
int n;

bool input(int * A) {
	long long int temp;
	for (int i = 0; i < n; i++) {
		cout << "string  " << i + 1 << " :" << endl;
		for (int j = 0; j < n; j++) {
			
			if (!( cin >> temp)) {
				cout << "    error ";  cin.clear();  cin.ignore(INT_MAX, '\n'); 	return false;
			}
			else{

				if (abs(temp) >= INT_MAX || int(temp) >= INT_MAX || int(temp) > sqrt(INT_MAX)) { *(A + i*n + j) = sqrt(INT_MAX); }
				else {
					*(A + i*n + j) = int(temp);
				}
}
		}
	}
	return true;
};

void output(int * A) {
//	cout << "output a matrix:" << endl;
	for (int i = 0; i < n; i++) {
		//cout << "\t";
		for (int j = 0; j < n; j++) {
			cout << *(A + i*n + j);
			cout << " ";
		}
		cout << endl;
	}

};

int  edit(int *A) {
	int temp=0;
	for (int i = 0; i< n; i++) 
	{
		temp +=(*(A + i*n + i));
	}
	return temp;
};

int  main() {
	system("color f0");
	cout << "input n:";  if (!( cin >> n)) { cout << "\t\t\t\terror ";  cin.clear();  cin.ignore(INT_MAX, '\n'); }
	else {
		if (!(n < 0 || n>10)) 
				A = new int[n*n];
		if (!input(A)){ _getch(); return 1; }
				system("cls");
				output(A);
				cout << "--------------------------------------------" << endl;
				cout << "sum diagonal=" << edit(A)<<endl;
				delete[] A;
			}
	system("pause");
}