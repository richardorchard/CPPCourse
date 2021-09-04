//
//  InheritedPerson.hpp
//  TestCpp
//
//  Created by Richard Orchard on 04/09/2021.
//

#ifndef InheritedPerson_hpp
#define InheritedPerson_hpp

#include <stdio.h>
#include "Person.hpp"

#endif /* InheritedPerson_hpp */


class Tweeter : public Person
{
    
public:
    std::string getGender();
    
};

