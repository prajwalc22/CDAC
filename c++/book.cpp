#include <iostream>
using namespace std;

class Book
{

    string title;
    string author;
    float price;
    int pages;

public:
    void setBookInfo(string t, string a, float p, int pg)
    {

        title = t;
        author = a;
        price = p;
        pages = pg;
    }

    void displayBook()
    {
        cout << title << endl
             << author << endl
             << price << endl
             << pages << endl;
    };

    void applyDiscount(float discount, float price)
    {
        // float price = price % discount;
        int number = 500;
        cout << (number * 10) / 100 << endl;
    };

    // bool isExpensive() {
    // };
};

int main()
{
    Book b1;
    string title_of_book;
    string author_of_book;
    float price_of_book;
    int pages_of_book;
    float discount;
    cout << "Enter title of book, author , price and pages:" << endl;

    cin >>
        title_of_book;
    cin >> author_of_book;
    cin >> price_of_book;
    cin >> pages_of_book;

    b1.setBookInfo(title_of_book, author_of_book, price_of_book, pages_of_book);
    b1.displayBook();
    b1.applyDiscount(discount, price_of_book);
}