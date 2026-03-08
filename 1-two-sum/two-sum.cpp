class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int result = target - nums[i];
            if (hash.find(result) != hash.end() && hash[result] != i) {
                return {i, hash[result]};
            }
        }
        // If no valid pair is found, return an empty vector
        return {};
    }
}; 
    