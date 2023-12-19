// main.cpp

#include <iostream>
#include <vector>
#include "data_access.cpp"
#include "business_logic.cpp"

using namespace std;

int main() {
    vector<pair<string, string>> users = DataAccess::readUsersFromFile("loginInfo.txt");

    if (users.empty()) {
        cerr << "Error reading user data or users vector is empty." << endl;
        return 1;
    }

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    bool isValid = BusinessLogic::validateLogin(username, password, users);

    if (isValid) {
        cout << "Login successful!" << endl;
    }
    else {
        cout << "Invalid username or password. Please try again." << endl;
    }

    return 0;
}
