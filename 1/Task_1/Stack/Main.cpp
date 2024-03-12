import <iostream>;
import Contacts_list;

int main() {
	int choice;
	Contacts_list my_Contacts;
	do {
		std::cout << "1.Check's empty is list \n";
		std::cout << "2.Show first contact in list \n";
		std::cout << "3.Delete first contact in list \n";
		std::cout << "4.Add contact on first \n";
		std::cout << "5.Get size \n";
		std::cout << "6.Show contact list \n";
		std::cout << "7.Replace by index \n";
		std::cout << "0.Exit" << std::endl;
		std::cin >> choice;
		switch (choice) {
		case 1:
			my_Contacts.is_empty() ? std::cout << "Empty list\n" : std::cout << "No empty list" << std::endl;
			break;
		case 2:
			my_Contacts.check_top();
			break;
		case 3:
			my_Contacts.pop();
			break;
		case 4:
			my_Contacts.push();
			break;
		case 5:
			my_Contacts.get_size();
			break;
		case 6:
			my_Contacts.display();
			break;
		case 7:
			my_Contacts.replace();
			break;
		}
	} while (choice != 0);
	return 0;
}