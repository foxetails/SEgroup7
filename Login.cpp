/* This code describes the login function which will test a password against a map of saved usernames and passwords until it finds a match.
It is functional, but not optimized, as usernames and passwords are not encrypted.
This cpp file includes add, remove, and updater functions. */
//Users are uploaded from a text file with no encryption for simplicity.

#include <Login.h>
#include <fstream>
#include <iostream>

using namespace std;


bool Login::login(const string& username, const string& password) 
{   
    ifstream file("users.txt");string file_username, file_password;

    if (!file.is_open()) {
        cerr << "Error opening users file." << endl;
        return false;
    }   
    while (file >> file_username >> file_password) {
        users[file_username] = file_password;
        return true;
    }
    return false; 
}

