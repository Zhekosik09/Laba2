#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Клас, що представляє книгу в бібліотеці
class Book {
private:
    string title;
    string author;
    int yearPublished;

public:
    // Конструктор за замовчуванням
    Book() : title(""), author(""), yearPublished(0) {}

    // Перевантажений конструктор з параметрами
    Book(string title, string author, int yearPublished) : title(title), author(author), yearPublished(yearPublished) {}

    // Деструктор
    ~Book() {
        cout << "Book destroyed: " << title << endl;
    }

    // Методи доступу до приватних полів
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    int getYearPublished() const { return yearPublished; }
};

// Клас, що представляє користувача бібліотеки
class LibraryUser {
private:
    string name;

public:
    // Конструктор з параметрами
    LibraryUser(string name) : name(name) {}

    // Деструктор
    ~LibraryUser() {
        cout << "Library user destroyed: " << name << endl;
    }

    // Методи доступу до приватних полів
    string getName() const { return name; }
};

// Клас, що представляє бібліотеку
class Library {
private:
    vector<Book> books;
    vector<LibraryUser> users;

public:
    // Конструктор за замовчуванням
    Library() {}

    // Деструктор
    ~Library() {
        cout << "Library destroyed" << endl;
    }

    // Додавання книги до бібліотеки
    void addBook(const Book& book) {
        books.push_back(book);
    }

    // Додавання користувача до бібліотеки
    void addUser(const LibraryUser& user) {
        users.push_back(user);
    }
};

int main() {
    // Приклад використання класів
    Book book1("Harry Potter", "J.K. Rowling", 1997);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);

    LibraryUser user1("John Doe");
    LibraryUser user2("Jane Smith");

    Library library;

    library.addBook(book1);
    library.addBook(book2);

    library.addUser(user1);
    library.addUser(user2);

    return 0;
}