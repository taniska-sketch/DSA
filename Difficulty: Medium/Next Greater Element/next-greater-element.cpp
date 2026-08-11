class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int>st;
        vector<int>res(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()  &&  arr[i]>=st.top()){
                st.pop();
            }
            if(st.empty())
            res[i]=-1;
            
            else{
                res[i]=st.top();
            }
            st.push(arr[i]);
        }
        return res;
        
    }
};