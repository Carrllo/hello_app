#include <iostream>
#include <string>

int main(int argc , char** argv)
{
	std::cout << "Prosty kalkulator - 2019 :)\n"
			  << "===========================\n\n";

	std::string cmd_str;
	while (true)
	{
		std::cout << "Podaj polecenie (help - pomoc, exit - wyjscie): ";
		std::cin >> cmd_str;

		// EXIT
		if (cmd_str == "exit" || cmd_str == "0")
		{
			std::cout << "Koniec pracy!\n";
			break;
		}
	}
	
	return 0;
}
