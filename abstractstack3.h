#include <iostream>
#include <string>
using namespace std;
template<typename T>
class abstractstack {
protected:
	T* stack;
	int maxsize;
	int currentsize;
public:
	abstractstack(int size) {
		maxsize = size;
		currentsize = 0;
		stack = new T[size];
	}
	virtual void push(T value) = 0;
	virtual T pop() = 0;
	virtual bool isEmpty() const = 0;
	virtual T top() const = 0;
	virtual ~abstractstack() { delete[] stack; }
};