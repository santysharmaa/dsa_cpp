#include <bits/stdc++.h>
using namespace std;


int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0;
    int n = heights.size();
    
    for(int i = 0; i <= n; i++) {
        
        int currHeight = (i == n) ? 0 : heights[i];
        
        while(!st.empty() && currHeight < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();
            
            int width;
            if(st.empty())
                width = i;
            else
                width = i - st.top() - 1;
                
            maxArea = max(maxArea, height * width);
        }
        
        st.push(i);
    }
    
    return maxArea;
}

int BF_largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int maxArea = 0;

    for(int i = 0; i < n; i++) {
        int height = heights[i];

        // Expand left
        int left = i;
        while(left > 0 && heights[left - 1] >= height)
            left--;

        // Expand right
        int right = i;
        while(right < n - 1 && heights[right + 1] >= height)
            right++;

        int width = right - left + 1;
        maxArea = max(maxArea, height * width);
    }

    return maxArea;
}


int main() {
    vector<int> arr = {2, 1, 5, 6, 2 ,3};

    cout<<BF_largestRectangleArea(arr);
    return 0;
}