#include<iostream>
const int ArSize = 80;
char* left(const char* str, int n = 1);
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "���ڿ��� �Է��Ͻʽÿ�:\n";
	cin.get(sample, ArSize);
	char* ps = left(sample, 5);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[]ps;
	return 0;
}
char* left(const char* str, int n)//nũ���̻��� ���ڸ� ������ ��ȯ�ϴ� �Լ�
{
	if (n <= 0)
		n = 2;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}