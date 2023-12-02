//
//  parseInput.cpp
//  SimpleShell
//
//  Created by Worthy on 01/12/2023.
//

#include "parseInput.hpp"
#include <string>
#include <sstream>

std::vector<std::string> parseInput(std::string userInput) {
    std::vector<std::string> tokens {};
    std::istringstream userInputStream {userInput};
    std::string token {};
    
    while (userInputStream >> token) {
        tokens.push_back(token);
    }
    
    return tokens;
}

std::vector<std::string> parseInputV1(std::string userInput) {
    std::vector<std::string> tokens {};
    
    std::string token {};
    
    // Iterating through the user input and splitting when a space is found.
    for (char c : userInput) {
        if (!isblank(c))
            token.append(1, c);
        else {
            tokens.push_back(token);
            token.clear();
        }
    }
    
    // Need to make another push to account for the last command that is followed by a space.
    tokens.push_back(token);
    
    return tokens;
}


