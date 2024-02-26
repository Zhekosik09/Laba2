#ifndef LIBRARYUSER_H
#define LIBRARYUSER_H

#include <string>

using namespace std;

class LibraryUser {
private:
    string name;
    int userId;
    static int NextUserId;

public:
    LibraryUser(string name) : name(name), userId(NextUserId++) {}

    string getName() const {
        return name;
    }

    int getUserId() const {
        return userId;
    }

    ~LibraryUser() {
        cout << "LibraryUser destroyed\n" << endl;
    }
};

int LibraryUser::NextUserId = 1;

#endif LIBRARYUSER_H