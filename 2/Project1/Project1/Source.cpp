import <iostream>;
import <array>;
import <vector>;
import <sstream>;
using namespace std;

int main() {
	array<int, 200> ar;
	pair <int, double> p;
	p.first;
	p.second;
	pair <int, int> p2;
	p2 = p;
	vector <int> v;
	//resize - ������ ������, ����� �������� ����� ��������� ���-�� ��������� 2 ����������, assign - �������������� ����������� ��� �������, � ������� ��� ��������� ��������
	for (int & item : v)
		cin >> item;
	for (const int item : v)
		cout << item;
	return 0;
}