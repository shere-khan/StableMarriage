//
// Created by Justin on 8/24/2017.
//

#ifndef STABLEMARRIAGE_WOMAN_H
#define STABLEMARRIAGE_WOMAN_H

#include <map>
#include "Person.h"
class Woman : public Person {
public:
    Woman(std::string name);
    std::map<Person, int> preferenceMap;
};

#endif //STABLEMARRIAGE_WOMAN_H
