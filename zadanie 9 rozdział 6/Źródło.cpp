#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;
struct donors { string name; string surname; double datek; };
int main() {
	
	setlocale(LC_ALL, "pl_PL");

	
	string filename;
	ifstream inFile;
	cout << "Podaj nazwê pliku: \n";
	cin >> filename;
	inFile.open(filename);
	if (!inFile)
	{
		cout << "Plik nie zosta³ znaleziony !";
			return 0;
	}
	int users;
	inFile >> users;
	donors* ksiega = new donors[users];

	string surname;

	double price;
	for (int i = 0; i < users; i++)
	{
		inFile >> ksiega[i].name >> ksiega[i].surname >> ksiega[i].datek;
	}




	cout << "Nasi Wspaniali Sponsorzy \n";

	for (int i = 0; i < users; i++)
	{
		if (ksiega[i].datek >= 10000)
		{
			cout << ksiega[i].name << " " << ksiega[i].surname << " " << ksiega[i].datek << endl;
		}
	}
	cout << "Nasi Sponsorzy \n";
	for (int i = 0; i < users; i++)
	{
		if (ksiega[i].datek < 10000)
			cout << ksiega[i].name << " " << ksiega[i].surname << " " << ksiega[i].datek << endl;
	}
	delete[]ksiega;

	return 0;
}