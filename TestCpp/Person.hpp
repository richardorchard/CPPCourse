//
//  something.hpp
//  TestCpp
//
//  Created by Richard Orchard on 03/09/2021.
//

#ifndef something_hpp
#define something_hpp

#include <stdio.h>
#include <string>

#endif /* something_hpp */


class Person {
    
   
private:
    std::string firstname;
    std::string lastname;
    int arbitaryNumber;
    
    

public:
    Person(std::string first, std::string last, int number);
    std::string getName();
    
};
