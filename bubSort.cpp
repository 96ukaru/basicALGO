#include <iostream>
using namespace std;

void bubSort(int bubAry[], int N) {
    int temp;

    for (int i = 0; i < N - 1; i++) {
        for (int j = N - 1; j >= 0; j--) {
            if (bubAry[j] > bubAry[j + 1]) {
                temp = bubAry[j];
                bubAry[j] = bubAry[j + 1];
                bubAry[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int N;
    cin >> N;

    int bubAry[N];
    for (int i = 0; i < N; i++)cin >> bubAry[i];

    bubSort(bubAry, N);

    for (int i = 0; i < N; i++) {
        cout << bubAry[i];
        if (i <= N - 2)cout << ' ';
        else cout << '\n';
    }
    return 0;
}