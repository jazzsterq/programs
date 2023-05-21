/* WAP TO PRINT THE GIVEN PATTERN
*
**
***
****
*****
...continued as the input given*/
package PATTERNS;
import java.io.*;
class PATTERN_STARS_1
      {
        public static void main()throws IOException
            {
             BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
             System.out.println("ENTER THE NUMBER OF LINES");
             int n=Integer.parseInt(sa.readLine());
             int count =1;
             for(int s=1;s<=n;s++)
                {
                 if(count==s)
                 {
                     count++;
                     s=1;
                     System.out.println();
                }
                   System.out.print("*");       
            }
        }
    }
            