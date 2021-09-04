//
//  main.cpp
//  TestCpp
//
//  Created by Richard Orchard on 03/09/2021.
//

#include <iostream>
#include <string>

#include "Tweeter.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World w!\n";
    
    Person p1("Richard", "Orchard", 45);
    {
    //Person p2;
    }
    
    std::string name = p1.getName();
    
    
    
    std::cout << name + "\n";
    
    return 0;
}
