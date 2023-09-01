// #include<bits/stdc++.h>

// int fib(int n) {
//     if(n == 0) return 0;
//     if(n == 1) return 1;
//     std::cout << "Processing..." << std::endl;
//     return fib(n-1) + fib(n-2);
// }

// int factorial(int n) {
//     if(n == 0) return 1;
//     std::cout << "Processing...\n";
//     return n * factorial(n - 1);
// }

// int main() {
//     int n; 
//     std::cout << "Enter a number: ";
//     std::cin >> n;
//     while(n < 0) {
//         std::cout << "Number error, please retype: ";
//         std::cin >> n;
//     }
//     std::cout << factorial(n) << std::endl;
//     return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// void generatePermutations(vector<int>& arr, int start, int end) {
//     if (start == end) {
//         for (int num : arr) {
//             cout << num << " ";
//         }
//         cout << endl;
//     } else {
//         for (int i = start; i <= end; i++) {
//             swap(arr[start], arr[i]);
//             generatePermutations(arr, start + 1, end);
//             swap(arr[start], arr[i]); // backtrack
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         arr[i] = i + 1;
//     }

//     cout << "All permutations of numbers from 1 to " << n << ":" << endl;
//     generatePermutations(arr, 0, n - 1);

//     return 0;
// }

// #include <bits/stdc++.h>

// int main()
// {
//     int n; std::cout << "Enter a number: ";
//     std::cin >> n;
//     std::stack<int> st;
//     while(n != 0) { 
//         int x = n % 2;
//         st.push(x);
//         n/=2;
//     }
//     std::cout << "This number in binary is: ";
//     while(!st.empty()) {
//         std::cout << st.top();
//         st.pop();
//     }
//     std::cout << std::endl;
//     return 0;
// }