#pragma once
#include <iostream>

class Player {
private:
	struct user {
		int health;
		std::string name;
		int walkspeed;
		user* prevUser;
	};
	user* userptr;
public:
	
	void changeHealth(int newValue);
	void changeSpeed(int newValue);
	void changeName(std::string name);
	//void damageUser(user* userptr);
	void readStats();
	void createPlayer(std::string name);
	Player();
	//~Player();
};