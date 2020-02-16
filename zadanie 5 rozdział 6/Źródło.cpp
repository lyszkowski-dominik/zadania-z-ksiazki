#include <iostream>
#include <string>
#include <cctype>
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");
	double payout;
	cout << "Proszê podaæ roczn¹ kwotê zarobku: \n";
	cin >> payout;
	while (!isalpha(payout) and payout > 0)
	{
		if (payout <= 5000)
			cout << "Nie musisz p³aciæ podatku"<< endl;
		else if (payout > 5000 and payout <= 15000)
			cout << "Twój podatek wynosi: " << (payout - 5000) * 0.10<< endl;
		else if (payout > 15000 and payout <= 35000)
			cout << "Twój podatek wynosi: " << (10000 * 0.10) + (payout - 10000) * 0.15<< endl;
		else if (payout > 35000)
			cout << "Twój podatek wynosi: " << (10000 * 0.10) + (20000 * 0.15) + (payout - 35000) * 0.20 << endl;
		cin >> payout;
	}
	cout << "Podano niepoprawn¹ wartoœæ. Zamykam program." << endl;
	return 0;
}