#include<iostream>
using namespace std;

struct Book{
    int NoOfPages;
    char Title;
    bool IsGood;
};

union Story{
    int NoOfPages;
    char Title;
    bool IsGood;
};

enum Names {Rahul, Priya, Sonali, Jatin, Surendra};

int main(){
    struct Book b1;
    b1.NoOfPages = 1;
    b1.Title = 'A';
    b1.IsGood = true;

    union Story s1;
    s1.NoOfPages = 65;
    s1.IsGood = true;

    enum Names name = Priya;

    cout << "-------------Book Information-------------\n";
    cout << "Pages : " << b1.NoOfPages << endl;
    cout << "Title : " << b1.Title << endl;
    cout << "Is Good : " << b1.IsGood << endl;
    
    cout << "\n-------------Story Information-------------\n";
    cout << "Pages : " << s1.NoOfPages << endl;
    cout << "Title : " << s1.Title << endl;
    cout << "Is Good : " << s1.IsGood << endl;

    cout << "\n-------------Name Information-------------\n";
    cout << "Name Index : " << name << endl;

    return 0;
}