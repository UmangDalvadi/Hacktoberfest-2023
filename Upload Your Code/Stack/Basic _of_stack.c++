/* 
A stack is a fundamental data structure in computer science that follows the Last-In, First-Out (LIFO) principle. It is a linear data structure where elements are added and removed from the same end, known as the "top" of the stack. Stacks are often used for tasks that require maintaining a particular order of elements, such as function call management in programming languages, parsing expressions, and backtracking algorithms.

Here's a bit of theory about the stack data structure:

1. **Operations**:
   - `push`: This operation is used to add an element to the top of the stack.
   - `pop`: This operation removes and returns the element at the top of the stack.
   - `peek` or `top`: This operation returns the element at the top of the stack without removing it.
   - `isEmpty`: This operation checks if the stack is empty.
   - `size`: This operation returns the number of elements in the stack.

2. **Implementation**:
   - Stacks can be implemented using arrays or linked lists.
   - In an array-based implementation, you need to keep track of the top element's index, and you can push and pop elements by manipulating this index.
   - In a linked list implementation, you add and remove elements at the head (top) of the linked list.

3. **Common Use Cases**:
   - Function call management: Stacks are used to keep track of function calls and their local variables.
   - Expression evaluation: Stacks can be used to evaluate arithmetic expressions in a postfix or prefix notation.
   - Backtracking: Stacks are helpful in implementing backtracking algorithms, such as those used in maze solving or finding a  path in a graph.
*/

// Here's a simple example of a stack in C++ using a list:

#include <iostream>
#include <stack>

int main() {
    // Create an empty stack of integers
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Get the top element of the stack without removing it
    int topElement = myStack.top();
    std::cout << "Top element: " << topElement << std::endl;

    // Pop elements from the stack
    myStack.pop();

    // Get the new top element
    topElement = myStack.top();
    std::cout << "Top element after pop: " << topElement << std::endl;

    // Get the size of the stack
    std::cout << "Stack size: " << myStack.size() << std::endl;

    return 0;
}

