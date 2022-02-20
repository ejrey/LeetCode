#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        // string temp = to_string(x); SECOND SOLUTION
        string temp = s;
        reverse(temp.begin(), temp.end());

        // FIRST SOLUTION
        // for (int i = 0; i < s.size(); i++) {
        //     if(s[i] != temp[i]) {
        //         return false;
        //     }
            
        // }
        return s == temp;
    }
};

int main() {
    Solution ss;
    cout << ss.isPalindrome(-121) << endl;
    return 0;
}