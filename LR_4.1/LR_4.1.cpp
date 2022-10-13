#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double k, N;
	double P = 1;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	k = N;
	//1 спосіб While
	while (k <= 19)
	{
		P *= ((k - N) / (k + N)) + 1;
		k++;
	}
	cout << "1) P = " << P << endl;
	//2 спосіб Do While
	P = 1;
	k = N;
	do
	{
		P *= ((k - N) / (k + N)) + 1;
		k++;
	} while (k <= 19);

	cout << "2) P = " << P << endl;

	//3 спосіб for ++
	P = 1;

	for (k = N; k <= 19; k++)
	{
		P *= ((k - N) / (k + N)) + 1;
	}
	
	cout << "3) P = " << P << endl;

	

	//4 спосіб for --
	P = 1;
	for (k = 19; k >= N; k--)
	{
		P *= ((k - N) / (k + N)) + 1;
	}

	cout << "4) P = " << P << endl;
	
	cin.get();
	return 0;
}