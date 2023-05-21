// WAP TO PRINT FOLLOWING SERIES
// X^1-X^3+X^5-X^7..........UPTO n.

import java.util.*;
class SERIES_1
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int num=sa.nextInt();
        System.out.println("ENTER THE VALUE OF n");
        int n=sa.nextInt();
        int sum=num;
        for(int i=1;i<n;i++)
        {
             sum+=sum*(-num*num);
        }
        System.out.println(sum);
    }
}