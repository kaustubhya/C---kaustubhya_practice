#include <iostream>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
    };

int main()
{

    Book book1;
    book1.title = "ABC of Life";
    book1.author = "Neil Wagner";
    book1.pages = 700;
    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    return 0;
}
