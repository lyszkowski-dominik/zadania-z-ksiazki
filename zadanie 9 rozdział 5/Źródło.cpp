#include <iostream>
#include <string>
int wiersze;
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	cout << "Podaj liczbê wierszy: " << endl;
	cin >> wiersze;
	//tworzenie dynamicznej tablicy 2 wymiarowej na znaki
	const char** znaczki = new const char *[wiersze];
	for (int i = 0; i < wiersze; i++)
		znaczki[i] = new const char[wiersze];
	//wype³nienie tablicy kropkami
	for (int i = 0; i < wiersze; i++)
	{
		znaczki[i] = ".";
	}
	

	//wyœwietlenie ca³ej tablicy
	for (int i = 0; i < wiersze; i++)
	{
		cout << znaczki[i][i];
	}

	return 0;
}