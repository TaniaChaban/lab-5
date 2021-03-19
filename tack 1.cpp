#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

void bubbleSort(int*, int); 

int main(int argc, char* argv[])
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int i;
	cout << "Enter m: ";
	int m_number; 
	cin >> m_number;
	cout << "Enter n: ";
	int n_number; 
	cin >> n_number;
	int* array_m = new int[m_number]; 
	for (int i = 0; i < m_number; i++)
	{
		array_m[i] = rand() % 100 - 200; 
		cout << setw(2) << array_m[i] << "  "; 
	}
	cout << "\n\n";
	int* array_n = new int[n_number]; 
	for (int counter = 0; counter < n_number; counter++)
	{
		array_n[counter] = rand() % 10 + 05; 
		cout << setw(2) << array_n[counter] << "  ";
	}
	cout << "\n\n";
	int x;
	x = m_number + n_number;
	int* array_x = new int[x];
	for (int i = 0; i < m_number; i++)
	{
		array_x[i] = array_m[i];
	}
	for (int i = m_number; i < x; i++)
	{
		array_x[i] = array_n[i - m_number];
	}

	for (int i = 0; i < x; i++)
	{
		cout << array_x[i] << " ";
	}
	cout << "\n\n" << endl;
	bubbleSort(array_x, x);

	for (int i = 0; i < x; i++)
	{
		cout << setw(2) << array_x[i] << "  "; 
	}
	cout << "\n";

	system("pause");
	return 0;
}

void bubbleSort(int* arrayPtr, int length_array) 
{
	int temp = 0; 
	bool exit = false; 

	while (!exit) 
	{
		exit = true;
		for (int i = 0; i < (length_array - 1); i++) 
		  
			if (arrayPtr[i] > arrayPtr[i + 1]) 
			{
				
				temp = arrayPtr[i];
				arrayPtr[i] = arrayPtr[i + 1];
				arrayPtr[i + 1] = temp;
				exit = false; 
			}
	}
}

