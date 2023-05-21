/* WAP TO PRINT THE GIVEN PATTERN
 *****
 ****
 ***
 **
 *
...continued as the input given*/
package PATTERNS;
import java.io.*;
class PATTERN_STARS
{
    public static void main()throws IOException
    {
        BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("ENTER THE NUMBER OF LINES");
        int n=Integer.parseInt(sa.readLine());
        int i=0;
        for(;i<n;i++)
        {
               
            if(i==n-1)
            {
                System.out.println();
                i=0;
                n--;
            }
             System.out.print("*");
        }
    }
}