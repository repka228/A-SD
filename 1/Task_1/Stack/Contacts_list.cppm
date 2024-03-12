import <iostream>;
import Contact;
import IContacts;
export module Contacts_list;

export class Contacts_list:IContacts {
public:
	bool IContacts::is_empty() {
		if (length == 0)
			return true;
		else
			return false;
	}

	void IContacts::check_top() {
		if (!is_empty())
		{
			std::cout << arrayContact[0].firstName << " ";
			std::cout << arrayContact[0].lastName << " ";
			std::cout << arrayContact[0].number << std::endl;
		}
		else
			std::cout << "Empty contact list" << std::endl;
	}

	void IContacts::pop() {
		if (!is_empty()) {
			for (int i = 1; i < length; ++i) {
				arrayContact[i - 1] = arrayContact[i];
			}
			--length;
		}
		else
			std::cout << "Empty contact list" << std::endl;
	}

	void IContacts::push() {
		++length;
		for (int i = length; i > 0; --i) {
			arrayContact[i] = arrayContact[i - 1];
		}
		std::cout << "Cin first name\n";
		std::cin >> arrayContact[0].firstName;
		std::cout << "Cin last name\n";
		std::cin >> arrayContact[0].lastName;
		std::cout << "Cin number\n";
		std::cin >> arrayContact[0].number;
	}

	void IContacts::get_size() {
		std::cout << length << std::endl;
	}


	void IContacts::display() {
		if (!is_empty()) {
			for (int i = 0; i < length; ++i) {
				std::cout << i + 1 << ") " << arrayContact[i].firstName << " ";
				std::cout << " " << arrayContact[i].lastName << " ";
				std::cout << " " << arrayContact[i].number << std::endl;
			}
		}
		else
			std::cout << "Empty list" << std::endl;
	}

	void IContacts::replace() {
		if (length == 0)
		{
			std::cout << "Empty list" << std::endl;
			return;
		}
		std::cout << "Cin number of contact\n";
		int n;
		std::cin >> n;
		if (n > length || n < 0)
			std::cout << "Wrong number of contact\n";
		else {
			std::cout << "Cin first name\n";
			std::cin >> arrayContact[n - 1].firstName;
			std::cout << "Cin last name\n";
			std::cin >> arrayContact[n - 1].lastName;
			std::cout << "Cin number\n";
			std::cin >> arrayContact[n - 1].number;
		}
	}

private:
	int length = 0;
	Contact* arrayContact = new Contact[1000];
};