#include <iostream>
#include <string>
int main() {
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	cout << "Podaj tekst do analizy. Zakoñcz go znakiem @" << endl;
	char ch;
	int total = 0;
	string zdanie;
	cin.get(ch);
	while (ch != '@') 
	{
		if (isalpha(ch))
		{
			if (isupper(ch))
			{
				tolower(ch);
				zdanie += ch;
			}
			else
			{
				toupper(ch);
				zdanie += ch;
			}
				
			
			
		
			
		}
		total++;
		cin.get(ch);
	}
	cout << "Liczba wszystkich znaków to : " << total << endl;
	cout << zdanie;
 
	return 0;
}