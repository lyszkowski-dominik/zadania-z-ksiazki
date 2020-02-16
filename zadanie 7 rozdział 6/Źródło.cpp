#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string wyraz;
int samogloska = 0, spolgloska = 0, nienalerzy = 0;

int main()
{
    cout << "Napisz cos. Litera 'q' konczy program. \n";

    while (cin >> wyraz and ((wyraz != "q") and (wyraz != "Q")))
    {
        {
            if (wyraz[0] == 'a' || wyraz[0] == 'e' || wyraz[0] == 'i' ||
                wyraz[0] == 'o' || wyraz[0] == 'y' || wyraz[0] == 'u')
                samogloska++;
            else if (wyraz[0] >= 'a' && wyraz[0] <= 'z')
            {
                spolgloska++;
            }
            else nienalerzy++; // NIE DZIA£A DLA NIEZALICZAJACYCH SIE S£OW :/

        }

    }

    cout << spolgloska << " slow zaczynajacych sie od spolglosek.\n";
    cout << samogloska << " slow zaczynajacych sie od samoglosek.\n";
    cout << nienalerzy << " slow nie zalicza sie do zadnej z tych kategorii.\n";

    system("PAUSE");

    return 0;
}