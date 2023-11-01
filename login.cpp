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

//login function
void loginUser(string username, string password){
    if(userDatabase.find(username) != userDatabase.end() && userDatabase[username] == password){
        cout << "login successful" << endl;
    } else {
        cout << "Invalid username or password. Please try again." << endl;
    }
}

//implement both functions
int main(){
    string username, password;
    //registration process
    cout << "Enter a username" << endl;
    cin >> username;
    cout << "Enter a password" << endl;
    cin >> password;
    registerUser(username, password);

    //login process
    cout << "Enter your username" << endl;
    cin >> username;
    cout << "Enter your password" << endl;
    cin >> password;
    loginUser(username, password);

    return 0;
}