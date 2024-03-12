export module ItemsHeap;
import Item;
import <vector>;

export class ItemsHeap {
private:
	bool sorted = false;
	std::vector <Item> itemsHeap;
	void m_swap(int i_1, int i_2) {
		Item tmp = itemsHeap[i_1];
		itemsHeap[i_1] = itemsHeap[i_2];
		itemsHeap[i_2] = tmp;
	}
	void sort_items() {
		int i_mx = 0;
		for (int i = 0; i < itemsHeap.size(); ++i) {
			i_mx = i;
			for (int j = i + 1; j < itemsHeap.size(); ++j) {
				if (itemsHeap[j].GetPriceOfWeight() > itemsHeap[i_mx].GetPriceOfWeight()) {
					i_mx = j;
				}
			}
			if (i != i_mx)
				m_swap(i, i_mx);
		}
	}
public:
	int GetSizeHeap() {
		return itemsHeap.size();
	}
	void AddItemInHeap() {
		Item newItem;
		newItem.SetParametresOfItem();
		itemsHeap.push_back(newItem);
	}
	Item getItem() {
		if (!sorted) {
			sort_items();
			sorted = true;
		}
		Item temp = itemsHeap[0];
		itemsHeap.erase(itemsHeap.begin());
		return temp;
	}
};