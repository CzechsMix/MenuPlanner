#ifndef RECIPE_H
#define RECIPE_H

#include<string>
#include<vector>
#include<iostream>

#include"Ingredient.h"

using namespace std;

class Recipe
{
private:
	string 			m_szName;
	vector<Ingredient> 	m_vIngredients;
	vector<string> 		m_vSteps;

public:

	Recipe(string szName)
	{
		m_szName = szName;
		m_vIngredients = vector<Ingredient>();
		m_vSteps = vector<string>();
	}

	string getName() { return m_szName; }
	Ingredient getIngredient(int i) { return m_vIngredients[i]; }
	string getStep(int i) { return m_vSteps[i]; }
	int getIngredientCount() { return m_vIngredients.size(); }
	int getStepsCount() { return m_vSteps.size(); }

	void addIngredient(Ingredient i)
	{
		m_vIngredients.push_back(i);
	}

	void addStep(string szStep)
	{
		m_vSteps.push_back(szStep);
	}

	void swapSteps(int i, int j)
	{
		if(i < 0 || i >= m_vSteps.size() || j < 0 || j >= m_vSteps.size())
		{
			cerr << "Error: index out of bounds when swapping steps" << endl;
		}
		else
		{
			if(i != j) 
			{
				string temp = m_vSteps[i];
				m_vSteps[i] = m_vSteps[j];
				m_vSteps[j] = temp;
			}
		}
	}

	friend ostream& operator<<(ostream &out, Recipe &r);
};

ostream& operator<<(ostream &out, Recipe &r)
{
	out << r.getName() << ":" << endl;
	for(int i = 0; i < r.getIngredientCount(); i++)
	{
		out << r.getIngredient(i).getName() << " ";
		out << r.getIngredient(i).getCount() << " ";
		out << r.getIngredient(i).getUnits() << " " << endl;
	}

	out << "----" << endl;
	out << "Steps:" << endl;
	
	for(int i = 0; i < r.getStepsCount(); i++)
	{
		out << i+1 << ") " << r.getStep(i) << endl;
	}
	
	return out;
}	

#endif //RECIPE_H
