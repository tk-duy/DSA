// Merge sort algorithm;
#include <bits/stdc++.h>

void merge(int *a, int *b, int low, int mid, int high)
{
    // a = new int[high+1];
    // b = new int[high+1];
    int i = low;
    int j = mid + 1;
    for (int k = low; k <= high; ++k) 
        b[k] = a[k];                    //copy to new array (b[]);

    for (int k = low; k <= high; ++k)    // smaller comming first;
    {
        if      (i > mid)         b[k] = a[j++]; // left done, copy right
        else if (j > high)        b[k] = a[i++]; // right done, copy left
        else if (b[j] < b[i])     b[k] = a[j++]; // right smaller, copy right
        else                      b[k] = a[i++]; // otherwise, copy left
    }
}

void mergeSort(int *a, int *b, int low, int high)
{
    if (high <= low) 
        return;

    int mid = low + (high - low) / 2;

    mergeSort(a, b, low, mid);
    mergeSort(a, b, mid + 1, high);
    merge(a, b, low, mid, high);
}

void print(int *b, int n) 
{
    for (int i = 0; i < n; i++)
        std::cout << b[i] << ' ';
}

int main()
{
    int n; std::cin >> n;
    int *a = new int[n];
    srand (time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;
    for (int i = 0; i < n; i++)
        std::cout << a[i] << ' ';
    std::cout << '\n';

    int *b = new int[n];

    mergeSort(a, b, 0, n - 1);

    print(b, n);
    system("pause");
    return 0;
}