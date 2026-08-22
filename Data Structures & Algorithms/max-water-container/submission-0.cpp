class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int area = 0;
        int max_area = INT_MIN;
        while(left<right){
            area = (right-left)*min(heights[left], heights[right]);
            max_area=max(area,max_area);
            if(left<heights.size()-1 && right>0 && heights[left]<heights[right]){
                left++;
            }else if(left<heights.size()-1 && right>0 && heights[right]<heights[left]){
                right--;
            }else{
                left++;
                right--;
            }
        }
        return max_area;
    }
};
