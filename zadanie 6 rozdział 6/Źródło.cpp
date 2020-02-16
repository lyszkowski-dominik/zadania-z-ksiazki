#include <iostream>
#include <string>
#include <cctype>
struct donors { char name[50]; double datek; };
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	int users;
	cout << "Proszê podaæ liczbê darczyñców: \n";
	cin >> users;
	donors* ksiega = new donors[users];

	for (int i = 0; i < users; i++)
	{
		cout << "Podaj nazwisko: \n";
		cin >> ksiega[i].name;
		cout << "Podaj kwotê datku: \n";
		cin >> ksiega[i].datek;
	}
	cout << "Nasi Wspaniali Sponsorzy \n";

	for (int i = 0; i < users; i++)
	{
		if (ksiega[i].datek >= 10000)
		{
				cout << ksiega[i].name << " " << ksiega[i].datek << endl;
		}
	}
	cout << "Nasi Sponsorzy \n";
	for (int i = 0; i < users; i++)
	{
		if (ksiega[i].datek < 10000)
			cout << ksiega[i].name << " " << ksiega[i].datek << endl;
	}
	delete[]ksiega;

	return 0;
}