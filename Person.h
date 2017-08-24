//
// Created by Justin on 8/24/2017.
//

#ifndef STABLEMARRIAGE_PERSON_H
#define STABLEMARRIAGE_PERSON_H

#include <iostream>

class Person {
protected:
    std::string name;
    Person *partner;
private:
public:
    Person();
    Person(std::string name);
    void setName(std::string name);
    void setPartner(Person *person);
};

#endif //STABLEMARRIAGE_PERSON_H
