#include "library.h"
#include "writer.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 65001>nul");
    vector <Book> library;

    Writer writer;
    writer.date = "12.03.2022";
    writer.fio.name = "Ivan";
    writer.fio.surname = "Ivanov";
    writer.fio.o = "Ivanovich";

    writer.ChangeName("hjhjh");
    writer.ChangeSurname("hsjhdj");

    Writer writer1;
    writer1.date = "12.06.2000";
    writer1.fio.name = "Alexandl";
    writer1.fio.surname = "Puchkin";
    writer1.fio.o = "Sergeevich";


    Book book;
    book.name = "abc";
    book.year = 2022;
    book.janr = "poem";

    Book book1;
    book1.name = "gggjhj";
    book1.year = 2024;
    book1.janr = "poems";

    Book book2;
    book2.name = "gyhjyl";
    book2.year = 2000;
    book2.janr = "kklko";

    Book book3;
    book3.name = "ggg";
    book3.year = 2088;
    book3.janr = "vjgkjkr";

    // writer.WriteBook(book);
    writer.WriteBook(book1);
    writer.WriteBook(book2);
    writer1.WriteBook(book3);


    add_book(book, library);
    add_book(book1, library);
    add_book(book2, library);
    add_book(book3, library);


    // delete_book(book2, library);

    show_all_books(library);

    // search_by_author_in_library(writer, library);
    // search_by_author_exists(writer);

    // search_by_bookname("ggg", library);


}

