#include <iostream>
#include <cstdio>
using namespace std;

#define MAX (100005)

typedef struct pp {
    char name[100];
    int a;
}BOX;

int head, tail, n;
BOX Q[MAX + 1];

void initialize() {
    head = tail = 0;
}

int isEmpty() {
    return head == tail;
}

int isFull() {
    return head == (tail + 1) % MAX;
}

void enqueue(BOX* x) {
    if (isFull())return;
    Q[tail] = *x;
    if (tail + 1 == MAX)tail = 0;
    else tail++;
}

BOX dequeue() {
    BOX x;
    x = Q[head];
    if (head + 1 == MAX)head = 0;
    else head++;
    return x;
}

int main(void) {
    int sum = 0;
    int q;
    BOX x;
    initialize();
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%s", x.name);
        scanf("%d", &(x.a));
        enqueue(&x);
    }
    while (!(isEmpty())) {
        x = dequeue();
        if (x.a <= q) {
            sum += x.a;
            printf("%s %d\n", x.name, sum);
        }
        else {
            if (!(isFull())) {
                x.a -= q;
                sum += q;
                enqueue(&x);
            }
        }
    }
    return 0;
}
