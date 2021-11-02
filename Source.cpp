#include <iostream>
#include "Player.h"




int main()
{
	Player newPlayer;
	std::string command;
	std::string name;
	int value;
	while (true)
	{
		std::cout << "Please enter a command (CaSe sEnSiTiVe)\ncreate\nch (change health)\ncws (change walkspeed)\ncn (change name)\nread (reads stats)\n";
		std::cin >> command;
		if (command == "create") // creates user
		{
			std::cout << "Please enter a name: ";
			std::cin >> name;
			newPlayer.createPlayer(name);
			std::cout << "\n\nSuccesfully created player " << name << "\n\n" << std::endl;
		}
		else if (command == "ch") // changes created users health
		{
			std::cout << "Please enter a new health: ";
			std::cin >> value;
			if (value > 100)
			{
				std::cout << "Cannot have a health greater than 100!\n\n";
			}
			else
			{
				newPlayer.changeHealth(value);
				std::cout << "\n\nNew health: " << value << "\n" << std::endl;
			}
		}
		else if (command == "cws") // changes created users walkspeed
		{
			std::cout << "\nPlease enter a new walk speed: ";
			std::cin >> value;
			if (value > 300)
			{
				std::cout << "\nCannot have a walk speed greater than 300!\n\n";
			}
			else
			{
				newPlayer.changeSpeed(value);
				std::cout << "\n\nNew walk speed: " << value << "\n" << std::endl;
			}
		}
		else if (command == "cn") // changes create users name
		{
			std::cout << "\nPlease enter a new name: ";
			std::cin >> name;
			newPlayer.changeName(name);
			std::cout << "\n\nNew name: " << name << "\n" << std::endl;
		}
		else if (command == "read") // read created users stats
		{
			newPlayer.readStats();
			std::cout << "\n\n\n";
		}
		else
		{
			std::cout << "\nInvalid command!\n\n";
		}
	}
	return 0;
}