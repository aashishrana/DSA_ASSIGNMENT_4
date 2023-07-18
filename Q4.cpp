#include <iostream>
#include <vector>
#include <algorithm>

int arrayPairSum(const std::vector<int>& nums) {
    std::vector<int> sortedNums(nums); // Create a copy of nums to avoid modifying the input array
    std::sort(sortedNums.begin(), sortedNums.end());

    int maxSum = 0;
    for (int i = 0; i < sortedNums.size(); i += 2) {
        maxSum += sortedNums[i];
    }

    return maxSum;
}
