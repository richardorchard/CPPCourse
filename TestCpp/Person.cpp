//
//  something.cpp
//  TestCpp
//
//  Created by Richard Orchard on 03/09/2021.
//

#include "Person.hpp"


Person::Person(std::string first, std::string last, int number)
:
firstname(first),
lastname(last),
arbitaryNumber(number)
{
    
}

std::string Person::getName()
{
    
    return firstname + " " + lastname;
}
