class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max_water=0;
        while(left < right){
            int min_height=min(height[left],height[right]);
            int width=right-left;
            int area=min_height*width;
            max_water=max(max_water,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
        
    }
};