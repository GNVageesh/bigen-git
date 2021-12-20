#include <iostream>

std::string pass(int len)
{
    srand(time(NULL));
    char lAlpha[] = "abcdefghijklmnopqrstuvwxyz";
    char uAplha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s_chars[] = "!@#&*";
    char nums[] = "0123456789";

    std::string final_password = "";

    char output[len];
    int ran = std::rand() % 4;

    for (int i = 0; i < len; i++)
    {
        if (ran == 1)
        {
            output[i] = nums[std::rand() % 10];
            ran = std::rand() % 4;
            final_password += output[i];
        }
        else if (ran == 2)
        {
            output[i] = s_chars[std::rand() % 5];
            ran = std::rand() % 4;
            final_password += output[i];
        }
        else if (ran == 3)
        {
            output[i] = uAplha[std::rand() % 26];
            ran = std::rand() % 4;
            final_password += output[i];
        }
        else
        {
            output[i] = lAlpha[std::rand() % 26];
            ran = std::rand() % 4;
            final_password += output[i];
        }
    }

    return final_password;
}