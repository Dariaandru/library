#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book.h"
#include "writer.h"

void add_book(Book book1, std::vector<Book>& books);
void delete_book(Book book1, std::vector<Book>& books);
void show_all_books(std::vector<Book>& books);
void search_by_bookname(std::string name, std::vector <Book> &books);
void search_by_author_in_library(Writer &writer, std::vector <Book> &books);
void search_by_author_exists(Writer &writer);

#endif  // LIBRARY_H