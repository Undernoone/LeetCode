//
// Created by Coder729 on 2024/10/18.
//
#include <iostream>
#include <vector>
#include <io.h>   // 用于设置控制台编码
#include <fcntl.h> // 用于设置控制台编码
using namespace std;

#include <iostream>
#include <vector>
#include <io.h>   // 用于设置控制台编码
#include <fcntl.h> // 用于设置控制台编码
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int total = nums[i] + nums[j];
                if (total == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

int main()
{
    _setmode(_fileno(stdout), _O_U8TEXT);

    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty())
    {
        wcout << L"输入数组为:{2, 7, 11, 15} " << endl;
        wcout << L"目标: " << target << endl;
        wcout << L"索引: " << result[0] << L" " << result[1] << endl;
        wcout << L"数值: " << nums[result[0]] << L" " << nums[result[1]] << endl;
    }
    else
    {
        wcout << L"没有找到解。" << endl;
    }

    return 0;
}


