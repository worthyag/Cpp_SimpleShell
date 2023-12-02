//
//  executeCommands.cpp
//  SimpleShell
//
//  Created by Worthy on 02/12/2023.
//

#include "executeCommands.hpp"
#include <iostream>
#include <vector>

void executeCommands(std::vector<std::string> tokens) {
//    for (std::string word : tokens) {
//        std::cout << word << " | ";
//    }
//    std::cout << std::endl;
    
    auto echo {
        [&tokens] () {
            tokens.erase(tokens.begin());
            
            std::string toPrint {};
            
            for (const std::string& word : tokens) {
                toPrint += word;
                toPrint += " ";
            }
            
            std::cout << toPrint << std::endl;
            
        }
    };
    
    if (tokens[0] == "echo") {
        echo();
    }
    
//    switch (tokens[0]) {
//        case <#constant#>:
//            <#statements#>
//            break;
//            
//        default:
//            break;
//    }
}
