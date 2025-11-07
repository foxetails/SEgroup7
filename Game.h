#include <string>
#include <ctime>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {
public:
    //Constructor
    Game();

    //Enum for platform
    enum Platform {
        PC,
        CONSOLE,
        MOBILE
    };

    //Setters and Getters
    int getGameID();
    void setGameID(int n);

    string getTitle();
    void setTitle(string n);

    Platform getPlatform();
    void setPlatform(Platform p);

    string getGenre();
    void setGenre(string n);

    string getRating();
    void setRating(string n);

    string getPublisher();
    void setPublisher(string n);

    //Release date functions here

    float getBaseRentalPrice();
    void setBaseRentalPrice(float f);

    //Created at functions here

    //Updated at functions here

    //Create, delete, print here

private:
    int gameID;
    string title;
    Platform platform;
    string genre;
    string rating;
    string publisher;
    //release date
    float baseRentalPrice;
    //createdAt
    //updatedAt
};

#endif