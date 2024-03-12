export module Knapsack_dynamic;
import ItemsHeap_dynamic;
import Item_dynamic;

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
	void PushItem(Item temp) {
		items.push_back(temp);
		SumOfItems(temp);
		WeightOfItems(temp);
	}
	void PrintItems() {
		std::cout << "Items:\n";
		for (int i = 0; i < items.size(); ++i) {
			items[i].PrintParametres();
		}
	}
public:
	int GetPiceOfKnapsack() {
		return price;
	}
	int GetSizeOfHeapOnFloor() {
		return heap.GetSizeHeap();
	}
	void SetMaxWeight() {
		std::cout << "Enter max weight: ";
		std::cin >> max_weight;
		std::cout << std::endl;
	}
	void PrintParametresKnapsack() {
		std::cout << "Backpack parametres:\n" << "\tPrice: " << price << " " << "\n\tWeight: " << weight << " " << "\n\tMax weight: " << max_weight << std::endl;
		PrintItems();
	}
	void AddItemOnFloor() {
		heap.AddItemInHeap();
	}
	void AddItemInKnapsack() {
		Knapsack** kp = new Knapsack*[heap.GetSizeHeap()+1];
		Knapsack temp,temp2;
		int max_price=0,i_mx=0,j_mx=0;
		for (int i = 0; i < max_weight+1; ++i) {
			kp[i] = new Knapsack[max_weight+1];
		}
		for (int i = 0; i < heap.GetSizeHeap() + 1; ++i) {
			for (int j = 0; j < max_weight + 1; ++j) {
				if (i == 0 || j == 0)
				{
					kp[i][j] = temp;
				}
				else if (i == 1) {
					if (heap.getItem(0).GetItemWeight() <= j)
						kp[1][j].PushItem(heap.getItem(0));
					else
						kp[1][j] = temp;
				}
				else
				{
					if (heap.getItem(i - 1).GetItemWeight() > j)
						kp[i][j] = kp[i - 1][j];
					else
					{
						int newPrice = heap.getItem(i-1).GetItemPrice()+kp[i-1][j-heap.getItem(i-1).GetItemWeight()].GetPiceOfKnapsack();
						if (kp[i - 1][j].GetPiceOfKnapsack() > newPrice)
							kp[i][j] = kp[i - 1][j];
						else
						{
							
							kp[i][j] = kp[i - 1][j - heap.getItem(i - 1).GetItemWeight()];
							kp[i][j].PushItem(heap.getItem(i - 1));
							temp2 = kp[i][j];
						}
					}
				}
			}	
		}
		for (int i = 0; i < temp2.items.size(); ++i) {
			PushItem(temp2.items[i]);
		}
		std::cout << "Complete task" << std::endl;
	}
};