#include <iostream>
#include <string>
#include <map>

using namespace std;

//storing user data
map<string, string>userDatabase;

//registration function
void registerUser(string username, string password){
    if(userDatabase.find(username) == userDatabase.end()){
        userDatabase[username] = password;
        cout << "Registration successful" << endl;
    } else {
        cout << "Username already exists please choose a different one" << endl;
    }
}

//lpgin function
void loginUser(string username, string password){
    if(userDatabase.find(username) != userDatabase.end() && userDatabase[username] == password){
        cout << "login successful" << endl;
    } else {
        cout << "Invalid username or password. Please try again." << endl;
    }
}