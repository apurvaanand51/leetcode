class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end()); // complete array reversed
        reverse(nums.begin(), nums.begin() + k); // k elements are reversed from starting
        reverse(nums.begin() + k, nums.end());
    }
};