//
//  main.cpp
//  SimpleShell
//
//  Created by Worthy on 29/11/2023.
//
// Loading the project files.
#include "getUserInput.hpp"
#include "parseInput.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string userInput {getUserInput()};
    
    for (std::string word : parseInput(userInput)) {
        std::cout << word << " | ";
    }
    std::cout << std::endl;
    return 0;
}
