#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;//rodents�� �ּҰ��� rats�� �����Ѵ�.
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;//rats�� ���ÿ� ����ȴ�.
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "rats�� �ּ� = " << &rats;
	cout << ", rodents�� �ּ� = " << &rodents << endl;
	return 0;
}