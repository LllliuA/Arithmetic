#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
using namespace std;

int main()
{
	int x, y, z, m;
	srand(time(NULL));
	cout << "Сѧ����������Ŀ" << endl;
	int p = 0;
	x = rand() % 10;
	y = rand() % 10;
	z = rand() % 4;
	switch (z)
		{
		case 0:
			cout << x << "+" << y << "=" << endl;
			p = x + y;
			break;
		case 1:
			cout << x << "-" << y << "=" << endl;
			p = x - y;
			break;
		case 2:
			cout << x << "*" << y << "=" << endl;
			p = x*y;
			break;
		case 3:
			if (y == 0)
			{
				m = x;
				x = y;
				y = m;
			}
			cout << x << "/" << y << "=" << endl;
			p = x / y;
			break;
		default:
			break;
		}
	cout << "��������Ĵ�(����5���ӵ�ʱ������):" << endl;
	int time = 5000, q = (1 << 31) - 1;
	while (time>0)
	{
		Sleep(10);
		time -= 10;
		if (_kbhit())
		{
			cin >> q;
			break;
		}
	}
	if (time <= 0)
		cout << "����ʱ�䵽��" << endl;
		if (q == p)
			cout << "��ȷ��" << endl;
		else
			cout << "����" << endl;
		system("pause");
	
	
	return 0;
}