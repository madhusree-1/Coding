class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area;
        double maxi=0;
     for(int i=0;i<points.size()-2;i++){
        int x1 = points[i][0];
        int y1 = points[i][1];
        for(int j=i+1;j<points.size()-1;j++){
            int x2 = points[j][0];
            int y2 = points[j][1];
            for(int k=j+1;k<points.size();k++){
               int x3 = points[k][0];
               int y3 = points[k][1];
               area=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
                if(maxi<area){
                    maxi =area;
                }
            }
        }
     }
     return maxi;   
    }
};