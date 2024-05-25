// problem link
// https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/


class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        map<int, int> curr_color;
        map<int, set<int>> mp;

        int n = queries.size();
        vector<int> res;

        for(int i = 0;i < n;i++){
            if(curr_color.find(queries[i][0]) == curr_color.end()){
                curr_color[queries[i][0]] = queries[i][1];
                mp[queries[i][1]].insert(queries[i][0]);
            }else{
                int val = curr_color[queries[i][0]];
                mp[val].erase(queries[i][0]);
                if(mp[val].size() == 0){
                    mp.erase(val);
                }
                curr_color[queries[i][0]] = queries[i][1];
                mp[queries[i][1]].insert(queries[i][0]);
            }
            res.push_back(mp.size());
        }

        return res;

    }
};
