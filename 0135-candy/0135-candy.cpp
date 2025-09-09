class Solution {
public:
// n children in the line
// each child has rating value(arranaged in an array called ratings)
//conditions:
//one child-->atleast one candy
//child with high rating get more candies than their neighbour children
//minimum no of candies need to distribute the candies to children
//IDEA:
//no sorting as neighbouring children are considered
//neighbour-->left(i-1) and right(i+1)

    int candy(vector<int>& ratings) {
        int rating = ratings.size();
        // if rating is increasing or decresing order
        int inc=0,sum=0,dec=0;
        for(int i=0;i<rating-1;i++){
            if(ratings[i]<ratings[i+1]){
                inc++;
            }
            if(ratings[i]>ratings[i+1]){
                dec++;
            }
            sum+=i+1;
        }
        if(inc+1 == rating || dec+1 == rating){
            return sum+rating;
        }
        // for non decreasing or increasing
        ///find min
        vector<int>s(rating,1);
        for(int i=1;i<rating;i++){
            //moving to left to right pointer
            if(ratings[i]>ratings[i-1]){
                s[i]=s[i-1]+1;
            }
           // moving for right to left pointer
        }
        for(int i=rating-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
                s[i]=max(s[i+1]+1,s[i]);
            }
        }
        int res =0;
        for(int i=0;i<rating;i++){
            res+=s[i];
        }
        return res;
    }
};