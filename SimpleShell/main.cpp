//
//  main.cpp
//  SimpleShell
//
//  Created by Worthy on 29/11/2023.
//
// Loading the project files.
#include "getUserInput.hpp"
#include "parseInput.hpp"
#include "executeCommands.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    // Getting the users input.
    std::string userInput {getUserInput()};
    
    // Parsing the users input and passing the created vector to be processed.
    executeCommands(parseInput(userInput));
    
    return 0;
}
