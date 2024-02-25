#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<LibraryUser> users;

public:
    Library() {}
    ~Library() {
        cout << "Library destroyed\n" << endl;
    }

    void addBook(const Book& book) {
        books.push_back(book);
    }
    void addUser(const LibraryUser& user) {
        users.push_back(user);
    }
};

#endif LIBRARY_H