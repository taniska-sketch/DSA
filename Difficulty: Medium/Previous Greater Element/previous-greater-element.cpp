class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        vector<int>res(arr.size());
        stack<int>st;
         res[0]=-1;
         st.push(arr[0]);
        for(int i=1;i<arr.size();i++){
            while(!st.empty() && arr[i]>=st.top()){
                st.pop();
            }
             if(st.empty()){
                res[i]=-1;
            }
            else{
                res[i]=st.top();
               
            }
             st.push(arr[i]);
        }
        return res;
    }
};