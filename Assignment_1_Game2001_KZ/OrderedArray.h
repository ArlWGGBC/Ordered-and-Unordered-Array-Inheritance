#pragma once
#include <cassert>
#include "Array.h"
template<class T>
class OrderedArray : public Array <T>
{
public:
	// Constructor
	OrderedArray(int size, int growBy = 1):
	Array<T>(size, growBy)
	{
	
	}
	// Destructor
	~OrderedArray()
	{
		if (this->m_array != nullptr)
		{
			delete[] this->m_array;
			this->m_array = nullptr;
		}
	}
	// Insertion -- Big-O = O(N)
	int push(T val)
	{
		assert(this->m_array != nullptr);
	
		if (this->m_numElements >= this->m_maxSize)
		{

			this->Expand();
		}

		int i, k;	// i - Index to be inserted. k - Used for shifting purposes
		// Step 1: Find the index to insert val
		for (i = 0; i < this->m_numElements; i++)
		{

			if(this->m_array [i] == val)
			{
				std::cout << "Duplicate Data not allowed";
				return -1;
			}
			if (this->m_array[i] > val)
			{
				break;
			}
		}
		
		// Step 2: Shift everything to the right of the index(i) forward by one. Work backwards
		for (k = this->m_numElements; k > i; k--)
		{
			this->m_array[k] = this->m_array[k - 1];
		}

		// Step 3: Insert val into the array at index
		this->m_array[i] = val;

		this->m_numElements++;

		return i;
	}
	// Searching
	// Binary Search
	int search(T searchKey)
	{
		// Call to binary search recursive function
		// Binary Search: searchKey, initial lowerBound, initial upperBound
		return this->binarySearch(searchKey, 0, this->m_numElements - 1);
	}

private:
	

};