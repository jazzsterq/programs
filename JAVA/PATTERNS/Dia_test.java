package PATTERNS;
class Dia_test
{
    static void main()
    {
        for(int i=1;i<=5;i++)
        {
            char a='A';
            for(int j=5-i;j>=1;j--)
            {
                System.out.print(a);
                a++;
            }
            for(int k=1;k<=2*i-1;k++)
            {
                if(k==1||k==2*i-1)
                System.out.print("*");
                else
                System.out.print(" ");
            }
            a--;
            for(int l=5-i;l>=1;l--)
            {
                System.out.print(a);
                a--;
            }
            System.out.println();
        }
        for(int i=4;i>=1;i--)
        {
            char a='A';
            for(int j=5-i;j>=1;j--)
            {
                System.out.print(a);
                a++;
            }
            for(int k=1;k<=2*i-1;k++)
            {
                if(k==1||k==2*i-1)
                System.out.print("*");
                else
                System.out.print(" ");
            }
            a--;
            for(int l=5-i;l>=1;l--)
            {
                System.out.print(a);
                a--;
            }
            System.out.println();
        }
    }
}
        