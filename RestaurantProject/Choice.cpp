#include "Choice.h"
#include <iostream>
using namespace std;

void Choice::purchase() {
    cout << "Purchase Items: " << endl;
    cout << "\nHow many Pizza's you want to Purchase: ";
    cin >> pur_pizza;
    cout << "\nHow many Burger's you want to Purchase: ";
    cin >> pur_burger;
    cout << "\nHow many Dosa's you want to Purchase: ";
    cin >> pur_dosa;
    cout << "\nHow many Pasta's you want to Purchase: ";
    cin >> pur_pasta;
    cout << "\nHow many Noodles's you want to Purchase: ";
    cin >> pur_noodles;
    cout << "\nHow many Shake's you want to Purchase: ";
    cin >> pur_shake;
    cout << "\nHow many Icecream's you want to Purchase: ";
    cin >> pur_icecream;
}

void Choice::choice() {
    
    cout << "\nEnter Your Choice:";
    cin >> c;
    switch (c) {
    case 1:
        cout << "\nEnter Pizza Quantity:" << endl;
        cin >> q;
        if (q <= pur_pizza - sell_pizza) {
            cout << "Order of " << q << " Pizza's Placed" << endl;
            sell_pizza += q;
            pizza += q * 500;
        }
        else {
            cout << "Sorry Only " << pur_pizza - sell_pizza << " in restaurant" << endl;
        }
        break;
    case 2:
        cout << "\nEnter Burger Quantity:" << endl;
        cin >> q;
        if (q <= pur_burger - sell_burger) {
            cout << "Order of " << q << " Burger's Placed" << endl;
            sell_burger += q;
            burger += q * 100;
        }
        else {
            cout << "Sorry Only " << pur_burger - sell_burger << " in restaurant" << endl;
        }
        break;
    case 3:
        cout << "\nEnter Dosa Quantity:" << endl;
        cin >> q;
        if (q <= pur_dosa - sell_dosa) {
            cout << "Order of " << q << " Dosa's Placed" << endl;
            sell_dosa += q;
            dosa += q * 150;
        }
        else {
            cout << "Sorry Only " << pur_dosa - sell_dosa << " in restaurant" << endl;
        }
        break;
    case 4:
        cout << "\nEnter Pasta Quantity:" << endl;
        cin >> q;
        if (q <= pur_pasta - sell_pasta) {
            cout << "Order of " << q << " Pasta's Placed" << endl;
            sell_pasta += q;
            pasta += q * 250;
        }
        else {
            cout << "Sorry Only " << pur_pasta - sell_pasta << " in restaurant" << endl;
        }
        break;
    case 5:
        cout << "\nEnter Noodles Quantity:" << endl;
        cin >> q;
        if (q <= pur_noodles - sell_noodles) {
            cout << "Order of " << q << " Noodles's Placed" << endl;
            sell_noodles += q;
            noodles += q * 120;
        }
        else {
            cout << "Sorry Only " << pur_noodles - sell_noodles << " in restaurant" << endl;
        }
        break;
    case 6:
        cout << "\nEnter Shake Quantity:" << endl;
        cin >> q;
        if (q <= pur_shake - sell_shake) {
            cout << "Order of " << q << " Shake's Placed" << endl;
            sell_shake += q;
            shake += q * 200;
        }
        else {
            cout << "Sorry Only " << pur_shake - sell_shake << " in restaurant" << endl;
        }
        break;
    case 7:
        cout << "\nEnter Icecream Quantity:" << endl;
        cin >> q;
        if (q <= pur_icecream - sell_icecream) {
            cout << "Order of " << q << " Icecream's Placed" << endl;
            sell_icecream += q;
            icecream += q * 170;
        }
        else {
            cout << "Sorry Only " << pur_icecream - sell_icecream << " in restaurant" << endl;
        }
        break;
    case 8:
        cout << "Pizza Details:" << endl;
        cout << "\nPizza Sold: " << sell_pizza << endl;
        cout << "Money Earned by selling Pizza: " << pizza << endl;
        cout << "Pizza's left in Restaurant: " << pur_pizza - sell_pizza << endl;

        cout << "\n\nBurger Details:" << endl;
        cout << "\nBurger Sold: " << sell_burger << endl;
        cout << "Money Earned by selling Burger: " << burger << endl;
        cout << "Burger's left in Restaurant: " << pur_burger - sell_burger << endl;

        cout << "\n\nDosa Details:" << endl;
        cout << "\nDosa Sold: " << sell_dosa << endl;
        cout << "Money Earned by selling Dosa: " << dosa << endl;
        cout << "Dosa's left in Restaurant: " << pur_dosa - sell_dosa << endl;

        cout << "\n\nPasta Details:" << endl;
        cout << "\nPasta Sold: " << sell_pasta << endl;
        cout << "Money Earned by selling Pasta: " << pasta << endl;
        cout << "Pasta's left in Restaurant: " << pur_pasta - sell_pasta << endl;

        cout << "\n\nNoodles Details:" << endl;
        cout << "\nNoodles Sold: " << sell_noodles << endl;
        cout << "Money Earned by selling Noodles: " << noodles << endl;
        cout << "Noodles's left in Restaurant: " << pur_noodles - sell_noodles << endl;

        cout << "\n\nShake Details:" << endl;
        cout << "\nShake Sold: " << sell_shake << endl;
        cout << "Money Earned by selling Shake: " << shake << endl;
        cout << "Shake's left in Restaurant: " << pur_shake - sell_shake << endl;

        cout << "\n\nIcecream Details:" << endl;
        cout << "\nIcecream Sold: " << sell_icecream << endl;
        cout << "Money Earned by selling Icecream: " << icecream << endl;
        cout << "Icecream's left in Restaurant: " << pur_icecream - sell_icecream << endl;

        cout << "\n\nTotal Profit: " << pizza + burger + pasta + dosa + noodles + shake + icecream << endl;
        break;
    case 9:
        exit(0);
    default:
        cout << "Wrong Choice: Try Again!" << endl;
    }

}
