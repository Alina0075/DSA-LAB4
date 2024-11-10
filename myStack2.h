#include"abstractstack2.h"
template<typename T>
class myStack :public abstractstack<T> {
public:
	myStack(int size) :abstractstack<T>(size) {}
	void push(T value);
	void reverse();
	void display();
};
template<typename T>
void myStack<T>::push(T value) {
	if (abstractstack<T>::currentsize != abstractstack<T>::maxsize) {
		abstractstack<T>::stack[abstractstack<T>::currentsize] = value;
		abstractstack<T>::currentsize++;
	}
	else cout << "Stack is full.";
}
template<typename T>
void myStack<T>::reverse() {
	T* stack2;
	int count = abstractstack<T>::currentsize;
	stack2 = new T[abstractstack<T>::currentsize];
	for (int i = 0; i < abstractstack<T>::currentsize; i++) {
		stack2[i] = abstractstack<T>::stack[i];
	}
	for (int i = 0; i < abstractstack<T>::currentsize; i++) {
		abstractstack<T>::stack[i] = stack2[--count];
	}
	
}
template<typename T>
void myStack<T>::display() {
	for (int i = 0; i < abstractstack<T>::currentsize; i++) {
		cout << abstractstack<T>::stack[i] << " ";
	}
}