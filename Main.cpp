#include <iostream>
using namespace std;

int Bigger(int a, int b)
{
	return (a > b) ? a : b;
}

int Triple(int a, int b, int c)
{
	return (a > b) ? a : b;
	return (a > c) ? a : c;
	return (b > c) ? b : c;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "�μ��� ���Ͻÿ�>>";
	cin >> a >> b;
	cout << Bigger(a, b) << endl;

	cout << "�� ���� ���Ͻÿ�>>";
	cin >> a >> b >> c;
	cout << Triple(a, b, c) << endl;

}