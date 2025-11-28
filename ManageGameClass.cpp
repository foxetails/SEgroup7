// ManageGameClass.cpp
#include "ManageGameClass.h"
#include <iostream>

using namespace std;


void ManageGameClass::addGame(const string& gameName) {
    games.push_back(gameName);
    cout << "Game added: " << gameName <<endl;
}


void ManageGameClass::removeGame(const string& gameName) {
    auto it = find(games.begin(), games.end(), gameName);
    if (it != games.end()) {
        games.erase(it);
        cout << "Game removed: " << gameName << endl;
    } else {
        cout << "Game not found: " << gameName << endl;
    }
}

void ManageGameClass::updatedGame(const string& oldName, const string& newName) {
    auto it = find(games.begin(), games.end(), oldName);
    if (it != games.end()) {
        *it = newName;
        cout << "Game updated from " << oldName << " to " << newName << endl;
    } else {
        cout << "Game not found: " << oldName << endl;
    }
}