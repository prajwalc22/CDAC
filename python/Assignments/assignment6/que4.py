# Q.4  
# Library Management System:
# •	Create a Book class with attributes like title, author, and is_available.
# •	Create a Library class that has a list of Book objects.
# •	Add methods to the Library class to:
# o	add_book(book): Adds a new book to the library's collection.
# o	borrow_book(title): Finds a book by title and changes its availability status.
# o	return_book(title): Changes a book's availability status back to available.
# o	display_available_books(): Prints the titles and authors of all available books.

class Book:
    def __init__(self, title, author, is_avai):
        self.title = title
        self.author = author
        self.is_available = is_avai

    def display_info(self):
        print(f"Title: {self.title}")
        print(f"Author: {self.author}")    
        print(f"Available: {self.is_available}")

class Library:
    def __init__(self):
        self.books = []

    def add_book(self, book):
        self.books.append(book)
        print("Book added")

    def borrow_book(self, title):
        for book in self.books:
            if book.title == title and book.is_available:
                book.is_available = False
                print(f"Book '{title}' borrowed")
                return
        print("Book not available")

    def return_book(self, title):
        for book in self.books:
            if book.title == title and not book.is_available:
                book.is_available = True
                print(f"Book '{title}' returned")
                return
        print("Book not found or already available")

    def display_available_books(self):
        for book in self.books:
            if book.is_available:
                print(f"Title: {book.title}, Author: {book.author}")


library = Library()
book1 = Book("Python Programming", "John Doe", True)
book2 = Book("Data Structures", "Jane Smith", True)

library.add_book(book1)
library.add_book(book2)
library.display_available_books()
library.borrow_book("Python Programming")
library.display_available_books()
library.return_book("Python Programming")
library.display_available_books()
