#include <iostream>
#include <conio.h>
#include "Choice.h"
using namespace std;

int main()
{
    
    Choice c;

    cout << "\t\t\tRESTAURANT MENU\n\n\n";

    c.purchase();
    system("cls");

    p:
    cout << "\n1.Pizza" << endl;
    cout << "2.Burger" << endl;
    cout << "3.Dosa" << endl;
    cout << "4.Pasta" << endl;
    cout << "5.Noodles" << endl;
    cout << "6.Shake" << endl;
    cout << "7.Icecream" << endl;
    cout << "8.Details" << endl;
    cout << "9.Exit" << endl;
    
    c.choice();
    _getch();
    system("cls");
    goto p;
    return 0;
}

