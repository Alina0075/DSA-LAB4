#include"abstractstack3.h"
template<typename T>
class myStack : public abstractstack<T> {
public:
	myStack(int size) : abstractstack<T>(size) {}
	void push(T value) override {
		if (abstractstack<T>::currentsize < abstractstack<T>::maxsize) {
			abstractstack<T>::stack[abstractstack<T>::currentsize++] = value;
		}
		else {
			cout << "Stack is full." << endl;
		}
	}
	T pop() override {
		if (abstractstack<T>::currentsize > 0) {
			return abstractstack<T>::stack[--abstractstack<T>::currentsize];
		}
		else {
			cout << "Stack is empty." << endl;
			return T();
		}
	}
	bool isEmpty() const override {
		return abstractstack<T>::currentsize == 0;
	}
	T top() const override {
		if (abstractstack<T>::currentsize > 0) {
			return abstractstack<T>::stack[abstractstack<T>::currentsize - 1];
		
		}
		else {
			cout << "Stack is empty." << endl;
			return T();
		}
	}
};