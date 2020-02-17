#include <iostream>
#include <fstream>__msvc_all_public_headers.hpp
#include <cstdlib>
#include <cctype>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "pl_PL");

	string filename;
	ifstream inFile;
	cout << "Podaj nazwê pliku: \n";
	cin >> filename;
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Otwarcie pliku " << filename << " nieudane";
		exit(EXIT_FAILURE);
	}

	char value;
	int count = 0;
	inFile >> value;
	while (inFile.good())
	{
		cout << value;
		inFile >> value;
		count++;
	}
		if (inFile.eof())
			cout << "Koniec pliku. \n";
		inFile.close();
		cout << "Liczba znaków: " << count;
		return 0;
	
}