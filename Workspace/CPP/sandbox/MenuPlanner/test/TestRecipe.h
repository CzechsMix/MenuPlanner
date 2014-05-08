#ifndef TEST_RECIPE_H
#define TEST_RECIPE_H

#include<iostream>
#include<string>

#include "../Recipe.h"

using namespace std;

Recipe getRecipe() 
{
	Recipe r(string("Grilled Cheese"));
	r.addIngredient(Ingredient(string("Bread"), 2, string("Slice")));
	r.addIngredient(Ingredient(string("Butter"), 1, string("Tbsp.")));
	r.addIngredient(Ingredient(string("Cheese"), 1, string("Slice")));
	r.addStep(string("Heat Pan on Medium Low"));
	r.addStep(string("Spread Butter on 1 side of each bread slice"));
	r.addStep(string("Cook 2 minutes, each side"));
	r.addStep(string("Place Cheese between bread, butter side out"));
	r.swapSteps(2,3);

	return r;
}

void testRecipe()
{
	cout << "Begin Recipe Test" << endl;
	cout << "--------" << endl;
	Recipe r = getRecipe();
	cout << r << endl;
	cout << "--------" << endl;
	cout << "End Recipe Test" << endl;
}

#endif //TEST_RECIPE_H
