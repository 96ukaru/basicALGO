#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

#define DATASIZE (100000)

int top, stackArray[DATASIZE];

void push(int a) {
    if (top == DATASIZE - 1) {
        return;
    }
    top++;
    stackArray[top] = a;
    return;
}

int pop() {
    if (top == 0) {
        return;
    }
    top--;
    return stackArray[top + 1];
}

int main(void) {
    char str[100];
    int a, b;
    top = 0;
    while (scanf("%s", str) != EOF) {
        if (str[0] == '+') {
            a = pop();
            b = pop();
            push(b + a);
        }
        else if (str[0] == '-') {
            b = pop();
            a = pop();
            push(a - b);
        }
        else if (str[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        }
        else {
            push(atoi(str));
        }
    }
    printf("%d\n", pop());
    return 0;
}
