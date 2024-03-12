export module IContacts;

export class IContacts {
	bool virtual is_empty() = 0;
	void virtual check_top() = 0;
	void virtual pop() = 0;
	void virtual push() = 0;
	void virtual get_size() = 0;
	void virtual display() = 0;
	void virtual replace() = 0;
};