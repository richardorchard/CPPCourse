//
//  Tweeter.cpp
//  TestCpp
//
//  Created by Richard Orchard on 04/09/2021.
//

#include "Tweeter.hpp"
Tweeter::Tweeter(std::string first, std::string last, int number, std::string handle)
:
Person(first, last, number),
twitterHandle(handle)
{}



