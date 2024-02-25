#include <iostream>

#include "book.h"
#include "libraryuser.h"
#include "library.h"

using namespace std;

int main() {

    Library library;

    Book book1("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997);
    library.addBook(book1);

    Book book2("Tom Sowyer", "Mark Twain", 1876);
    library.addBook(book2);

    LibraryUser user1("Vlad");
    library.addUser(user1);

    LibraryUser user2("Tolyan");
    library.addUser(user2);

    return 0;
}