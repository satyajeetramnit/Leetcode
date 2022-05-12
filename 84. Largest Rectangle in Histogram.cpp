class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> st;
        int area=0;
        for(int i=0;i<heights.size();i++){
            int k = i;
            while(!st.empty() && st.top().first>heights[i]){
                k = st.top().second;
                area=max(area, st.top().first*(i-k));
                st.pop();
            }
            st.push(make_pair(heights[i], k));
        }
        int n = heights.size();
        while(!st.empty()){
            area=max(area, st.top().first*(n-st.top().second));
            st.pop();
        }
    return area;
    }
};