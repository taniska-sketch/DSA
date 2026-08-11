class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
         vector<int>res(arr.size());
        stack<int>st;
        
        for(int i = arr.size() - 1; i >= 0; i--){
            while(!st.empty() && arr[i]<=st.top()){
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