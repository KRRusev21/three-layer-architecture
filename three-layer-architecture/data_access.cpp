// data_access.cpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class DataAccess {
public:
    static vector<pair<string, string>> readUsersFromFile(const string& filename) {
        ifstream file(filename);
        vector<pair<string, string>> users;

        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                istringstream lineStream(line);
                string storedUsername, storedPassword;
                getline(lineStream, storedUsername, ':');
                getline(lineStream, storedPassword);
                users.push_back({ storedUsername, storedPassword });
            }
            file.close();
        }

        return users;
    }
};
