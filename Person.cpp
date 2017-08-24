//
// Created by Justin on 8/23/2017.
//

#include <iostream>
#include "Person.h"


Person::Person() {
}

Person::Person(std::string name) {
    this->name = name;
}

void Person::setName(std::string name) {
    this->name = name;
}

void Person::setPartner(Person *person) {
    this->partner = person;
}

