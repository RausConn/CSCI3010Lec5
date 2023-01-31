#include <iostream>
#include <vector>
#include "Library.h"

// Name(s): Connor Rauscher
//
// Complete numbered coding tasks.
// Answer the questions with "Answer: " in the comments by writing your answer in the comments.
// some experiments might result in non-running/non-compiling code. Leave these experiments in, but
// comment them out.
// Turn in run_library.cpp, Library.h, and Library.cpp on Canvas before the end of class.
// make sure to leave a comment here and on canvas with your name and the name(s) of your partners.

int main() {
    // 1) Instantiate a couple Books. Set their fields equal to some values.
    // Print out the values of the books' fields.

    Book b1;
    b1.title = "The Hobbit";
    b1.author = "J.R.R. Tolkien";

    Book b2;
    b2.title = "A Wrinkle in Time";
    b2.author = "Madeleine L'Engle";

    std::cout << "1) Print books:" << std::endl;
    std::cout << b1.title << " by " << b1.author << std::endl;
    std::cout << b2.title << " by " << b2.author << std::endl;

    // 2) Instantiate a Library.
    Library l1;

    // 3) Add a void Donate(Book b) method to your Library class.
    // Your Library should store the new book at the end of its shelf.

    // 4) Donate one of the Books that you instantiated to your Library.
    l1.Donate(b1);

    // 5) Print out the books in the Library (use the given PrintBooks method)
    std::cout << "5) Print books in library:" << std::endl;
    l1.PrintBooks();

    // 6) Change the title and/or author of the book that you donated to
    // something different.

    b1.title = "The Lord of the Rings";

    // Print out the new book information, then print out the books in your
    // Library. Did changing the Book information change it in your Library?
    
    std::cout << "6) Print book and then library after name change:" << std::endl;
    std::cout << b1.title << " by " << b1.author << std::endl;
    l1.PrintBooks();

    // Answer (and your hypothesis for why/why not):
    // The book information did not change in the library. This is because the book was copied into the library, not actually moved into the library. The book in the library is a copy of the book that was donated, not the book itself.


    // 7) Create two Books that are separate structs (not pointers or references)
    // but that have the same information.

    Book b3; 
    b3.title = "A Wrinkle in Time";
    b3.author = "Madeleine L'Engle";

    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    
    // if (b2 == b3) {
    //     std::cout << "Books equal" << std::endl;
    // } else {
    //     std::cout << "Books not equal" << std::endl;

    // Answer:
    // The books are not able to be compared because the == operator is not defined for the Book struct.

    // 8) Create two Book references to your Books from # 7.

    Book &b2ref = b2;
    Book &b3ref = b3;

    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    
    // if (b2ref == b3ref) {
    //     std::cout << "Books equal" << std::endl;
    // } else {
    //     std::cout << "Books not equal" << std::endl;
    // }

    // Answer:
    // Again the books are unable to be compared because the == operator is not defined for the Book struct.

    // 9) Create two Book pointers to your Books from # 7.

    Book *b2ptr = &b2;
    Book *b3ptr = &b3;

    // use the == operator to test if they are equal. What happens?

    std::cout << "9) Test if book pointers are equal:" << std::endl;
    if (b2ptr == b3ptr) {
        std::cout << "Books equal" << std::endl;
    } else {
        std::cout << "Books not equal" << std::endl;
    }

    // if it succeeds, are these equal?
    //
    // Answer:
    // This time the books are able to be compared, but they are not equal. This is because the pointers are pointing to two separate memory locations.


    // 10) Add a void Donate(Book b, int num_copies) method to your Library class.
    // your Library should add num_copies of Book b to its shelf.


    // 11) Finally, if you reach this far, work on finding a solution to making it so
    // that you would be able to do any of the comparisons from # 7, 8, and 9

    std::cout << "11) Testing == operator" << std::endl;
    if (b2 == b3) {
        std::cout << "Books equal" << std::endl;
    } else {
        std::cout << "Books not equal" << std::endl;
    }

    if (b2ref == b3ref) {
        std::cout << "Books equal" << std::endl;
    } else {
        std::cout << "Books not equal" << std::endl;
    }

    if (b2ptr == b3ptr) {
        std::cout << "Books equal" << std::endl;
    } else {
        std::cout << "Books not equal" << std::endl;
    }


}
