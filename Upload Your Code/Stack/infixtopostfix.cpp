#include <iostream>
using namespace std;

char stack[30];
int top = -1;

void push(char elem) {
    if (top == 29) {
        cout << "Overflow" << endl;
    } else {
        stack[++top] = elem;
    }
}


char pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
        return '\0';
    } else {
        return stack[top--];
    }
}

int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    return -1;
}

int main() {
    char inf[30], psfix[30], ch;
    int i = 0, j = 0;
    cout << "Enter infix: ";
    cin >> inf;
    push('#');
    while ((ch = inf[i++]) != '\0') {
        if (ch == '(') {
            push(ch);
        } else if (isalnum(ch)) {
            psfix[j++] = ch;
        } else if (ch == ')') {
            while (stack[top] != '(') {
                psfix[j++] = pop();
            }
            pop(); 
        } else {
            while (precedence(stack[top]) >= precedence(ch)) {
                psfix[j++] = pop();
            }
            push(ch);
        }
    }
    while (stack[top] != '#') {
        psfix[j++] = pop();
    }
    psfix[j] = '\0';
    cout << "Postfix expression: " << psfix << endl;

    return 0;
}
