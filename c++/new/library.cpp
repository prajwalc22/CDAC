#include <iostream>
#include <map>
using namespace std;

class LibraryInventory
{
private:
    map<string, int> bookStock;

public:
    LibraryInventory()
    {
    }
    LibraryInventory(map<string, int> bs)
    {
        bookStock = bs;
    }

    void addBooks(const string &title, int quantity)
    {
        bookStock[title] += quantity;
    }
    bool isBookAvailable(const string &title)
    {
        if (bookStock[title] >= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool borrowbook(const string &title)
    {
    }

    void returnBook(const string &title)
    {
    }

    int getStock(const string &title)
    {
    }
};

int main()
{
    LibraryInventory l1;
    string title = "book1";
    int count = 2;
    l1.addBooks(title, count);
    l1.isBookAvailable(title);
}