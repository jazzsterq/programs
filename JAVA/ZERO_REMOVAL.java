class ZERO_REMOVAL
{
    public static void main(int n)
    {
        int num=0,count=0;
        for(;n!=0;n/=10)
        {
            int dig=n%10;
            if(dig==0)
            continue;
            num+=dig*(int)Math.pow(10,count);
            count++;
        }
        System.out.println(num);
    }
}