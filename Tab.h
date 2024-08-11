#pragma once
#include <iostream>
#include <vector>


template<typename T>
class Tab
{
public:
	Tab(int rows = 1, int cols = 1)
	{
		Rows = rows;
		Cols = cols;

		if (rows > 0)
		{
			Arr = new T * [Rows];
			for (int i = 0; i < Rows; i++)
			{
				Arr[i] = new T[Cols];
			}
		}
		else
		{
			std::cout << "Error: Rows = 0";
			throw rows;
		}
	}

	~Tab()
	{
		for (int i = 0; i < Rows; i++)
		{
			delete[] Arr[i];
		}
		delete[] Arr;
	}

	int Size() const
	{
		return Cols * Rows;
	}

	T* operator[](int row)
	{
		return Arr[row];
	}

	const T* operator[](int row) const
	{
		return Arr[row];
	}


private:
	int Rows;
	int Cols;

	T** Arr;
};