#include <iostream>
#include <string>
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	struct car {
		string brand;
		int yearOfProduction;
	};
	cout << "Ile samochodów chcesz skatalogowaæ ?" << endl;
	int howMany;
	cin >> howMany;
	car* cars = new car[howMany];
	for (i = 0; i < howMany; i++)
	{
		cout << "Samochód #"<<i+1<<endl<<"Podaj markê samochodu: " << endl;
		cin >> car[i].brand;
		cout << "Podaj rok produkcji: " << endl;
		cin >> car[i].yearOfProduction;
	}
	for (i = 0; i < howMany; i++)
	{
		cout << car[i].yearOfProduction << " " << car[i].brand;
	}
	return 0;
}