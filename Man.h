//
// Created by Justin on 8/24/2017.
//

#ifndef STABLEMARRIAGE_MAN_H
#define STABLEMARRIAGE_MAN_H

#include <map>
#include "Person.h"
class Man : public Person {
//    Man():Person();
    std::map<Person, int> preferenceMap;
};

#endif //STABLEMARRIAGE_MAN_H
