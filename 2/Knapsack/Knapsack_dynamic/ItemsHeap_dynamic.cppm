export module ItemsHeap_dynamic;
import Item_dynamic;
import <vector>;

export class ItemsHeap {
private:
	std::vector <Item> itemsHeap;
public:
	int GetSizeHeap() {
		return itemsHeap.size();
	}
	void AddItemInHeap() {
		Item newItem;
		newItem.SetParametresOfItem();
		itemsHeap.push_back(newItem);
	}
	Item getItem(int i) {
		return itemsHeap[i];
	}
};