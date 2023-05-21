import java.util.*;
class CONSECUTIVE_SUM
{
    public static void main()
    {   
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int n=sa.nextInt();
        System.out.println("ALL POSSIBLE CONSECUTIVE SUMS ARE");
        for(int i=1;i<(n+1)/2;i++)
        {   
            int sum=0;
            for(int j=i;j<=(n+1)/2;j++)
            {
                sum+=j;
                if(sum==n)
                {
                    for(int k=i;k<=j;k++)
                        System.out.print(k+"\t");
                        System.out.println();
                        
                }
            }
        }
    }
}