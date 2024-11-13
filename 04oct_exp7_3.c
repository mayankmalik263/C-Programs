#include <stdio.h>
#include <string.h>
typedef struct
{
    int book_id;
    char title[50];
    char author[50];
    float price;
} Book;

void printBookDetails(Book book)
{
    printf("Book ID: %d\n", book.book_id);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
}

int main()
{
    Book book;
    book.book_id = 1;
    strcpy(book.title, "C Programming");
    strcpy(book.author, "Dennis Ritchie");
    book.price = 500.50;

    printBookDetails(book);
    return 0;
}

/*
@ 1. typedef struct { ... } Book;

This line defines a new data type called Book using a struct. A struct is a way to group multiple variables together into a single unit. The typedef keyword allows us to give a name to this struct type, which is Book.

The struct itself has four members: * book_id: an int variable to store the book's ID * title: a character array (char[50]) to store the book's title (up to 49 characters plus a null terminator) * author: another character array (char[50]) to store the book's author (up to 49 characters plus a null terminator) * price: a float variable to store the book's price

@ 2. void printBookDetails(Book book) { ... }

This line defines a function called printBookDetails that takes a single argument of type Book. The function returns void, meaning it doesn't return any value.

The function body consists of four printf statements that print out the book's details: * printf("Book ID: %d\n", book.book_id);: prints the book's ID * printf("Title: %s\n", book.title);: prints the book's title * printf("Author: %s\n", book.author);: prints the book's author * printf("Price: %.2f\n", book.price);: prints the book's price with two decimal places

@ 3. int main() { ... }

This is the main function, which is the entry point of the program.

@ 4. Book book;

This line declares a variable book of type Book, which is the struct type we defined earlier.

@ 5. book.book_id = 1;

This line initializes the book_id member of the book variable to 1.

@ 6. strcpy(book.title, "C Programming");

This line uses the strcpy function to copy the string "C Programming" into the title member of the book variable. strcpy is a standard C function that copies a string from one location to another.

@ 7. strcpy(book.author, "Dennis Ritchie");

This line uses strcpy again to copy the string "Dennis Ritchie" into the author member of the book variable.

@ 8. book.price = 500.50;

This line initializes the price member of the book variable to 500.50.

@ 9. printBookDetails(book);

This line calls the printBookDetails function, passing the book variable as an argument. This will print out the book's details using the printf statements inside the printBookDetails function.

@ 10. return 0;

This line returns an integer value of 0 to indicate that the program has completed successfully.
*/