class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxwater = 0;
        while(left<right){
            int width = right-left;
            int newheight = min(height[left], height[right]);
            int area = width * newheight;

            maxwater = max(maxwater, area);

            if(height[left]< height[right]){
                left++;
            } else {
                right--;
            }
        }
        return maxwater;
    }
};