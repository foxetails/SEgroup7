#include <string>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {
public:
    //Constructor
    Game();

    //Destructor
    ~Game();

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

    string getReleaseDate();
    void setReleaseDate(string n);

    float getBaseRentalPrice();
    void setBaseRentalPrice(float f);

    string getCreatedAt();
    void setCreatedAt(string n);

    string getUpdatedAt();
    void setUpdatedAt(string n);

    void printGameInfo();

private:
    int gameID;
    string title;
    Platform platform;
    string genre;
    string rating;
    string publisher;
    string releaseDate;
    float baseRentalPrice;
    string createdAt;
    string updatedAt;
};

#endif