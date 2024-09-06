#include "writer.h"

void Writer::ChangeName(std::string name) {
    fio.name = name;
}

void Writer::ChangeSurname(std::string surname) {
    fio.surname = surname;
}

void Writer::WriteBook(Book& book) {
    this->books.push_back(book);
    book.author.name = this->fio.name;
    book.author.surname = this->fio.surname;
    book.author.o = this->fio.o;
}