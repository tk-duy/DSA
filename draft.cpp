#include <iostream>
#include <unordered_map>
#include <vector>

int countPairsWithDiffK(int K, const std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    int count = 0;
    for (int num : nums) {
        if (freq.count(num - K)) {
            count += freq[num - K];
        }
        if (freq.count(num + K)) {
            count += freq[num + K];
        }
        freq[num]--;
    }

    return count;
}

int main() {
    int K, N;
    std::cin >> N >> K;
    std::vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        std::cin >> nums[i];
    }
    std::cout << countPairsWithDiffK(K, nums);
    return 0;
}