#ifndef LIBRARYUSER_H
#define LIBRARYUSER_H

#include <string>

using namespace std;

class LibraryUser {
private:
    string name;

public:
    LibraryUser(string name) : name(name) {}
    ~LibraryUser() {
        cout << "Library user destroyed: \t" << name << "\n" << endl;
    }

    string getName() const {
        return name;
    }
};

#endif LIBRARYUSER_H