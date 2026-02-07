class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> answer(nums.size());
        for(int i = 0; i < nums.size(); i++){
            int rotation = abs(nums[i]) % nums.size();
            int targetIndex;
            if(nums[i] < 0){
                targetIndex = (i - rotation + nums.size()) % nums.size();
            } else{
                targetIndex = (i + rotation) % nums.size();
            }
            // answer.push_back(nums[targetIndex]);
            answer[i] = nums[targetIndex];
        }
        return answer;
    }
};