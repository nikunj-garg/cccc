#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++) {
        check[i] = 0;
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if(array[i] >= 0) {
            check[array[i]] = 1;
        }
    }

    for (int i = 1; i < N; i++) {
        if (check[i] == 0) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}