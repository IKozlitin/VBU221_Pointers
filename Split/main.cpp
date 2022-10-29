#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(short e_arr[], const int even);

void Print(int arr[], const int n);
void Print(short e_arr[], const int even);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	delete[] arr;

	short even;
	cout << "¬ведите размер массива: "; cin >> even;
	short* e_arr = new short[even];

	FillRand(e_arr, even);
	Print(e_arr, even);
	for (int i = 0; i < even; i++)
	{
		*(e_arr + i) = rand() % 100;
	}
	for (int i = 0; i < even; i++)
	{
		if (e_arr[i] / 2)
		{
			cout << e_arr[i] << "\t";
		}
	}
	cout << endl;
	delete[] e_arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void FillRand(short e_arr[], const int even)
{
	for (int i = 0; i < even; i++)
	{
		*(e_arr + i) = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(short e_arr[], const int even)
{
	for (int i = 0; i < even; i++)
	{
		if (e_arr[i] / 2)
		{
			cout << e_arr[i] << "\t";
		}
	}
	cout << endl;
}