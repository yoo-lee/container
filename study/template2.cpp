#include <iostream>
#include <stack>

// template <class T>
// class Stack
// {
// 	private:
// 	T *stack;
// 	int i;

// }
template <class T>
class Stack
{
private:
    T* stack;
    int index;
public:
    Stack(int size) : index(0) { stack = new T[size]; }
    ~Stack() { delete [] stack; }
    void push(T item) { stack[index++] = item; }
    T pop() { return stack[--index]; }
};

int main()
{
    Stack<int> stack(256);
    stack.push(123);
    stack.pop();
}