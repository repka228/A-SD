import <iostream>;
import Knapsack_dynamic;

void main() {
	Knapsack backpack;
	backpack.SetMaxWeight();
	int choice;
	do {
		std::cout << "1. Add item in heap" << std::endl;
		std::cout << "2. Add items in backpack" << std::endl;
		std::cout << "0. Exit" << std::endl;
		std::cin >> choice;
		switch (choice) {
		case 1:
			backpack.AddItemOnFloor();
			break;
		case 2:
			if (backpack.GetSizeOfHeapOnFloor() > 0) {
				backpack.AddItemInKnapsack();
			}
			else
				std::cout << "Empty heap" << std::endl;
			break;

		}
		if (choice == 2 || choice == 0)
			break;
	} while (true);
	if (choice == 2) {
		backpack.PrintParametresKnapsack();
	}
}