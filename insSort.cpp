#include <iostream>
using namespace std;

void insSort(int insAry[], int N) {
    int j, temp;
    for (int i = 1; i < N; i++) {
        temp = insAry[i];
        j = i - 1;
        while (temp < insAry[j] && j >= 0) {
            insAry[j + 1] = insAry[j];
            j--;
        }
        insAry[j + 1] = temp;
    }
}

int main(void) {
    int N;
    cin >> N;

    int insAry[N];
    for (int i = 0; i < N; i++)cin >> insAry[i];

    insSort(insAry, N);

    for (int i = 0; i < N; i++) {
        cout << insAry[i];
        if (i <= N - 2)cout << ' ';
        else cout << '\n';
    }
    return 0;
}