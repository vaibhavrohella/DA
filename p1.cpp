/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<iostream>
using namespace std;

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int*    result;

    result = (int*)malloc(sizeof(int) * 2);
    // nullguard
    if (!result)
        return 0;
    
    // Initialize result array
    result[0] = 0;
    result[1] = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0;
    return 0;
}

