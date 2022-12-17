class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                if(st.size()>=2){
                    int f = st.top();
                    st.pop();
                    int s = st.top();
                    st.pop();
                    int sum = f+s;
                    st.push(sum);
                }
            }
            else if(tokens[i] == "*"){
                if(st.size()>=2){
                    long long f = st.top();
                    st.pop();
                    long long s = st.top();
                    st.pop();
                    long long mul =f*s;
                    st.push(mul);
                }
            }
            else if(tokens[i] == "/"){
                if(st.size()>=2){
                    int f = st.top();
                    st.pop();
                    int s = st.top();
                    st.pop();
                    int div =s/f;
                    st.push(div);
                }
            }
            else if(tokens[i] == "-"){
                if(st.size()>=2){
                    int f = st.top();
                    st.pop();
                    int s = st.top();
                    st.pop();
                    int div =s-f;
                    st.push(div);
                }
            }
            else {
                int num = stoi(tokens[i]);
                st.push(num);
            }
        }
        return st.top();
    }
};