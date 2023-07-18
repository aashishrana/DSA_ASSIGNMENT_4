#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::vector<int>> findDistinctIntegers(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set1(nums1.begin(), nums1.end());
    std::unordered_set<int> set2(nums2.begin(), nums2.end());

    std::vector<int> distinctNums1;
    std::vector<int> distinctNums2;

    for (int num : nums1) {
        if (set2.find(num) == set2.end()) {
            distinctNums1.push_back(num);
        }
    }

    for (int num : nums2) {
        if (set1.find(num) == set1.end()) {
            distinctNums2.push_back(num);
        }
    }

    return { distinctNums1, distinctNums2 };
}
