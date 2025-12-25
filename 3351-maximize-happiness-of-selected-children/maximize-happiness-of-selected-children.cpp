class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end());
        int n = h.size();
        long long sum=0;
        for(int i =0;i<k;i++)
        {
            if(h[n-1-i]-i>0)
            {
                sum+=h[n-1-i]-i;
            }
        }

        return sum;
    }
};