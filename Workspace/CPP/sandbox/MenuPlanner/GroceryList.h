#ifndef GROCERY_LIST_H
#define GROCERY_LIST_H

#include<iostream>
#include<string>
#include<map>

#include"Ingredient.h"
#include"Recipe.h"

using namespace std;

class GroceryList
{
private:
	map<string, int> m_mItems;
public:
	
	GroceryList()
	{
		m_mItems = map<string, int>();	
	}

	void addIngredient(Ingredient i)
	{
		//Create a key a value
		string key = i.getName() + " " + i.getUnits();

		//Total ingredients with the same key
		map<string, int>::iterator it = m_mItems.find(key);
		if(it != m_mItems.end())
		{
			m_mItems[key] = it->second + i.getCount();
		}
		//Add ingredients with new keys
		else
		{
			m_mItems[key] = i.getCount();
		}
	}

	void addRecipe(Recipe r)
	{
		for(int i = 0; i < r.getIngredientCount(); i++)
		{
			addIngredient(r.getIngredient(i));
		}
	}

	friend ostream& operator<<(ostream &out, GroceryList &g);
};


ostream& operator<<(ostream &out, GroceryList &g)
{
	for(map<string, int>::iterator it = g.m_mItems.begin(); it != g.m_mItems.end(); it++)
	{
		out << "[ ] " << it->second << " " << it->first << endl;
	}
	return out;
}
#endif //GROCERY_LIST_H
