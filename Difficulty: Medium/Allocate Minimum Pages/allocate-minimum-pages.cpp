class Solution {
  public:
    int findPages(vector<int> &arr, int k) {

        if(k > arr.size())
            return -1;

        long long low = *max_element(arr.begin(), arr.end());

        long long high = 0;
        for(int i = 0; i < arr.size(); i++) {
            high += arr[i];
        }

        while(low < high) {

            long long mid = low + (high - low) / 2;

            int student = 1;
            long long max_stu = 0;

            for(int i = 0; i < arr.size(); i++) {

                if(max_stu + arr[i] <= mid) {
                    max_stu += arr[i];
                }
                else {
                    student++;
                    max_stu = arr[i];
                }
            }

            if(student <= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};