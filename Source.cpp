#include "stdafx.h"
#include "windows.h"
#include "iostream"
#include "time.h"
#include "math.h"
//test3
using namespace std;

int main()
{ 
	const int r = 9, k = 9;
	int A[r][k];
	float B[36];
	srand(time(NULL));

	for (int a = 0; a < k; a++)
		for (int j = 0; j < k; j++)
			A[j][a] = rand() % 41 + 10;
	for (int a = 0; a < k; a++)
		for (int j = 0; j < k; j++)
			cout << A[j][a] << "\t";
	cout << endl;
	int mass = 0, f;
	float l;

	f = (k / 2);
	l = A[f][f];
	for (int a = 0; a < k; a++)
		for (int j = 0; j < k; j++)
			if (a < j) {

				B[mass] = A[j][a] / l;
				mass++;
cout << "B[" << mass << "]=" << B[mass] << "\n";
				system("pause");
				return 0;
			}
}
