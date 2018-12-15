// https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, ans = 0;
        while(i < j){
            if (height[i] < height[j]){
                ans = max(ans, height[i] * (j - i));
                i++;
            } else {
                ans = max(ans, height[j] * (j - i));
                j--;
            }
        }
        
        return ans;
    }
};
