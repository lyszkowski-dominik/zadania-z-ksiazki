#include <iostream>
#include <string>
#include <cctype>
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	cout << "Podaj tekst do analizy. Zakoñcz go znakiem @" << endl;
	char ch;
	string zdanie;
	cin.get(ch);
	while (ch != '@') 
	{
		if (isalpha(ch))
		{
			if (isupper(ch))
			{
				zdanie += tolower(ch);
			}
			else
			{
				zdanie += toupper(ch);
			}
		}
		cin.get(ch);
	}
	cout << zdanie;
 
	return 0;
}