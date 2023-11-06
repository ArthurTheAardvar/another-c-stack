#include <iostream>
using namespace std;

string Laundry[10];
int top = -1;

void push(string clothing) {
	if (top >= 9)
		cout << "stack is full" << endl;
	else {
		top++;
		Laundry[top] = clothing;

	}
}

void pop() {
	if (top <= -1)
		cout << "stack is empty" << endl;
	else {
		cout << "The popped element is " << Laundry[top] << endl;
		top--;
	}
}

void display() {
	if (top >= 0) {
		cout << "Stack elements are: ";
		for (int i = top; i >= 0; i--)
			cout << Laundry[i] << " ";
		cout << endl;
	}
	else
		cout << "Stack is empty";
}


void size() {
	if (top >= 0) {
		int len = 0;
		for (int i = top; i >= 0; i--) {
			len++;
		}
		cout << "size of stacks: " << len << "\n";
	}
	else
		cout << "stack is empty";
}


int main() {

	while (true) {
		string monkey;

		cout << "What do you wanna add to the list?" << endl;
		cin >> monkey;
		push(monkey);
		display();
		size();
	}
	
}