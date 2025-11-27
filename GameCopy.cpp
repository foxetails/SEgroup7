#include "GameCopy.h"
#include <iostream>
using namespace std;

// Default constructor
GameCopy::GameCopy() {
    copyID = 0;
    gameID = 0;
    status = AVAILABLE;
    condition = GOOD;
    barcode = "";
}

// Getters and setters

int GameCopy::getCopyID() {
    return copyID;
}

void GameCopy::setCopyID(int n) {
    copyID = n;
}

int GameCopy::getGameID() {
    return gameID;
}

void GameCopy::setGameID(int n) {
    gameID = n;
}

GameCopy::Status GameCopy::getStatus() {
    return status;
}

void GameCopy::setStatus(Status s) {
    status = s;
}

GameCopy::Condition GameCopy::getCondition() {
    return condition;
}

void GameCopy::setCondition(Condition c) {
    condition = c;
}

string GameCopy::getBarcode() {
    return barcode;
}

void GameCopy::setBarcode(string n) {
    barcode = n;
}
