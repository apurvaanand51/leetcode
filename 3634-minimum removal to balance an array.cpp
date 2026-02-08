class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int temp = 0;
        int min = 0;
        for (int maxm = 0; maxm < n; ++maxm) {
            while (nums[maxm] > (long long)nums[min] * k) {
                min++;
            }
            temp = max(temp, maxm - min + 1);
        }
        return n - temp;
    }
};