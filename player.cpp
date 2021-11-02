#include "Player.h"
#include <iostream>
#include <Windows.h>

Player::Player()
{
	userptr = nullptr;
}

void Player::createPlayer(std::string name)
{
	user* n = new user;
	n->name = name;
	n->health = 100;
	n->walkspeed = 16;
	userptr = n;
}

void Player::changeHealth(int newValue)
{
	if (userptr != nullptr)
	{
		userptr->health = newValue;
	}
	else
	{
		std::cout << "No user created!\n\n\n";
	}
}

void Player::changeSpeed(int newValue)
{
	if (userptr != nullptr)
	{
		userptr->walkspeed = newValue;
	}
	else
	{
		std::cout << "No user created!\n\n\n";
	}
}
void Player::changeName(std::string name)
{
	if (userptr != nullptr)
	{
		userptr->name = name;
	}
}
/*void Player::damageUser(user* userptr)
{

}*/
void Player::readStats()
{
	if (userptr != nullptr)
	{
		std::cout << "-----------\n";
		std::cout << "NAME: " << userptr->name << "\nHEALTH: " << userptr->health << "\nSPEED: " << userptr->walkspeed << "\n";
		std::cout << "-----------\n";
	}
	else
	{
		std::cout << "No user created!\n\n\n";
	}
	
}