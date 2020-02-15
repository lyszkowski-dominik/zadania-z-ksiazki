#include <iostream>
#include <string>

using namespace std;
void BlackDesert();
void Doom();
void StardewValley();
void LoL();
void showmenu();

int main() {
	
	setlocale(LC_ALL, "pl_PL");

	showmenu();
	char choice;
	cin >> choice;
	while (choice != 'e')
	{
		switch (choice)
		{
		case 'a': BlackDesert();
			break;
		case 'b': Doom();
			break;
		case 'c': StardewValley();
			break;
		case 'd': LoL();
			break;
		default: cout << "Nie ma takiej opcji \n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Narka! \n";
	return 0;
}
void BlackDesert()
{
	cout << "Black Desert to najlepsze MMO w jakie gra³em :) \n";
}
void Doom()
{
	cout << "Doom to bardzo brutalna gra\n";
}
void StardewValley()
{
	cout << "Stardew Valley to gra bardzo wyluzowana, w sam raz na wieczorny chill\n";
}
void LoL()
{
	cout << "LoL ma bardzo toksyczn¹ spo³ecznoœæ. Nie graj !\n";
}

void showmenu()
{
	cout << "Wybierz opcjê a,b,c lub d : \n"
		"a) Black Desert                  b) Doom \n"
		"c) Stardew Valley                d) LoL \n"
		"e) Koniec programu \n";
}
