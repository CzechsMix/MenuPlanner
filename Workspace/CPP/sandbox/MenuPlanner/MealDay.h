#ifndef MEAL_DAY_H
#define MEAL_DAY_H

#include<string>
#include<vector>

#include"Recipe.h"

//Iteration macro
#define every(iter, iterable) typeof(iterable.begin()) iter = iterable.begin(); iter != iterable.end(); iter++


using namespace std;

class MealDay
{
private:
	string		m_szDate;
	vector<Recipe> 	m_vBreakfast;
	int		m_iBreakfastItems;
	vector<Recipe> 	m_vLunch;
	int		m_iLunchItems;
	vector<Recipe> 	m_vDinner;
	int		m_iDinnerItems;
public:
	MealDay(string szDate)
	{
		m_szDate = szDate;
		m_iBreakfastItems = 0;
		m_iLunchItems = 0;
		m_iDinnerItems = 0;
		m_vBreakfast = vector<Recipe>();
		m_vLunch = vector<Recipe>();
		m_vDinner = vector<Recipe>();
	}

	void addLunch(Recipe r)
	{
		m_vLunch.push_back(r);
		m_iLunchItems++;
	}
	
	void addBreakfast(Recipe r)
	{
		m_vBreakfast.push_back(r);
		m_iLunchItems++;
	}

	void addDinner(Recipe r)
	{
		m_vDinner.push_back(r);
		m_iDinnerItems++;
	}

	int getLunchCount() { return m_iLunchItems; }
	Recipe getLunch(int index)
	{
		return m_vLunch[i];
	}

	int getBreakfastCount() { return m_iBreakfastItems; }
	Recipe getBreakfast(int index)
	{
		return m_vBreakfast[i];
	}

	int getDinnerCount() { return m_iDinnerItems; }
	Recipe getDinner(int index)
	{
		return m_vDinner[i];
	}

	friend ostream& operator<<(ostream& out, MealDay& md);

}

ostream& operator<<(ostream& out, MealDay& md)
{
	out << "Breakfast:" << endl;
	for(every(it, md.m_vBreakfast))
	{
		out << it->getName() << endl;
	}
	out << "Lunch:" << endl;
	for(vector<Recipe>::iterator it = md.m_vLunch.begin(); it != md.m_vLunch.end(); it++)
	{
		out << it->getName() << endl;
	}
	out << "Dinner:" << endl;
	for(vector<Recipe>::iterator it = md.m_vDinner.begin(); it != md.m_vDinner.end(); it++)
	{
		out << it->getName() << endl;
	}
	return out;
}

#endif //MEAL_DAY_H
