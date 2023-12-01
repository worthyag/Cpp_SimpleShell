//
//  parseInput.cpp
//  SimpleShell
//
//  Created by Worthy on 01/12/2023.
//

#include "parseInput.hpp"
#include <string>
#include <iostream>


std::vector<std::string> parseInput(std::string userInput) {
    std::vector<std::string> commands {};
    
    std::string command {};
    
    // Iterating through the user input and splitting when a space is found.
    for (char c : userInput) {
        if (c != ' ')
            command += c;
        else {
            commands.push_back(command);
            command = "";
        }
    }
    
    // Need to make another push to account for the last command that is followed by a space.
    commands.push_back(command);
    
    return commands;
}
