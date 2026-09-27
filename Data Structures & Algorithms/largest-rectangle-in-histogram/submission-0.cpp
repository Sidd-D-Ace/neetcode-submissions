class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> pse;
        vector<int> nse ((int)heights.size(),0);
        stack<pair<int,int>> st;

        for(int i=0; i<heights.size(); i++){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                pse.push_back(-1);
                st.push({heights[i],i});
            }else{
                pse.push_back(st.top().second);
                st.push({heights[i],i});
            }
        }
        st={};

        for(int i=heights.size()-1; i>=0; i--){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                nse[i]=heights.size();
                st.push({heights[i],i});
            }else{
                nse[i]=st.top().second;
                st.push({heights[i],i});
            }
        }
        int ans=0;
        for(int i=0; i<heights.size(); i++){
            int width = (nse[i]-pse[i]-1);
            int currArea = heights[i]*width;
            ans = max(ans, currArea);
        }

        return ans;
    }   
};
