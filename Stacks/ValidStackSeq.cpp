class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;  
        int popPtr = 0;

        for(auto &val: pushed){
            st.push(val);
            while(st.size() > 0 && st.top() == popped[popPtr]) {
                st.pop();
                popPtr++; 
            }
        }

        return st.size()==0;
    }
};