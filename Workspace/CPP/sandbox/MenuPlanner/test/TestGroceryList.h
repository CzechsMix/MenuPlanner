#ifndef TEST_GROCERY_LIST_H
#define TEST_GROCER_LIST_H

#include<iostream>
#include<string>

#include"../GroceryList.h"

using namespace std;

void testGroceryList(Recipe r)
{
	cout << "Test Grocery List" << endl;
	cout << "--------" << endl;

	GroceryList gl;

	gl.addIngredient(Ingredient(string("Chicken"), 1, string("Lb.")));
	gl.addIngredient(Ingredient(string("Beef"), 8, string("Patty")));
	gl.addIngredient(Ingredient(string("Chicken"), 4, string("Lb.")));

	gl.addRecipe(r);

	cout << gl << endl;

	cout << "--------" << endl;
	cout << "End Grocery List" << endl;
}

#endif //TEST_GROCER_LIST_H
