/*
* * * * *  
        *    *
        * 
* * * * * * * * * * 
        *         *
        *         *            
        *         *
* * * * *         *

 */
package PATTERNS;
class OM
    {
        static void main()
        {
            for( int i=1;i<=5;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    if(i==1||i==5||j==5)
                        System.out.print("* ");
                    else
                        System.out.print("  ");
                        if(i==5)
                        System.out.print("* ");
                    }
                    if(i==2)
                    System.out.print("   *");
                    System.out.println();
                }
            for( int i=1;i<=5;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    if(i==5||j==5)
                        System.out.print("* ");
                    else
                        System.out.print("  ");
                    if(j==5)
                    System.out.print("        *");    
                    }
                    System.out.println();
                }
            }
        }
           
       
        