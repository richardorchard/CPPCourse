//
//  something.cpp
//  TestCpp
//
//  Created by Richard Orchard on 03/09/2021.
//

#include "Person.hpp"
#include <iostream>


Person::Person(std::string first, std::string last, int number)
:
firstname(first),
lastname(last),
arbitaryNumber(number)
{
    std::cout << "constructing" <<
    firstname << " " << lastname << std::endl;
}


Person::Person() : arbitaryNumber(0)
{}


Person::~Person()
{
    std::cout << "destructing " <<
    firstname << " " << lastname << std::endl;
    
}

std::string Person::getName()
{
    
    return firstname + " " + lastname;
}
