#include "header.h"

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    print(arr, n);
    int m;
    cin >> m;
    double* orr = new double[m];
    for (int i = 0; i < m; ++i) {
        cin >> orr[i];
    }
    BubbleSort(orr, m);
    print(orr, m);
    return 0;
}