#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct Fio
{
    string name;
    string surname;
    string o;
};

struct Book
{
    string name;
    Fio author;
    int year;
    string janr;
    

};

struct Writer {
    string date;
    Fio fio;
    vector <Book> vector;
    int age;

    void ChangeName(string name)
    {
        this->fio.name = name;
    }

    void ChangeSurname(string surname)
    {
        this->fio.surname = surname;
    }

    void WriteBook(Book &book)
    {
        book.author.name = this->fio.name;
        book.author.surname = this->fio.surname;
        book.author.o = this->fio.o;


        this->vector.push_back(book);
        
    }
};




void add_book(Book book1, vector<Book> &books)
{
    books.push_back(book1);
}

void delete_book(Book book1, vector<Book> &books)
{
    vector<Book> books2;
    for (Book b : books)
    {
        if (b.name != book1.name)
        {
            books2.push_back(b);
        }
    }
    books = books2;
}

void show_all_books(vector<Book> &books)
{
     for (int i=0; i < books.size(); i++)
    {
        cout << "name: " << books[i].name << endl;
        cout << "author: " << books[i].author.name << " " << books[i].author.surname << " " << books[i].author.o << endl;
        cout << "year: " << books[i].year << endl;
        cout << "janr: " << books[i].janr << endl;
        cout << "-----------------" << endl;
    }
}

void search_by_author(Writer &writer, vector <Book> &books)
{
    for (int i=0; i < books.size(); i++)
    {
        if (books[i].author.name == writer.fio.name && books[i].author.surname == writer.fio.surname)
        {
            cout << "name: " << books[i].name << endl;
            cout << "author: " << books[i].author.name << " " << books[i].author.surname << " " << books[i].author.o << endl;
            cout << "year: " << books[i].year << endl;
            cout << "janr: " << books[i].janr << endl;
            cout << "-----------------" << endl;
        }
    }
}

void search_by_bookname(string name, vector <Book> &books)
{
    for (int i=0; i < books.size(); i++)
    {
        if (books[i].name == name)
        {
            cout << "name: " << books[i].name << endl;
            cout << "author: " << books[i].author.name << " " << books[i].author.surname << " " << books[i].author.o << endl;
            cout << "year: " << books[i].year << endl;
            cout << "janr: " << books[i].janr << endl;
            cout << "-----------------" << endl;
        }
    }
}


int main() {

    vector <Book> library;

    Writer writer;
    writer.date = "12.03.2022";
    writer.fio.name = "Ivan";
    writer.fio.surname = "Ivanov";
    writer.fio.o = "Ivanovich";

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
    book1.name = "ggg";
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

    writer.WriteBook(book);
    writer.WriteBook(book1);
    writer.WriteBook(book2);
    writer1.WriteBook(book3);


    add_book(book, library);
    add_book(book1, library);
    add_book(book2, library);
    add_book(book3, library);


    // delete_book(book2, library);

    // show_all_books(library);

    // search_by_author(writer1, library);

    search_by_bookname("ggg", library);


}

