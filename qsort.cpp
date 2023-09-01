#include <bits/stdc++.h>

int partition(int a[], int low, int high) {
    int i = low, j = high+1;
    int pivot = a[low];
    while(true) {
        while(a[++i] < pivot) if(i==high) break;
        while(a[--j] > pivot) if(j==low) break;
        if(i>=j) break;
        int temp = a[j];
    }
}

int main() {
    std::vector<int> v;
    int n; std::cin >> n;
    while(n--) {
        v.push_back(n);
    }

    for(auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}