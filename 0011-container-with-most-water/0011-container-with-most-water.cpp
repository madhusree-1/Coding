class Solution {
public:
    int maxArea(vector<int>& height) {
        //two pointers
        int hs = height.size();
        int maxArea = 0;
        int l=0,r=hs-1;
        while(l<r){
            int length = min(height[l],height[r]);
            // cout << "len is " << length << endl; 
            int width = r-l;
            // cout << "width is " << width << endl;
            int area = length * width;
            // cout << area << " ";
            maxArea = max(maxArea,area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxArea;
    }
};