#pragma once
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        map<int, int> sums;

        for (int i = 0; i < nums.size(); i++)
        {
            
           
            if (sums.find(target - nums[i])!= sums.end())
            {
                return {i,sums.at(target-nums[i])};
            }
            sums.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }   
};

// 아무 것도 없을때도 반환할 준비
// Unordered_map과 map의 차이점
// unordered_map과 map의 메서드