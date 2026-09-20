class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> ans(temperatures.size(), 0);
        for(int i=0; i<temperatures.size(); i++){
            while(st.size()>0 && st.top().first<temperatures[i]){
                int days = i-st.top().second;
                ans[st.top().second]=days;
                st.pop();
            }
            st.push({temperatures[i],i});
        }

        return ans;
    }
};