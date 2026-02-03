bool isMonotonic(int* nums, int numsSize) {
    int count1 = 0, count2 = 0;
    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] >= nums[i+1]){
            count1++;
        }
        if(nums[i] <= nums[i+1]){
            count2++;
        }
    }
    if((count1 == numsSize - 1) || (count2 == numsSize - 1)){
        return true;
    } else{
        return false;
    }
}