#include <iostream>
#include <fstream>
#include <ctime>

void fileSysMake(std::string reason, std::string pass)
{
    std::fstream file;
    time_t now = time(0);
    char *time = std::ctime(&now);

    file.open("BiGen.txt", std::ios::app);

    if (file.is_open())
    {
        file << "Profile At : " << time;
        file << "Reason     : " << reason << std::endl;
        file << "Password   : " << pass << std::endl;
        file << "-------------------------" << std::endl;
        file << std::endl;

        // close the file
        file.close();
    }
    else
    {
        std::cout << "Error opening the file..." << std::endl;
    }
}