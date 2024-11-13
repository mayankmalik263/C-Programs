#include <stdio.h>
#include <string.h>

typedef struct
{
    int book_id;
    char title[50];
    char author[50];
    float price;
} Book;

void printBookDetails(Book *book)
{
    printf("Book ID: %d\n", book->book_id);
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Price: %.2f\n", book->price);
}

int main()
{
    Book book;
    book.book_id = 1;
    strcpy(book.title, "C Programming");
    strcpy(book.author, "Dennis Ritchie");
    book.price = 500.50;

    printBookDetails(&book);
    return 0;
}

/*
@ In the printBookDetails function, I changed the parameter type from Book to Book *, which means it now takes a pointer to a Book struct as an argument.
@ Inside the printBookDetails function, I changed the access operators from . to ->, which is used to access members of a struct through a pointer.
@ In the main function, I passed the address of the book variable to the printBookDetails function using the unary & operator.
@ By using pointers, we can pass the book variable to the printBookDetails function without making a copy of the entire struct. This can be more efficient, especially if the struct is large.
*/