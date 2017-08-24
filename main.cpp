#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include "Person.h"
#include "Woman.h"
#include "Man.h"

const std::vector<std::string> nameList = {"chante", "tamara", "saleina", "monique", "tweety",
                                           "jessica", "stephanie", "jada", "mulu", "crystal"};

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

std::vector<std::vector<Person>> initializePlayers(std::vector<Man*> men,
                                                   std::vector<Woman*> women, int size) {
    for (int i = 0; i < size; i++) {
        int pos = rand() % nameList.size();
        men[i] = new Man(nameList[pos]);
        pos = rand() % nameList.size();
        women[i] = new Woman(nameList[pos]);
    }
    std::vector<std::vector<Person*>> players;
//    players[0];
    players.push_back(men);
//    players[0] = men;
//    return players
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<Man> men;
    std::vector<Woman> women;

    std::vector<std::vector<Person>> players = initializePlayers(men, women, 6);

    for ()
        return 0;
}