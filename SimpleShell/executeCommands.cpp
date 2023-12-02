//
//  executeCommands.cpp
//  SimpleShell
//
//  Created by Worthy on 02/12/2023.
//

#include "executeCommands.hpp"
#include <iostream>

void executeCommands(std::vector<std::string> tokens) {
    for (std::string word : tokens) {
        std::cout << word << " | ";
    }
    std::cout << std::endl;
}
