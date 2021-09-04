//
//  InheritedPerson.hpp
//  TestCpp
//
//  Created by Richard Orchard on 04/09/2021.
//

#ifndef Tweeter_hpp
#define Tweeter_hpp

#include <stdio.h>
#include "Person.hpp"

#endif /* InheritedPerson_hpp */


class Tweeter : public Person
{
private:
std::string twitterHandle;
    
public:
    Tweeter(std::string first, std::string last, int number, std::string handle);
    ~Tweeter();
    std::string getHandle();
    
};

