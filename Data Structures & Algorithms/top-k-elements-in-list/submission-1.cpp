class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (const auto& [num, freq] : mp) {
            bucket[freq].push_back(num);
        }

        vector<int> result;

        for (int i = nums.size(); i >= 1; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);

                if (result.size() == k)
                    return result;
            }
        }

        return result;
    }
};