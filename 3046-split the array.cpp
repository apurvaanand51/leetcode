class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
     sort(nums.begin(), nums.end());
     int count1 = 0, count2 = 0;
     for(int i = 0; i < nums.size(); i++){
        if((1 <= nums.size() <= 100) && (nums.size() % 2 == 0) && (1 <= nums[i] <= 100)){
            count1 = 0;
                for(int j = 0; j < nums.size(); j++){
                    if(nums[i] == nums[j]){
                        count1++;
                    }
                    if(count1 > 2){
                        count2 = count1;
                    }
                }
            }
        }
        if(count2 > 2){
            return false;
        } else{
            return true;
        }
    }
};