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
	double GetPriceOfWeight() {
		return price / (double)weight;
	}
	void PrintParametres() {
		std::cout << "\tName item: " << name << "\n\t\tWeight: " << weight << "\n\t\tPrice:" << price << std::endl;
	}
	void SetParametresOfItem() {
		std::cout << "Enter name of item: ";
		std::cin >> name;
		std::cout << std::endl;
		std::cout << "Enter weight of item: ";
		std::cin >> weight;
		std::cout << std::endl;
		std::cout << "Enter price of item: ";
		std::cin >> price;
		std::cout << std::endl;
	}
};