#include <string>
#include <ctime>
using namespace std;

#ifndef GAMECOPY_H
#define GAMECOPY_H

class GameCopy {
public:
    //Constructor
    GameCopy();

    //Condition enum
    enum Condition {
        NEW,
        GOOD,
        FAIR,
        POOR
    };

    //Status enum
    enum Status {
        AVAILABLE,
        RENTED,
        LATE
    };

    //Getters and setters
    int getCopyID();
    void setCopyID(int n);

    int getGameID();
    void setGameID(int n);

    Status getStatus();
    void setStatus(Status status);

    Condition getCondition();
    void setCondition(Condition condition);

    string getBarcode();
    void setBarcode(string n);

    //getLastInventoryCheckDate functions

    //Create, delete, print functions

private:
    int copyID;
    int gameID;
    Status status;
    Condition condition;
    string barcode;
    //lastInventoryCheck
};

#endif