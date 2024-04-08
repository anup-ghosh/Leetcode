class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sd) {
        deque<int>dq;
        for(int i=0;i<s.size();i++)
        {
            dq.push_back(s[i]);
        }
        int i=0;
        int j=0;
        while(dq.size() && j!=dq.size())
        {
            if(dq.front()!=sd[i])
            {
                dq.push_back(dq.front());
                j++;
            }
            else 
            {
                j=0;i++;
            }
            dq.pop_front();
        }
        return dq.size();
    }
};