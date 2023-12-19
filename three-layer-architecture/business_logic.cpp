// business_logic.cpp

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class BusinessLogic {
public:
    static bool validateLogin(const string& username, const string& password, const vector<pair<string, string>>& users) {
        for (const auto& user : users) {
            if (username == user.first && password == user.second) {
                return true;
            }
        }
        return false;
    }
};
