#include<iostream>
void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);
int main()
{
	using namespace std;
	int wallet1 = 3000;
	int wallet2 = 3500;
	cout << "���� 1 = " << wallet1 << "��";
	cout << "���� 2 = " << wallet2 << "��\n";
	cout << "������ �̿��Ͽ� ������� ��ȯ:\n";
	swapr(wallet1, wallet2);//���������� ��ȯ
	cout << "���� 1 = " << wallet1 << "��";
	cout << ",���� 2 = " << wallet2 << "��\n";
	cout << "�����͸� �̿��Ͽ� ������� �ٽ� ��ȯ:\n";
	swapp(&wallet1, &wallet2);//������ �ּҸ� ���ڷ� �Ѱܼ� ������ �ּҿ��ִ� ���� ��ȯ
	cout << "���� 1 = " << wallet1 << "��";
	cout << ", ���� 2 = " << wallet2 << "��\n";
	cout << "������ �����Ͽ� ���뱳ȯ �õ�:\n";
	swapv(wallet1, wallet2);
	cout << "���� 1 = " << wallet1 << "��";
	cout << ",���� 2 = " << wallet2 << "��\n";
	return 0;
}
void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* p, int* q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}