#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


typedef struct Fraction {
	int numerator;
	int denominator;
	void printFrac() {}

}Frac;

void printFrac(Frac *a) {
	cout << "�м��� ���ڴ� " << (*a).numerator << " �̰� " << " �м��� �и�� " << (*a).denominator << " �Դϴ�." << endl;
}

int gcd(int a, int b)           //�ִ� ����� ���ϴ� �Լ�    
{
	int c;
	while (b != 0) {

		c = a % b;

		a = b;
		b = c;

	}

	return a;
}   

void reduce(Frac *a)         // ����ϴ� �Լ�
{
	int gcd_result = gcd((*a).numerator, (*a).denominator);

	int numerator_result = (*a).numerator / gcd_result;     // �ִ������� ����� ���� ����
	int denominator_result = (*a).denominator / gcd_result;    // �ִ������� ����� ���� �и�

	(*a).numerator = numerator_result;
	(*a).denominator = denominator_result;
}

Frac add(Frac a, Frac b)       // �м����� ���ϴ� �Լ�   
{
	Frac* c={};
	(*c).numerator = a.numerator * b.denominator + a.denominator * b.numerator;
	(*c).denominator = a.denominator * b.denominator;
	void reduce(Frac * c);

	return *c;
}

Frac minus(Frac a, Frac b)        //�м����� ���� �Լ�
{
	Frac* c={};
	(*c).numerator = a.numerator * b.denominator - a.denominator * b.numerator;
	(*c).denominator = a.denominator * b.denominator;
	void reduce(Frac * c);

	return *c;
}

Frac multi(Frac a, Frac b)       //�м����� ���ϴ� �Լ�
{
	Frac* c={};
	(*c).numerator = a.numerator * b.numerator;
	(*c).denominator = a.denominator * b.denominator;
	void reduce(Frac *c);
	return  * c;
}

Frac div(Frac a, Frac b)          //�м����� ������ �Լ�
{
	Frac* c={};
	(*c).numerator = a.numerator * b.denominator;
	(*c).denominator = a.denominator * b.numerator;
	void reduce(Frac * c);

	return *c;
}

Frac scan(Frac *array)       // �ֵ��� �迭�� ���� ��ȯ�ϴ� �Լ�
{
	Frac *arrayB={};
	int i;
	for (i = 0; i < 5; i++)
	{
		arrayB[i] = array[i];
	}

	return *arrayB;
}

Frac sum(Frac *array, Frac *arrayb)
{
	int i;
	int k;
	int n = 0;
	Frac* f = {};
	for (k = 0; ;k++)
	{
		if (array[k].numerator != 0)
			n++;
		else
			break;
	}
	Frac* summ = {};
	Frac *c={};
	for (i = 0; i < n; i++)
	{
		c[i] = multi( array[i], arrayb[i]);
	}

	summ[0] = add(c[0], c[1]);

	for (i = 2; i < n; i++)
	{
		summ[i - 1] = add(summ[i - 1], c[i]);
	}

	(*f).numerator = summ[n - 2].numerator;
	(*f).denominator = summ[n - 2].denominator;

	cout << "�м��� ���ڴ� " << (*f).numerator << " �̰� �м��� �и�� " << (*f).denominator << " �Դϴ�. " << endl;

	return *f;
}

int main()
{
	int i;
	Frac arrayA[4];
	Frac arrayB[4];

	for (i = 0; i < 5; i++)
	{
		cout << "������ ���� �Է��Ͻÿ�: ";
		cin >> arrayA[i].numerator;

		cout << "�и��� ���� �Է��Ͻÿ�: ";
		cin >> arrayA[i].denominator;
	}

	Frac sum(Frac * arrayA, Frac scan(Frac * arrayA));
}