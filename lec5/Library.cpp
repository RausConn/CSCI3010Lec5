#include <iostream>
#include <string>
#include <vector>

#include "Library.h"

/**
  Zero argument constructor initializes a library with a shelf but no books.
*/
Library::Library() {
  std::vector<Book> tmp;
  shelf_ = tmp;  // initialize my shelf
}

/**
  Prints out each book in the library, one per line to cout
*/
void Library::PrintBooks() {
  for (Book b : shelf_) {
    std::cout << b.title << " by " << b.author << std::endl;
  }
}

void Library::Donate(Book b) {
  shelf_.push_back(b);
}

void Library::Donate(Book b, int num_copies) {
  for (int i = 0; i < num_copies; i++) {
    shelf_.push_back(b);
  }
}

bool operator==(Book b1, Book b2) {
  if (b1.title == b2.title && b1.author == b2.author) {
    return true;
  } else {
    return false;
  }
}
