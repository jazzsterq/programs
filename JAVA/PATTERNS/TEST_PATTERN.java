package PATTERNS;
class TEST_PATTERN
    {
        public static void main()
        {
            for(int i=5;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                {
                    if(j%2==0)
                    System.out.print("# ");
                    else
                    System.out.print("* ");
                }
                System.out.println();
            }
        }
    } 