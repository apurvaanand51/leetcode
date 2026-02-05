class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1;
        int area = 0;
        while(start < end){
            int x = min(height[start], height[end]) * abs(start - end);
            area = max(area, x);
            if(height[start] < height[end]){
                start++;
            } else{
                end--;
            }
        }

        return area;
    }
};