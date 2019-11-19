#include <iostream>
#include <string>
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	string loop;
	int count = 0;
	cout << "Podawaj s³owa, gdy skoñczysz wpisz gotowe" << endl;
	while (loop != "gotowe")
	{
		cin >> loop;
		count++;
	}
	cout << "wczytano: " << count - 1 << " s³ów.";
	return 0;
}