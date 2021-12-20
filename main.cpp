#include <iostream>
#include <fstream>
#include "include/heart.hpp"
#include "include/filesys.hpp"

int main()
{
	std::string reason;
	int passLen;

	std::cout << "Welcome to BiGen" << std::endl;
	// std::cout << "A Simple Password Manager" << std::endl;

	std::cout << "What Is The Passowrd For: ";
	std::getline(std::cin, reason);
	std::cout << "What Should The Passcode Length Be: ";
	std::cin >> passLen;
	std::cout << "The Password Is: " << pass(passLen);

	// TODO: Implement file system controller
	// fileSysMake(reason, pass(passLen));

	std::cout << std::endl;
}