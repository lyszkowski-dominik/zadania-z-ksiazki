#include <iostream>
#include <string>
using namespace std;
void showmenu();
const int strsize = 50;
struct zpdw 
{
	char imie[strsize];
	char stanowisko[strsize];
	char pseudozpdw[strsize];
	int preferencje;
};
int main() {
	
	setlocale(LC_ALL, "pl_PL");
	struct zpdw members[4];
	members[0] = {"Daniel Gruszka", "M³odszy Specjalista", "Kajtek", 0};
	members[1] = { "Alojzy Kiwi", "Staruszek", "Mambo", 1 };
	members[2] = { "Kajetan Limo", "Szef","Kojot", 2 };
	members[3] = { "Ania Ma³a", "Królowa", "Princessa", 0 };
	showmenu();
	char choice;
	cin >> choice;
	while (choice != 'e')
	{
		switch (choice)
		{
		case 'a':
			for (int i = 0; i < 4; i++)
				cout << members[i].imie << endl;
			break;
		case 'b':
			for (int i = 0; i < 4; i++)
				cout << members[i].stanowisko << endl;
			break;
		case 'c':
			for (int i = 0; i < 4; i++)
				cout << members[i].pseudozpdw << endl;
			break;
		case 'd':
			break;
		default: cout << "Nie ma takiej opcji\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Do zobaczenia!";
	return 0;
}


void showmenu()
{
	cout << "Zakon Programistów Dobrej Woli\n"
		" a. lista wg imion            b. lista wg stanowisk\n"
		" c. lista wg pseudonimów      d. lista wg preferencji\n"
		" e. koniec\n";
}