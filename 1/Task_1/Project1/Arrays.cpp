#include <iostream>

__interface  IArray{
public:
	void virtual set_size(int n)=0;
	int virtual get_size()=0;
};

class Array : public IArray {
private:
	int size=0;

public:
	int* meta=nullptr;
	
	void IArray::set_size(int n) {
		meta = new int[n];
		size = n;
	}

	int IArray::get_size() {
		return size;
	}
};

int main() {
	Array arr;
	arr.set_size(15);
	for (int i = 0; i < 15; ++i) {
		arr.meta[i] = i;
	}
	for (int i = 0; i < 15; ++i) {
		std::cout << arr.meta[i] << " ";
	}
	return 0;
}
