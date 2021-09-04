//
//  something.hpp
//  TestCpp
//
//  Created by Richard Orchard on 03/09/2021.
//


#include <stdio.h>
#include <string>




class Person {
    
   
private:
    std::string firstname;
    std::string lastname;
    int arbitaryNumber;
    
    

public:
    Person(std::string first, std::string last, int number);
    Person();
    ~Person();
    
    std::string getName();
    
};
