// Linear Searching 
#include <iostream>
using namespace std;

int SearchList(const int[], int, int); // int SearchList = creating the function later used (const int[], int, int) assigning the value types that will be used later in the function
const int SIZE = 5; // size of the array 

int main()
{
	int test_grades[SIZE] = { 67, 88, 91, 24, 100 };
	int results;

	results = SearchList(test_grades, SIZE, 100); // results is = to the SearchList function

	if (results == -1)
	{
		cout << "No one earned a 100 on the test. Study harder " << endl;
	}
	else
	{
		cout << "Congrats! Whoever took test "; cout << results + 1; /*need the + 1 because index starts at 0*/  cout << " received a 100 on the test" << endl;
	}
	return 0;
}

int SearchList(const int list[], int numElems, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < numElems && !found)
	{
		if (list[index] == value)
		{
			position = index;
			found = true;
		}
		else
		{
			index++;
		}
	}
	return position;
}