#include <iostream>
#include <string>
#include <cctype>
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	double datki[10];
	double ch;
	cout << "Proszê podaæ datki: " << endl;
	cin >> ch;
	if (!isalpha(ch)) // sprawdza czy podana wartoœæ jest liczb¹
	{
		for (int i = 0; i < 10; i++)
		{
			datki[i] = ch;
			cin >> ch;
		}
	}
	double average;
	double sum = 0;
	int count = 0;
	for (int i = 0; i < 10; i++)  // przechodzi przez tablice i szuka wartoœci niezerowych oraz zlicza ich iloœæ
	{
		if (datki[i] != 0)
		{
			sum += datki[i];
			count++;
		}
	}
	average = sum / count;
	cout << "Œrednia z datków to: " << average << endl;
	cout << "Datki wy¿sze od œredniej to: " << endl;
	for (int x = 0; x < 10; x++) // przeszukuje tablice o wartoœci wiêksze od average
	{
		if (datki[x] > average)
			cout << datki[x] << endl;
	}

	cout << average;
	return 0;
}