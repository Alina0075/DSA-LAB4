#include"MyStack3.h"
bool bracket_check(const string& expression) {
	myStack<char> stack(expression.size());
	for (char ch : expression) {
		if (ch == '(' || ch == '[' || ch == '{') {
			stack.push(ch);
		}
		else if (ch == ')' || ch == ']' || ch == '}') {
			if (stack.isEmpty()) return false;
			char topBracket = stack.top();
			if ((ch == ')' && topBracket == '(') ||
				(ch == ']' && topBracket == '[') ||
				(ch == '}' && topBracket == '{')) {
				stack.pop();
			}
			else {
				return false;
			}
		}
	}
	return stack.isEmpty();
}
int main() {
	int choice;

		string expression;
	do {
		cout << "Menu:\n";
		cout << "1. Enter an expression\n";
		cout << "2. Check if the expression is balanced\n";
		cout << "0. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Enter an expression with brackets to check: ";
			cin >> expression;
			break;
		}
		case 2: {
			if (expression.empty()) {
				cout << "Please enter an expression first (Option 1)." << endl;
			}
			else {
				if (bracket_check(expression)) {
					cout << "The expression is balanced." << endl;
				}
				else {
					cout << "The expression is not balanced." << endl;
				}
			}
			break;
		}
		case 0: {
			cout << "Exiting program." << endl;
			break;
			
		}
		default:
			cout << "Invalid choice, please try again." << endl;
		}
	} while (choice != 0);
	return 0;
}