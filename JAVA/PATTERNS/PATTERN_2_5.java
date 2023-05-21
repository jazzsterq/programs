/* WAP TO PRINT THE GIVEN PATTERN
continued as the input given....
12345
2345
345
45
5
*/
package PATTERNS;
import java.io.*;
class PATTERN_2_5
      {
        public static void main()throws IOException
            {
             BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
             System.out.println("ENTER THE NUMBER OF LINES");
             int n=Integer.parseInt(sa.readLine());
             for(int s=1;s<=n;s++)
                {
                 for(int a=s;a<=n;a++)
                    {
                     System.out.print(a);
                    }
                 System.out.println();
                }
            }
        }