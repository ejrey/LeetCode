#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> twoSumValue;
        
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target){
                    twoSumValue.push_back(i);
                    twoSumValue.push_back(j);
                }
                // cout << nums[i] << endl;
                // cout << nums[j] << endl;
            }
        }
    
        return twoSumValue;
    }
};

int main() {

    Solution sol;
    
    vector<int> test;
    vector<int> output;
    
    // test.push_back(2);
    // test.push_back(7);
    // test.push_back(11);
    // test.push_back(15);
    
    test.push_back(3);
    test.push_back(3);
    // test.push_back(4);
    // test.push_back(15);
    
    output = sol.twoSum(test, 6);
    
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << endl;
    }

}