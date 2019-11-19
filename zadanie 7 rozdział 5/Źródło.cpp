#include <iostream>
#include <cstring>
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");
	int count = 0;
	char loop[100];
	cout << "Podawaj s³owa, kiedy skoñczysz wpisz gotowe." << endl;
	
	while (strcmp(loop, "gotowe"))
	{
		cin >> loop;
		++count;
	}
	cout << endl << "wczytano: " << count - 1 << "s³ów" << endl;
	return 0;
}