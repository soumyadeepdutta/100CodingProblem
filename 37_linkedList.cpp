// create a single linked list and show its operations.
#include <iostream>

class Node
{
public:
    int value;
    Node *next = nullptr;

    Node(int x) : value(x) {}

    void print_value()
    {
        std::cout << value << "\t";
    }

    ~Node()
    {
        std::cout << "Cleared " << value << "\n";
    }
};

class LinkedListStack
{
private:
    Node *top = nullptr;

public:
    void push(int x)
    {
        Node *node = new Node(x);
        node->next = top;
        top = node;
    }

    void pop()
    {
        if (top == nullptr)
        {
            std::cout << "Stack is empty.\n";
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    void print()
    {
        Node *temp = top;
        while (temp)
        {
            temp->print_value();
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    ~LinkedListStack()
    {
        Node *current = top;
        while (current)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
        std::cout << "Cleared LinkedListStack!\n";
    }
};

int main()
{
    LinkedListStack stack;
    stack.push(1);
    stack.push(12);
    stack.print();
    stack.push(13);
    stack.print();
    stack.push(16);
    stack.print();
    stack.pop();
    stack.print();

    return 0;
}
