#ifndef INGREDIENT_H
#define INGREDIENT_H

#include<string>

using namespace std;

class Ingredient
{
private:
	string 	m_szName;
	string 	m_szUnits;
	int	m_iCount;
public:	

	Ingredient(string szName, int iCount, string szUnits)
	{
		m_szName = szName;
		m_iCount = iCount;
		m_szUnits = szUnits;
	}

	string 	getName() { return m_szName; }
	string 	getUnits() { return m_szUnits; }
	int 	getCount() { return m_iCount; }
};

#endif //INGREDIENT_H
