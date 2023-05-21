/* WAP TO PRINT THE GIVEN PATTERN
continued as the input given....
12345
1234
123
12
1
*/
package PATTERNS;
import java.io.*;
class PATTERN_2_4
      {
        public static void main()throws IOException
            {
             BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
             System.out.println("ENTER THE NUMBER OF LINES");
             int n=Integer.parseInt(sa.readLine());
             for(int s=n;s>=1;s--)
                {
                 for(int a=1;a<=s;a++)
                    {
                     System.out.print(a);
                    }
                 System.out.println();
                }
            }
        }
                     