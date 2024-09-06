#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Fio {
    std::string name;
    std::string surname;
    std::string o;
};

struct Book {
    std::string name;
    Fio author;
    int year;
    std::string janr;

    Book()
    {
        name = "NULL";
        author.name = "NULL";
        author.surname = "";
        author.o = "";
        year = 0;
        janr = "NULL";
    }

};

#endif  // BOOK_H