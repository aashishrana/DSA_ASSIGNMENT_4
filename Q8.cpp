#include <iostream>
#include <vector>

std::vector<int> rearrangeArray(const std::vector<int>& nums) {
    int n = nums.size() / 2;
    std::vector<int> rearrangedArray;

    for (int i = 0; i < n; ++i) {
        rearrangedArray.push_back(nums[i]);
        rearrangedArray.push_back(nums[i + n]);
    }

    return rearrangedArray;
}