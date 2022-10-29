#include<iostream>
using namespace std;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	cout << "Hello Pointers" << endl;
	int a = 2;
	int* pa = &a;
	cout << a << endl; //¬ывод значени€ переменной 'a' на экран
	cout << &a << endl; //¬з€тие адреса переменной 'a' пр€мо при выводе
	cout << pa << endl; //¬ывод на экран адреса переменной 'a', хран€щегос€ в указателе 'pa'
	cout << *pa << endl; //–азыменование указател€ 'pa' и получение значени€ по адресу

	int* pb;
	int b = 3;
	pb = &b;

	//int - int
	//int* - указатель на int
	//double - double
	//double* - указатель на double  
#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}