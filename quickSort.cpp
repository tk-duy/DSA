#include <iostream>
#include <utility>
#include <climits>
#include <ctime>

void input(int *a, int n) {
    for (int i = 0; i < n; i++)
    std::cin >> a[i];
}

void output(int *a, int n) {
    for (int i = 0; i < n; i++) 
    std::cout << a[i] << ' ';
}

int partition(int *a, int low, int high) {
    int pivot = a[high];
    int i = low - 1;
        for (int j = low; j < high; j++) {
            if (a[j] < pivot) {
                i++;
                std::swap(a[j], a[i]);
            }
        }
    std::swap(a[i+1], a[high]);
    return i+1;
}

void sort(int *a, int low, int high) {
    if (low < high) {
        int pivot = partition(a, low, high);
        sort(a, low, pivot - 1);
        sort(a, pivot + 1, high);
    }
}


int main() {

    int n; std::cin >> n;
    int *a = new int[n];
    srand (time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;
    for (int i = 0; i < n; i++)
        std::cout << a[i] << ' ';
    std::cout << '\n';
    sort(a, 0, n - 1);
    output(a, n);

    system("pause");
    return 0;
}