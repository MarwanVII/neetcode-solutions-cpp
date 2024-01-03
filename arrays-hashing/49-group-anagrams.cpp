class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>> answer;
        for(auto s: strs)
        {
            string cpy = s;
            sort(cpy.begin(),cpy.end());
            mp[cpy].push_back(s);
        }
        for(auto v:mp)
        {
            answer.push_back(v.second);
        }
        return answer;
    }
};
