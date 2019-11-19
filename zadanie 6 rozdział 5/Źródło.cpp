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
	for (int i = 0; i < howMany; i++)
	{
		cout << "Samochód #" << i + 1 << endl << "Podaj markê samochodu: " << endl;
		cin >> cars[i].brand;
		cout << "Podaj rok produkcji: " << endl;
		cin >> cars[i].yearOfProduction;
	}
	for (int i = 0; i < howMany; i++)
	{
		cout << cars[i].yearOfProduction << " " << cars[i].brand << endl;
	}
	return 0;
}