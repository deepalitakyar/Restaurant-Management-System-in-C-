#pragma once
class Choice
{
public:
	void purchase();  //to purchase all the items
	void choice();    // to choose from list of options
	int c;  //choice
	//pur_itemName is purchasing of item, sell_itemName  is the selling of item.
	int pur_pizza = 0, pur_burger = 0, pur_dosa = 0, pur_pasta = 0, pur_noodles = 0, pur_shake = 0, pur_icecream = 0;
	int sell_pizza = 0, sell_burger = 0, sell_dosa = 0, sell_pasta = 0, sell_noodles = 0, sell_shake = 0, sell_icecream = 0;
	
	//item_name(eg: pizza) is the cost of number of items sold.
	int pizza = 0, burger = 0, dosa = 0, pasta = 0, noodles = 0, shake = 0, icecream = 0;
	int q; //quantity

};

