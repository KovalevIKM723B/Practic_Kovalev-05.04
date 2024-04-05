/*
#include <iostream> // задание 1
#include <string>;
using namespace std;
const int st = 3;
struct students
{
    string Name;
    int Age;
    float Average;
};

int main()
{
    students IKM[st];
    for (int i = 0; i < st; i++)
    {
        cout << "Enter student name\n";
        cin >> IKM[i].Name;
        cout << "Enter student age\n";
        cin >> IKM[i].Age;
        cout << "Enter student average\n";
        cin >> IKM[i].Average;
    }
    for (int i = 0; i < st; i++)
        cout << IKM[i].Name << "   " << IKM[i].Age << "   " << IKM[i].Average << endl;
}
*/

/*
#include <iostream> // задание 2
#include <string>;
using namespace std;
const int st = 1;
struct bank
{
    string Name;
    int Namber;
    float Balance;
};

int main()
{
    char a;
    bank inform[st];
    for (int i = 0; i < st; i++)
    {
        cout << "Enter name\n";
        cin >> inform[i].Name;
        cout << "Enter namber\n";
        cin >> inform[i].Namber;
        cout << "Enter balance\n";
        cin >> inform[i].Balance;
    }
    cout << "If you want add money, enter '+', if you want take away noney, enter '-', if you want back, enter '0'\n";
    cin >> a;
    float sum;
    switch (a)
    {
    case '+': cout << "Enter sum\n"; cin >> sum; inform[0].Balance = inform[0].Balance + sum; break;
    case '-': cout << "Enter sum\n"; cin >> sum; inform[0].Balance = inform[0].Balance - sum; break;
    case '0': break;
    default: cout << "Incorrect operation\n"; break;
    }
    for (int i = 0; i < st; i++)
    {
        cout << inform[i].Name << "   " << inform[i].Namber << "   " << inform[i].Balance << endl;
    }

}
*/


/*
#include <iostream> // задание 3
#include <string>;
using namespace std;
struct product
{
    string Name;
    float Price;
    int Quantity;
    int Number;
};

int main()
{
    int n;
    cout << "How much types of producrs you have?\n";
    cin >> n;
    product* good = new product[n+1];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name\n";
        cin >> good[i].Name;
        good[i].Number = i;
        cout << "Enter price\n";
        cin >> good[i].Price;
        cout << "Enter quantity\n";
        cin >> good[i].Quantity;
    }
    for (int i = 0; i < n; i++)
    {
        cout << good[i].Number << "   " << good[i].Name << "   " << good[i].Price << "   " << good[i].Quantity << endl;
    }
    cout << "If you wont add new type products, enter '+', if you wont change quantity, enter '1', if you wont back, enter '0'\n";
    char a;
    cin >> a;
    switch (a)
    {
    case '+': 
        n++;         
        cout << "Enter name\n";
        cin >> good[n-1].Name;
        good[n-1].Number = n-1;
        cout << "Enter price\n";
        cin >> good[n-1].Price;
        cout << "Enter quantity\n";
        cin >> good[n-1].Quantity;
        break;
    case '1':
        cout << "Enter the product number whose quantity you want to change\n";
        int number;
        cin >> number;
        cout << "Enter new quantity\n";
        cin >> good[number].Quantity;
        break;
    case '0': break;
    default: cout << "Incorrect operation\n"; break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << good[i].Number << "   " << good[i].Name << "   " << good[i].Price << "   " << good[i].Quantity << endl;
    }
    delete[] good;
}
*/


/*
#include <iostream> // задание 4
#include <string>;
using namespace std;
const int st = 10;
struct books
{
    string Name;
    string Autor;
    int Year;
};

int main()
{
    books a[st];
    string temp;
    int temp1 = 0;
    cout << "How much books you have?\n";
    int quantity;
    cin >> quantity;
    for (int i = 1; i <= quantity; i++)
    {
        cout << "Enter book name\n";
        cin >> a[i].Name;
        cout << "Enter autor name\n";
        cin >> a[i].Autor;
        cout << "Enter year\n";
        cin >> a[i].Year;
    }
    for (int end1 = 0; end1 < 1; end1)
    {
        cout << "If you want add new book, enter '+'. If you want find book by autor, enter 'a'. If you want find book by year, enter 'y'\n";
        cout << "If tou want back, enter '0'\n";
        char b;
        cin >> b;
        switch (b)
        {
        case '+':
            quantity++;
            cout << "Enter book name\n";
            cin >> a[quantity].Name;
            cout << "Enter autor name\n";
            cin >> a[quantity].Autor;
            cout << "Enter year\n";
            cin >> a[quantity].Year;
            break;
        case 'a':
            cout << "Enter autor name\n";
            cin >> temp;
            cout << "Query result:\n";
            for (int i = 1; i <= quantity; i++)
            {
                if (a[i].Autor == temp)
                {
                    cout << a[i].Name << "   " << a[i].Autor << "   " << a[i].Year << endl;
                }
            }
            break;
        case 'y':
            cout << "Enter year\n";
            cin >> temp1;
            cout << "Query result:\n";
            for (int i = 1; i <= quantity; i++)
            {
                if (a[i].Year == temp1)
                {
                    cout << a[i].Name << "   " << a[i].Autor << "   " << a[i].Year << endl;
                }
            }
            break;
        case '0':
            end1++;
            break;
        default: 
            cout << "Incorrect value\n";
            end1++;
            break;
        }
    }
    cout << "All books that you have\n";
    for (int i = 1; i <= quantity; i++)
    {
        cout << a[i].Name << "   " << a[i].Autor << "   " << a[i].Year << endl;
    }


}
*/

//ПОКАЖЧИКИ

/*
#include <iostream> // задание 1
#include <string>;
using namespace std;

int main()
{
    cout << "Enter value\n";
    float *p, a;
    cin >> a;
    p = &a;
    cout << "Enter operation (+,-,*,/)\n";
    char temp;
    cin >> temp;
    float value;
    switch (temp)
    {
    case '+':
        cout << "Enter value\n";
        cin >> value;
        *p = *p + value;
        break;
    case '-':
        cout << "Enter value\n";
        cin >> value;
        *p = *p - value;
        break;
    case '*':
        cout << "Enter value\n";
        cin >> value;
        *p = *p * value;
        break;
    case '/':
        cout << "Enter value\n";
        cin >> value;
        if (value == 0)
            cout << "Value cant = 0\n";
        else
        *p = *p / value;
        break;
    default: cout << "Incorrect operation\n"; break;
    }
    cout << "A = " << a << endl;
}
*/


/*
#include <iostream> // задание 2
#include <string>;
using namespace std;
const int a = 5;

int main()
{
    float mass[a];
    float* p1;
    int const* p2;
    for (int i = 0; i < a; i++)
    {
        mass[i] = rand() % 20;
        cout << mass[i] << endl;
    }
    float average;
    float sum = 0;
    for (int i = 0; i < a; i++)
    {
        
        p1 = &mass[i];
        sum = sum +*p1;
    }
    p2 = &a;
    average = sum / *p2;
    cout << "Average = " << average;
}
*/


/*
#include <iostream> // задание 3
#include <string>;
using namespace std;

int main()
{
    cout << "Enter massiv size\n";
    int size;
    cin >> size;
    int* mass = new int[size];
    for (int i = 0; i < size; i++)
    {
        mass[i] = rand() % 30 - 9;
    }
    for (int i = 0; i < size; i++)
    {
        cout << mass[i] << "   ";
    }
    delete[] mass;
}
*/