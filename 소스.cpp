#include <iostream>
#include <time.h>
using namespace std;

//int main() {
//	bool b;
//	b = (1 == 2);
//
//	cout << std::boolalpha;
//	cout << b << endl;
//
//	return 0;
//}

//int main() {
//
//	int x, y;
//	cout << "x���� �Է��Ͻÿ�: ";
//	cin >> x;
//	cout << "y���� �Է��Ͻÿ�: ";
//	cin >> y;
//
//	if (x > y)
//		cout << "x�� y���� Ů�ϴ�.";
//	else if (y > x)
//		cout << "y�� x���� Ů�ϴ�.";
//	else
//		cout << "���� �� �Դϴ�.";
//	
//	return 0;
//}

//int main() {
//
//	int age;
//	cout << "���̸� �Է��Ͻÿ�: ";
//	cin >> age;
//
//	if (age >= 20)
//		cout << "�����Դϴ�.";
//	else if (age < 12)
//		cout << "����Դϴ�.";
//	else
//		cout << "û�ҳ��Դϴ�.";
//
//	return 0;
//}

//int main() {
//
//	char secret = 'g';
//	char user;
//
//	    cout << "����ڵ带 ���纸����: ";
//		cin >> user;
//
//		if (user > secret)
//			cout << user << "�տ� ����" << endl;
//		else if (user < secret)
//			cout << user << "�ڿ� ����" << endl;
//		else
//			cout << "�����Դϴ�.";
//	
//}

//int main() {
//
//	int i;
//
//	for (i = 10; i >= 0; i--)
//		cout << i << " " ;
//
//	cout << "�߻� !";
//}

//int main() {
//
//	int num;
//	cout << "������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: ";
//	cin >> num;
//	int i;
//	
//	for (i = 1; i <= num; i++)
//	{
//		cout << num << " + " << i << " = " << num + i<<endl;
//	}
//
//	return 0;
//}

//int main() {
//
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//		sum += i;
//	cout << "1���� 10������ ������ �� = " << sum;
//
//	return 0;
//}

//int main() {
//	int num;
//	cout << "������ �Է��Ͻÿ�: ";
//	cin >> num;
//	int  i;
//	int s = 1;
//	for (i = 1; i <= num; i++)
//	{
//		s *= i;
//	}
//
//	cout << num << "!�� " << s << "�Դϴ�.";
//
//	return 0;
//}

//int main() {
//	char word;
//	int apple = 0;
//	int mango = 0;
//	cout << "�����ڸ� �Է��ϰ� ��Ʈ��-Z�� ġ����"<<endl;
//
//	while (1)
//	{
//		cin >> word;
//
//		if ((word == 'a') || (word == 'e') || (word == 'o') || (word == 'i') || (word == 'u'))
//			apple++;
//		else 
//			mango++;
//	}
//
//	cout << "����: " << apple<<endl;
//	cout << "����: " << mango;
//
//	return 0;
//}

//int main() 
//{
//	int apple = 0, mango = 0;
//	char word;
//
//	cout << "�����ڸ� �Է��ϰ� ��Ʈ�� - Z�� ġ���� : " << endl;
//	while (cin >> word) {
//		switch (word)
//		{
//		case 'a':
//		case'e':
//		case'o':
//		case'i':
//		case'u':
//			apple++;
//			break;
//		default:
//			mango++;
//			break;
//		}
//	}
//
//	cout << "����: " << apple << endl;
//	cout << "����: " << mango << endl;
//
//	return 0;
//}

//int main() {
//	int user;
//	int answer = rand()%100;
//	int i;
//
//	for (i = 1;; i++)
//	{
//		cout << "������ �����Ͽ� ���ÿ�: ";
//		cin >> user;
//
//		if (user > answer)
//			cout << "������ ������ �����ϴ�."<<endl;
//		else if (user < answer)
//			cout << "������ ������ �����ϴ�."<<endl;
//		else
//		{
//			cout << "�����մϴ�. �õ� Ƚ�� = " << i << endl;
//			break;
//		}
//	}
//}

//int main() {
//
//	srand(time(NULL));
//
//	int num = rand() % 100;
//	int num2 = rand() % 100;
//	int num3 = rand() % 4 + 1;
//	char r;
//	int result;
//	int user;
//
//	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
//	cout << num;
//	if (num3 == 1)
//	{
//		r = '+';
//		result = num + num2;
//	}
//	else if (num3 == 2)
//	{
//		r = '-';
//		result = num - num2;
//	}
//	else if (num3 == 3)
//	{
//		r = '*';
//		result = num * num2;
//	}
//	else
//	{
//		r = '/';
//		result = num / num2;
//	}
//	cout << r << num2 << "=";
//	cin >> user;
//
//	if (user == result)
//		cout << "�¾ҽ��ϴ�.";
//	else
//		cout << "Ʋ�Ƚ��ϴ�.";
//
//	return 0;
//}

//int main() {
//
//	srand(time(NULL));
//	int i;
//	int list[10];
//	for (i = 0; i < 10; i++)
//	{
//		list[i] = rand() % 100 + 1;
//	}
//	int large = list[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (large < list[i])
//		{
//			large = list[i];
//		}
//	}
//	for (int k : list)
//	{
//		cout << k << " ";
//	}
//	cout << endl<<"�ִ밪= " << large << endl;
//	return 0;
//}

//int main() {
//
//	int list[9][9];
//	int i, k;
//
//	for (i = 0; i < 9; i++)
//		list[i][0] = i+1;
//
//	for (i = 0; i < 9; i++)
//		for (k = 0; k < 9; k++)
//		{
//			list[i][k] = list[i][0] * (k + 1);
//		}
//
//	for (i = 0; i < 9; i++)
//	{
//		for (k = 0; k < 9; k++)
//		{
//			cout << list[i][k] << ", ";
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}



