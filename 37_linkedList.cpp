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

    void reverse()
    {
        Node *prev = nullptr;
        Node *next = nullptr;
        Node *current = top;
        while (current)
        {
            // store next
            next = current->next;
            // update next
            current->next = prev;
            // move
            prev = current;
            current = next;
        }
        top = prev;
    }

    void middle_element()
    {
        // using "runner technique" or "two pointer" technique with two pointers. The idea is to have two pointers, one moving at twice the speed of the other.
        // When the faster pointer reaches the end of the linked list, the slower pointer will be pointing to the middle element.
        Node *fast = top;
        Node *slow = top;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        std::cout << "Middle " << slow->value << std::endl;
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
    // stack.print();
    stack.push(13);
    // stack.print();
    stack.push(16);
    stack.push(17);
    stack.push(18);
    stack.push(19);
    // stack.push(20);
    // stack.push(21);
    // stack.print();
    // stack.pop();
    stack.print();
    stack.reverse();
    stack.print();
    stack.middle_element();

    return 0;
}
