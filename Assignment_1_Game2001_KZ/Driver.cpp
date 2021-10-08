#include <iostream>
//#include "UnorderedArray.h"
#include "OrderedArray.h"
#include "UnorderedArray.h"

using namespace std;

int main()
{
	OrderedArray<int> array(3);

	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23);                 // 3 23 53 82 83
	array.push(82);

	array[2] = 112; // replace index 2 with 112

	array.pop(); // pop off 83
	array.remove(2); // remove 112

	cout << "Ordered array contents : ";

	for(int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

	cout << "Search for 23 was found at index: ";
	cout << array.search(23) << endl;
	array.push(66); 
	array.push(456); 
	array.push(345);
	array.push(878); 
	array.push(67); 
	array.push(416);
	array.push(325); 
	array.push(868); 
	
	cout << endl << endl;
		for(int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}



std::cout << "\n\n\n\n\n\n\n\n";


	UnorderedArray<int> uOArray(3);


	uOArray.push(3);
	uOArray.push(53);
	uOArray.push(83);
	uOArray.push(23);                 // 3 23 53 82 83t
	uOArray.push(82);

	uOArray[2] = 112; // replace index 2 with 112

	uOArray.pop(); // pop off 83
	uOArray.remove(2); // remove 112

	cout << "Unordered Array contents : ";

	for(int i = 0; i < uOArray.GetSize(); i++)
	{
		cout << uOArray[i] << " ";
	}

	cout << endl;

	cout << "Search for 23 was found at index: ";
	cout << uOArray.search(23) << endl;
	uOArray.push(66); 
	uOArray.push(456); 
	uOArray.push(345);
	uOArray.push(878); 
	uOArray.push(67); 
	uOArray.push(416);
	uOArray.push(325); 
	uOArray.push(868); 
	
	cout << endl << endl;
	for(int i = 0; i < uOArray.GetSize(); i++)
	{
		cout << uOArray[i] << " ";
	}
	return 0;
}