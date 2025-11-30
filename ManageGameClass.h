// ManageGameClass.h
#include "Game.h"



#ifndef MANAGEGAMECLASS_H
#define MANAGEGAMECLASS_H

class ManageGameClass {

public:
    ManageGameClass();
    ~ManageGameClass();

    void addGame(const Game& game);
    void removeGame(const string& title);
    void updateGame(const string& title, const Game& updatedGame);
    Game* findGame(const string& title);
    void listAllGames() const;

};
#endif // MANAGEGAMECLASS_H