import java.util.*;
class pattern
{
    public static void main(String[] args) {
        Scanner sa = new Scanner (System.in);
        int a = sa.nextInt();
        for (int i=1;i<=a;i++)
        {
            int x=1;
            for(int j=i;j<a;j++)
            {
                System.out.print(" ");
            }
            for(int k=1;k<2*i;k++)
            {
                System.out.print(x);
                if(k<i)
                x++;
                else x--;
            }
            System.out.println();
        }
    }
}