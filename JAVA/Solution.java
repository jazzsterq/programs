class Solution
{
    public int sumOfAll(int a)
    {
        int sum =0;
        if(a==1)
            sum+=1;
        else
        {
            int n=a;
            int dup=a;
            for(int j=2;j<=dup;)
            {
                int check=0;
                for( int i=2;i<=j/2;i++)
                {
                    if(n%i==0)
                    {
                        check=1;
                    }
                }
                if(check==0&&n%j==0)
                {
                    n=n/j;
                    sum+=j;
                }
                if(n%j!=0)
                    j++;
            }
        }
        return sum;
    }
}