#include <iostream>
#include <string>
#include <vector>

#include "libraryuser.h"
#include "book.h"
#include "library.h"

using namespace std;

int main() {
    Library library;

    LibraryUser user1("Vlad");
    library.addUser(user1);

    LibraryUser user2("Petya");
    library.addUser(user2);

    Book book1("Harry Potter", "Joanne Kathleen Rowling");
    library.addBook(book1);
    book1.addReader(user1);
    book1.display();

    Book book2("Jonathan Strange & Mr Norrell", "Susanna Clarke");
    library.addBook(book2);
    book2.addReader(user2);
    book2.display();
    return 0;
}
