
#include"abstractstack.h"
template<typename T>
class myStack :public abstractstack<T> {
public:
	myStack(int size) :abstractstack<T>(size) {}
	void push(T value);
	T pop();
	T top() const;
	bool isEmpty() const;
	bool isFull() const;
	void display();
};
template<typename T>
void myStack<T>::push(T value) {
	if (!isFull()) {
		abstractstack<T>::stack[abstractstack<T>::currentsize] = value;
		abstractstack<T>::currentsize++;
	}
	else cout << "Stack is full.";
}
template<typename T>
T myStack<T>::pop() {
	T value;
	if (!isEmpty()) {
		abstractstack<T>::currentsize--;
		value = abstractstack<T>::stack[abstractstack<T>::currentsize];
		return value;
	}
	else return -1;
}
template<typename T>
T myStack<T>::top() const {
	return abstractstack<T>::stack[abstractstack<T>::currentsize - 1];
}
template<typename T>
bool myStack<T>::isEmpty()const {
	if (abstractstack<T>::currentsize == 0) {
		return true;
	}
	else return false;
}
template<typename T>
bool myStack<T>::isFull()const {
	if (abstractstack<T>::currentsize == abstractstack<T>::maxsize) {
		return true;
	}
	else return false;
}
template<typename T>
void myStack<T>::display() {
	for (int i = 0; i < abstractstack<T>::currentsize; i++) {
		cout << abstractstack<T>::stack[i] << " ";
	}
}
