#ifndef WRITER_H
#define WRITER_H

#include <vector>
#include "book.h"

struct Writer {
    std::string date;
    Fio fio;
    std::vector<Book> books;
    int age;

    void ChangeName(std::string name);
    void ChangeSurname(std::string surname);
    void WriteBook(Book& book);

};

#endif  // WRITER_H