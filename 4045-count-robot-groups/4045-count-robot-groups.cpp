class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        vector<int> new_position, new_speed;
        for (int i = 0; i < position.size(); i++) {
            if (i == position.size() - 1 || (position[i + 1] - position[i] > distance)) {
                new_position.push_back(position[i]);
                new_speed.push_back(speed[i]);
            }
        }
        position = new_position;
        speed = new_speed;
        cout << speed.size();
        stack<int>s;
        s.push(speed[0]);
        for(int i=1;i<speed.size();i++){
            int t = s.top();
            if(t > speed[i]){
                while(!s.empty() && s.top() > speed[i]){
                    s.pop();
                }
                s.push(speed[i]);
            }
            else s.push(speed[i]);
        }
        return s.size();
    }
};