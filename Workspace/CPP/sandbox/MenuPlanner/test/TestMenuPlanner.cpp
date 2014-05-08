#include <iostream>
#include <string>

#include "TestRecipe.h"
#include "TestGroceryList.h"

using namespace std;

int main()
{
	testRecipe();
	testGroceryList(getRecipe());

	return 0;
}
