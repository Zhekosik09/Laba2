#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int yearPublished;

public:
    Book() : title(""), author(""), yearPublished(0) {}
    Book(string title, string author, int yearPublished) : title(title), author(author), yearPublished(yearPublished) {}
    ~Book() {
        cout << "Book destroyed:" << title << "\n" << endl;
    }

    string getTitle() const {
        return title;
    }
    string getAuthor() const {
        return author;
    }
    int getYearPublished() const {
        return yearPublished;
    }
};

#endif