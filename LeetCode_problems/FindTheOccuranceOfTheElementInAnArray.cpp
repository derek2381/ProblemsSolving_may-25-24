// problem link
// https://leetcode.com/contest/biweekly-contest-131/problems/find-occurrences-of-an-element-in-an-array/

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        map<int, vector<int>> mp;
        vector<int> res;
        int n = nums.size();

        for(int i = 0;i < nums.size();i++){
            if(nums[i] == x){
                mp[x].push_back(i);
            }
        }
        int k = mp[x].size();

        for(int i : queries){
            if((i) > k){
                res.push_back(-1);
            }else{
                res.push_back(mp[x][i-1]);
            }
        }

        return res;

    }
};
