#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int secondSmallestSum(int *numbers, int length) {
    std::vector<int> sums; 
    for (int i = 0; i < length; i++) {
        int currentSum = 0;
        for (int j = i; j < length; j++) {
            currentSum += numbers[j];
            sums.push_back(currentSum);
        }
    }

    std::sort(sums.begin(), sums.end());
    sums.erase(std::unique(sums.begin(), sums.end()), sums.end());

    if (sums.size() < 2) {
        return sums[0]; 
    }
    return sums[1]; 
}