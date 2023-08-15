// LeetCodeTrain.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "solution.h"

vector<int> nums
{
  3,3
};
int main()
{
    solution S;
    vector<int> indices = S.twoSum(nums,6);
    cout << indices[0] <<" " << indices[1] << endl;
}
