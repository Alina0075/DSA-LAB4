#include"MyStack2.h"
int main() {
	myStack<string> obj1(4);
	int choice;
	do {
		cout << "Menu: " << endl;
		cout << "Enter 1 to push elments in stack." << endl;
		cout << "Enter 2 to reverse stack" << endl;
		cout << "Enter 3 to display" << endl;
		cout << "Enter 0 to exit" << endl;
		cout << "Enter choice: " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
		{
			obj1.push("Book A");
			obj1.push("Book B");
			obj1.push("Book C");
			obj1.push("book D");
			break;
		}
		case 2: {
			obj1.reverse();
				break;
		}
		case 3:
		{
			obj1.display();
			break;
		}
		}
	} while (choice != 0);
	return 0;
}