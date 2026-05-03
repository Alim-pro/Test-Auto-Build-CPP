#include "lib.h"
#include <iostream>

int main(int, char**)
{
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "The answer to the Ultimate Question of Life, The Universe, and Everything is: " << answer_to_the_ultimate_question_of_life() << std::endl;
    return 0;
}
