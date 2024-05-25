// problem link
// https://leetcode.com/contest/biweekly-contest-131/problems/find-the-xor-of-numbers-which-appear-twice/


class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int res = 0;

        set<int> s;
        for(int i : nums){
            if(s.find(i) == s.end()){
                s.insert(i);
            }else{
                res ^= i;
            }
        }

        return res;

    }
};
