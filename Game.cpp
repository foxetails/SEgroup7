#include "Game.h"
#include <iostream>
using namespace std;

//Default constructor
Game::Game() {
    gameID = 0;
    title = "";
    platform = PC;
    genre = "";
    rating = "";
    publisher = "";
    releaseDate = "";
    baseRentalPrice = 0.0;
    createdAt = "";
    updatedAt = "";
}

//Destructor
Game::~Game() {
    //No dynamic memory to release
}

//Getters and Setters

//GameID
int Game::getGameID() {
    return gameID;
}

void Game::setGameID(int n) {
    gameID = n;
}

//Game title
string Game::getTitle() {
    return title;
}

void Game::setTitle(string n) {
    title = n;
}

//Game platform
Game::Platform Game::getPlatform() {
    return platform;
}

void Game::setPlatform(Game::Platform p) {
    platform = p;
}

//Game genre
string Game::getGenre() {
    return genre;
}

void Game::setGenre(string n) {
    genre = n;
}

//Game rating
string Game::getRating() {
    return rating;
}

void Game::setRating(string n) {
    rating = n;
}

//Game publisher
string Game::getPublisher() {
    return publisher;
}

void Game::setPublisher(string n) {
    publisher = n;
}

//Release date
string Game::getReleaseDate() {
    return releaseDate;
}

void Game::setReleaseDate(string n) {
    releaseDate = n;
}

//Base rental price
float Game::getBaseRentalPrice() {
    return baseRentalPrice;
}

void Game::setBaseRentalPrice(float f) {
    baseRentalPrice = f;
}

//Created at
string Game::getCreatedAt() {
    return createdAt;
}

void Game::setCreatedAt(string n) {
    createdAt = n;
}

//Updated at
string Game::getUpdatedAt() {
    return updatedAt;
}

void Game::setUpdatedAt(string n) {
    updatedAt = n;
}

//Print function for simplicity, can be modified later
void Game::printGameInfo() {
    cout << "Game ID: " << gameID << endl;
    cout << "Title: " << title << endl;
    
    if (platform == PC)
        cout << "Platform: PC" << endl;
    else if (platform == CONSOLE)
        cout << "Platform: Console" << endl;
    else
        cout << "Platform: Mobile" << endl;
    
    cout << "Genre: " << genre << endl;
    cout << "Rating: " << rating << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Release date: " << releaseDate << endl;
    //Likely need formatting here for float
    cout << "Base Rental Price: " << baseRentalPrice << endl;
    cout << "Created at: " << createdAt << endl;
    cout << "Updated at: " << updatedAt << endl;

}