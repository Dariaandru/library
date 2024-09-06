#include "library.h"
#include <iostream>
#include <vector>
using namespace std;

void add_book(Book book1, std::vector<Book>& books) {
    books.push_back(book1);
}

// void delete_book(Book book1, std::vector<Book>& books) {
//     // реализация удаления книги из библиотеки
//     // для простоты, удалим первую книгу с таким же названием
//     for (auto it = books.begin(); it != books.end(); ++it) {
//         if (it->name == book1.name) {
//             books.erase(it);
//             break;
//         }
//     }
// }

void delete_book(Book book1, vector<Book> &books)
{
    vector<Book> books2;
    for (Book &b : books)
    {
        if (b.name != book1.name)
        {
            books2.push_back(b);
        }
    }
    books = books2;
}


void show_all_books(std::vector<Book>& books) {
    for (const auto& book : books) {
        std::cout << "Название: " << book.name << std::endl;
        std::cout << "Автор: " << book.author.name << " " << book.author.surname << " " << book.author.o << std::endl;
        std::cout << "Год: " << book.year << std::endl;
        std::cout << "Жанр: " << book.janr << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }
}


void search_by_author_in_library(Writer &writer, vector <Book> &books)
{
    for (int i=0; i < books.size(); i++)
    {
        if (books[i].author.name == writer.fio.name && books[i].author.surname == writer.fio.surname)
        {
        std::cout << "Название: " << books[i].name << std::endl;
        std::cout << "Автор: " << books[i].author.name << " " << books[i].author.surname << " " << books[i].author.o << std::endl;
        std::cout << "Год: " << books[i].year << std::endl;
        std::cout << "Жанр: " << books[i].janr << std::endl;
        std::cout << "------------------------------------" << std::endl;
        }
    }
}

void search_by_author_exists(Writer &writer)
{
    std::cout << "Автор: " << writer.fio.name << " " << writer.fio.surname << " " << writer.fio.o << std::endl <<std::endl;
    for (int i=0; i < writer.books.size(); i++)
    {
        std::cout << "Название: " << writer.books[i].name << std::endl;
        std::cout << "Год: " << writer.books[i].year << std::endl;
        std::cout << "Жанр: " << writer.books[i].janr << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }
}

void search_by_bookname(string name, vector <Book> &books)
{
    for (int i=0; i < books.size(); i++)
    {
        if (books[i].name == name)
        {
        std::cout << "Название: " << books[i].name << std::endl;
        std::cout << "Автор: " << books[i].author.name << " " << books[i].author.surname << " " << books[i].author.o << std::endl;
        std::cout << "Год: " << books[i].year << std::endl;
        std::cout << "Жанр: " << books[i].janr << std::endl;
        std::cout << "------------------------------------" << std::endl;
        }
    }
}