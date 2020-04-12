#include <iostream>
using namespace std;

void selSort(int selAry[], int N) {
    int min, temp;

    for (int i = 0; i < N - 1; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            if (selAry[min] > selAry[j]) {
                min = j;
            }
        }
        temp = selAry[i];
        selAry[i] = selAry[min];
        selAry[min] = temp;
    }
}

int main(void) {
    int N;
    cin >> N;

    int selAry[N];
    for (int i = 0; i < N; i++)cin >> selAry[i];

    selSort(selAry, N);

    for (int i = 0; i < N; i++) {
        cout << selAry[i];
        if (i <= N - 2)cout << ' ';
        else cout << '\n';
    }
    return 0;
}