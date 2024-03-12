export module Item;
import <string>;
import <iostream>;

export class Item{
private:
	std::string name;
	int weight;
	int price;
public:

	int GetItemWeight() {
		return weight;
	}
	int GetItemPrice() {
		return price;
	}
	std::string GetName() {
		return name;
	}
	void PrintParametres() {
		std::cout << "Name: " << name << " " << "Weight: " << weight << " " << "Price:" << price << std::endl;
	}
	void SetParametresOfItem() {
		std::cout << "Enter name of item" << std::endl;
		std::cin >> name;
		std::cout << "Enter weight of item" << std::endl;
		std::cin >> weight;
		std::cout << "Enter price of item" << std::endl;
		std::cin >> price;
	}
	double GetPriceOfWeight() {
		return price / (double)weight;
	}
};