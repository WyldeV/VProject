// ConsoleApplicationTest.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream> 
#include <vector>

using namespace std;

void Reserve(char *str)
{
	int i = 0;
	char tmp =0;
	size_t j = strlen(str) - 1;
	for (int i = 0; i < j; i++,j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

int add(int a, int b)
{
	return a + b;
	
}

int mult(int a, int b)
{
	return a*b;
}

int main(void) {
	int a = 5;
	int *ptr = &a;                 //��������
	cout << "a =" << a<<endl;
	cout << "&a ="<< &a << endl;
	*ptr = 50;
	cout << "ptr =" << ptr << endl;
	cout << "a =" << a << endl;

	int array[] = { 2,4,6,8 };    //Vector����
	vector <int> k;
	k.assign(array, array + 4);

	for (int i = 0; i < 4; i++)
	{
		cout << "i=" << i << " k=" << k[i] << endl;
	}

	char str2[] = "Good";
	//cin >> str;
	char *reverse = _strrev(_strdup(str2)); //�r����� ��k1
	puts(reverse);

	char str[] = "987654321";   //�r����� ��k2
	Reserve(str);
	puts(str);

	//int(*op) (int a, int b);             //��ƫ���
	typedef int(*fp)(int,int);
	fp op;
	op = add;
	cout << "Add(3,5)=" << op(3, 5) << endl;
	op = mult;
	cout << "Mult(9,6)=" << op(9, 6) << endl;

	/*** C �w���w�q���� ***/
	cout << __DATE__ << endl;   
	cout << __FILE__ << endl;
//	cout << _tutime32 << endl;
	

	int b = 0;
	for (b ; b < 20; ++b)                //GoTo�Ϊk�A�Ω�C�ҥ~�B�z
	{
		if( b = 20 ) goto Test;
	}
	
Test:
	cout << "b=" << b << endl;

	//cout << "\007" << endl;             //�ͤ@�u�n
	cin.get();
	//getchar();
	//system("pause");
	
	return 0;
	
}

