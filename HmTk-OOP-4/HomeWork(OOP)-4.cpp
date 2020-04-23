#include "Header.h"
#include "PhoneBook.h"

int main()
{
	const int size = 3;
	PhoneBook Arr[size];
	int indhold;
	std::string FindName;
	std::ofstream out;


	do {
		Arr->ShowActions();

		switch (Arr->GetChoice()) {
		case 1:
			while (true) {
				std::cout << "Select Num of page (0,1,2) in Book" << std::endl;
				std::cin >> indhold;
				std::cout << std::endl;
				if (indhold == 0 || indhold == 1 || indhold == 2)
					break;
			}

			Arr[indhold].AddContact();
			break;
		case 2:
			while (true) {
				std::cout << "Select Num of page (0,1,2) in Book" << std::endl;
				std::cin >> indhold;
				std::cout << std::endl;
				if (indhold == 0 || indhold == 1 || indhold == 2)
					break;
			}
			Arr[indhold].DeleteContact();
			break;
		case 3:
			for (int i = 0; i < size; i++) {
				Arr[i].ShowValues();
			}
			break;
		case 4: {
			std::cout << "Enter Name to find:" << std::endl;
			std::cin >> FindName;

			bool res = false;

			for (int i = 0; i < size; i++) {
				res = Arr[i].Check(FindName);
				if (res == true) {
					std::cout << "Contact is found" << std::endl;
					Arr[i].ShowValues();
					break;
				}
			}

			std::cout << "Contact Not Found: " << std::endl;
			break;
		}
		case 5:
			//std::remove("Hello.txt");
			out.open("Hello.txt", std::ios::trunc);
			for (int i = 0; i < size; i++) {
				Arr[i].WriteFile();
			}
			break;
		case 6:
			Arr->ReadFromFile();
			break;
		case 7: return(0);
		default: {
			std::cout << "Action is wrong" << std::endl; }
		}

	} while (true);

}