export module Knapsack;
import ItemsHeap;
import Item;

export class Knapsack {
private:
	int max_weight;
	int weight = 0;
	int price = 0;
	ItemsHeap heap;
	std::vector <Item> items;
	void SumOfItems(Item temp) {
		price += temp.GetItemPrice();
	}
	void WeightOfItems(Item temp) {
		weight += temp.GetItemWeight();
	}
public:
	int GetSizeOfHeapOnFloor() {
		return heap.GetSizeHeap();
	}
	void SetMaxWeight() {
		std::cout << "Enter max weight: ";
		std::cin >> max_weight;
		std::cout << std::endl;
	}
	void PrintItems() {
		std::cout << "Items:\n";
		for (int i = 0; i < items.size(); ++i) {
			items[i].PrintParametres();
		}
	}
	void PrintParametresKnapsack() {
		std::cout <<"Backpack parametres:\n" << "\tPrice: " << price << " " << "\n\tWeight: " << weight << " " << "\n\tMax weight: " << max_weight << std::endl;
	}
	void AddItemOnFloor() {
		heap.AddItemInHeap();
	}
	void AddItemInKnapsack() {
		while (heap.GetSizeHeap() > 0) {
			Item temp = heap.getItem();
			if (temp.GetItemWeight() + weight <= max_weight)
			{
				items.push_back(temp);
				SumOfItems(temp);
				WeightOfItems(temp);
			}
			else
				break;
		}
		std::cout << "Complete task" << std::endl;
	}
};