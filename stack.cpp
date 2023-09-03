/* Create stack with vectors*/
/* Stack is a Last in First out operation*/


#include <iostream>
#include <vector>


using namespace std;

class Stack {
    private:
        vector <int> stack;
    
    public:
        int push(int value);
        int pop();
        int top();
        int display();
};

int Stack::push(int value) {
    stack.push_back(value);
    return 0;
}

int Stack::pop() {
    if(stack.empty()) 
        cout << "Stack Empty" << endl;
    else
        stack.pop_back();
    return 0;
}

int Stack::top() {
    if(stack.empty()) {
        cout << "Stack Empty" << endl;
        return 1;
    }
    else
        return stack.back();
}

int Stack::display() {
    if(stack.empty())
        cout << "Stack Empty" << endl;
    else {
        for(int i=0; i< stack.size(); i++)
        {
            cout << "Value : " << stack.at(i) << endl;
        }
    }
    return 0;
}

int main(void) {
    Stack s;
    s.push(10);
    s.push(45);
    s.push(50);
    s.display();
    s.pop();
    s.pop();
    s.display();

}
