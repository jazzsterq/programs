package PATTERNS.MY_SPECIFICATIONS;
class PATTERN
{
    public static void main()
    {
        for(int i=5;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
                System.out.print(j+"\t");
            for(int k=1;k<=6-i;k++)
                System.out.print(k+"\t");
            System.out.println();
        }
    }
}
                
            
