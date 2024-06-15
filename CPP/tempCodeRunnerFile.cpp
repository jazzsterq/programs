int minimumDifference(vector<int>& nums) {
        int n=nums.size()/2;
        vector<int> ans;
        int sump=0,sumn=0;
        for(int i=0;i<2*n;i++)
        {
            if(nums[i]>0)sump+=nums[i];
            else sumn+=nums[i];
        }
        vector<vector<vector<int> > > dp(2*n+1,vector<vector<int>>(sump-sumn+1));
        dp[0][-sumn].push_back(0);
        for(int i=1;i<=2*n;i++)
        {
            for(int j=sumn;j<=sump;j++)
            {
                dp[i][j]=dp[i-1][j];
                if(j-nums[i-1]-sumn<0||j-nums[i-1]-sumn>sump-sumn)continue;
                //prints(j-nums[i-1]-sumn);
                for(int k=0;k<dp[i-1][j-nums[i-1]-sumn].size();k++)
                {
                    //deb(j);
                    //deb(dp[i-1][j-sumn-nums[i-1]][k]);
                    dp[i][j-sumn].push_back(dp[i-1][j-nums[i-1]-sumn][k]+1);
                    if(dp[i][j-sumn].back()==n)ans.push_back(j);
                }
            }
        }
        int mx=INT_MAX;
        for(int i=0;i<ans.size();i++){
            //prints(ans[i]);
            mx=min(mx,abs(sump+sumn-2*ans[i]));
        }
        return mx;
}