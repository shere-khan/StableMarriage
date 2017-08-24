#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include "Person.h"

std::map<int, Person> initializePreferences(std::vector<Person> personList, std::map<int, Person> preferenceMap) {
    int i = 0;
    while (!personList.empty()) {
        int pos = rand() % personList.size();
        preferenceMap[i] = personList[i];
        personList.erase(personList.begin() + pos);
        i++;
    }
    return preferenceMap;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}