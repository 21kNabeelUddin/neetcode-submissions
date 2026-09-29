class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int left=0, right=heights.size()-1;
        int maxarea=0;
        
        while(left<right)
        {
            int width=right-left;
            int height=min(heights[right],heights[left]);
            int area=height*width;
            if(area>=maxarea)
            {
                maxarea=area;
            }
            if(heights[left]>heights[right])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return maxarea;


    }
};
