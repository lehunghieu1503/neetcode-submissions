class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        unordered_map<string, vector<string>> mp;
        for(const string& x : strs){
            string key = x;
            sort(key.begin(), key.end());

            mp[key].push_back(x);
        }

        for(const auto& [k,v] : mp){
            result.push_back(v);
        }

        return result;
    }
};
