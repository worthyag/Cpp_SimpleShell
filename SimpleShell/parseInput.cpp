//
//  parseInput.cpp
//  SimpleShell
//
//  Created by Worthy on 01/12/2023.
//

#include "parseInput.hpp"
#include <string>


std::vector<std::string> parseInput(std::string userInput) {
    std::vector<std::string> commands {};
    
    commands.push_back(userInput);
    commands.push_back(userInput);
    
    return commands;
}
