#include"myStack.h"
int main() {
	myStack<int> obj1(5);
	int value, valuee;
	int choice = 0;
	do {
		cout << "Menu:\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Top\n";
		cout << "4. Display\n";
		cout << "5. Check if empty\n";
		cout << "6. Check if full\n";
		cout << "7. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			obj1.push(1);
			obj1.push(2);
			obj1.push(3);
			obj1.push(4);
			obj1.push(5);
			break;
		case 2:
			value = obj1.pop();
			if (!obj1.isEmpty()) // Only print if not empty
				cout << "The popped value is: " << value << endl;
			break;
		case 3:
			valuee = obj1.top();
			if (!obj1.isEmpty()) // Only print if not empty
				cout << "The top value is: " << valuee << endl;
			break;
		case 4:
			obj1.display();
			break;
		case 5:
			cout << (obj1.isEmpty() ? "Stack is empty." : "Stack is not empty.")
				<< endl;
			break;
		case 6:
			cout << (obj1.isFull() ? "Stack is full." : "Stack is not full.") <<
				endl;
			break;
		case 7:
			cout << "Exiting..." << endl;
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
		}
	} while (choice != 7);
	return 0;
}