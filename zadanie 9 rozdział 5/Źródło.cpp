#include <iostream>
#include <string>

int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	cout << "Podaj liczbê wierszy: " << endl;
	int wiersze;
	cin >> wiersze;
	for (int i = 0; i <= (wiersze-1); i++)
	{
		cout << endl;
		for (int k = i; k < (wiersze-1); k++)
			cout << ".";
		for (int k = 0; k <= i; ++k)
			cout <<"*";
	}



	

	return 0;
}