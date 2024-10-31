//
// Created by Coder729 on 2024/10/31.
//
#include <vector>  // 需要包含这个头文件以使用 vector
#include <string>  // 如果使用 string，需要这个头文件
#include <iostream> // 添加这个头文件以使用 cout
using namespace std; // 使用标准命名空间

class Solution {
public:
    static vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3; // 预分配足够大小
        for (int i = 0; i < nums1.size(); i++) {
            int a = nums1[i];
            for (int j = 0; j < nums2.size(); j++) {
                int b = nums2[j];
                if (a == b) {
                    bool already = false;
                    for (int x = 0; x < nums3.size(); x++) {
                        if (a == nums3[x]) {
                            already = true;
                            break;
                        }
                    }
                    if (!already) {
                        nums3.push_back(a);
                    }
                }
            }
        }
        return nums3;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> a = Solution::intersection(nums1, nums2);

    // 输出结果
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // 输出每个元素
    }
    cout << endl; // 换行
    return 0;
}
