class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        vector<int> leftSum(n);
        vector<int> rightSum(n);
        vector<int> answer(n);

        for(int i = 0; i < n; i++) {
            leftSum[i] = sum;
            sum += nums[i];
        }

        sum = 0;
        for(int i = n - 1; i >= 0; i--) {
            rightSum[i] = sum;
            sum += nums[i];
        }

        for(int i = 0; i < n; i++) {
            answer[i] = abs(leftSum[i] - rightSum[i]);
        }

        return answer;
    }
};