#include <iostream>
#include <string>

#include "constants.h"

using namespace std;
int main(int argc , char** argv)
{
	cout << "Prosty kalkulator - 2019 :)\n"
	     << "===========================\n\n";

	string cmd_str;
	while (true)
	{
		cout << "Podaj polecenie (help - pomoc, exit - wyjscie): ";
		cin >> cmd_str;

		// EXIT
		if (cmd_str == "exit" || cmd_str == "0")
		{
			cout << "Koniec pracy!\n";
			break;
		}
		// HELP
		else if (cmd_str == "help")
		{
			cout << "Obslugiwane polecenia:\n\texit\n\thelp\n\n";
		}

	}
	return 0;
}
