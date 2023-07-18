// Given three integer arrays arr1, arr2 and arr3 sorted in strictly increasing order, return a sorted array of only the integers that appeared in all three arrays.
#include <vector>
#include <iostream>
std::vector<int> findCommonElements(const std::vector<int>& arr1, const std::vector<int>& arr2, const std::vector<int>& arr3) {
    std::vector<int> result;
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            result.push_back(arr1[i]);
            ++i;
            ++j;
            ++k;
        }
        else if (arr1[i] < arr2[j])
            ++i;
        else if (arr2[j] < arr3[k])
            ++j;
        else
            ++k;
    }

    return result;
}
