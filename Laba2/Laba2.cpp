#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
    string title;
    string author;
    bool available;
public:fffff
    Book(string t, string a) : title(t), author(a), available(true) {}
    Book() : Book("", "") {}
    ~Book() {}

    string getTitle() const {
        return title;
    }
    string getAuthor() const {
        return author;
    }
    bool isAvailable() const {
        return available;
    }
    void setTitle(string t) {
        title = t;
    }
    void setAuthor(string a) {
        author = a;
    }
    void setAvailable(bool status) {
        available = status;
    }
    bool operator==(const Book& other) const {
        return title == other.title && author == other.author;
    }
};

class Reader {
private:
    string name;
    vector<Book*> borrowedBooks;
public:
    Reader(string n) : name(n) {}
    Reader() : Reader("") {}
    ~Reader() {}

    string getName() const {
        return name;
    }
    vector<Book*> getBorrowedBooks() const {
        return borrowedBooks;
    }
    void borrowBook(Book* book) {
        borrowedBooks.push_back(book);
    }
    void returnBook(Book* book) {
        auto it = find(borrowedBooks.begin(), borrowedBooks.end(), book);
        if (it != borrowedBooks.end()) {
            borrowedBooks.erase(it);
        }
    }
    bool operator==(const Reader& other) const {
        return name == other.name;
    }
};


class Library {
private:
    vector<Book> books;
    vector<Reader> readers;
public:
    Library() {}
    ~Library() {}

    void addBook(const Book& book) {
        books.push_back(book);
    }
    void removeBook(const Book& book) {
        auto it = find(books.begin(), books.end(), book);
        if (it != books.end()) {
            books.erase(it);
        }
    }

    void addReader(const Reader& reader) {
        readers.push_back(reader);
    }
    void removeReader(const Reader& reader) {
        auto it = find(readers.begin(), readers.end(), reader);
        if (it != readers.end()) {
            readers.erase(it);
        }
    }
};

int main() {
    Book book1("Harry Potter", "J.K. Rowling");
    Book book2("Lord of the Rings", "J.R.R. Tolkien");
    Reader reader1("Vlad");
    Reader reader2("Vasia");

    Library library;
    library.addBook(book1);
    library.addBook(book2);

    library.addReader(reader1);
    library.addReader(reader2);

    if (book1.isAvailable()) {
        reader1.borrowBook(&book1);
        book1.setAvailable(false);
        cout << "Book '" << book1.getTitle() << "' has been borrowed by " << reader1.getName() << endl;
    }
    else {
        cout << "Book '" << book1.getTitle() << "' is not available." << endl;
    }

    reader1.returnBook(&book1);
    book1.setAvailable(true);
    cout << "Book '" << book1.getTitle() << "' has been returned." << endl;

    return 0;
}