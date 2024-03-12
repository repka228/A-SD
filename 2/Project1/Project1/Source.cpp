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
	//resize - меняет размер, новые элементы можно заполнить чем-то указанным 2 аргументом, assign - гарантированно перезапишет все размеры, с памятью все одинаково работают
	for (int & item : v)
		cin >> item;
	for (const int item : v)
		cout << item;
	return 0;
}