#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

using namespace std;

class Book {
private:
    string title;
    string author;
    int bookId;
    static int NextBookId;
    vector<LibraryUser> readers;

public:
    Book(string title, string author) : title(title), author(author), bookId(NextBookId++) {}

    void addReader(const LibraryUser& user) {
        readers.push_back(user);
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Book ID: " << bookId << endl;
        cout << "Readers:" << endl;
        for (const auto& reader : readers) {
            cout << "  " << reader.getName() << " (ID: " << reader.getUserId() << ")" << endl;
        }
    }
    ~Book() {
        cout << "Book destroyed\n" << endl;
    }
};

int Book::NextBookId = 0;

#endif