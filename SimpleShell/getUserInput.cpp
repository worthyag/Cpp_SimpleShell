//
//  getUserInput.cpp
//  SimpleShell
//
//  Created by Worthy on 30/11/2023.
//

#include "getUserInput.hpp"
#include <iostream>

std::string getUserInput() {
    std::string usersInput;
    std::cout << "SimpleShell > ";
    std::getline(std::cin, usersInput);
    return usersInput;
}
