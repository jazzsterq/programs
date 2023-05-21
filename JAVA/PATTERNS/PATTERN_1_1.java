/* WAP TO PRINT THE GIVEN PATTERN
1
22
333
4444
55555
...continued as the input given*/
package PATTERNS;
import java.io.*;
class PATTERN_1_1
      {
        public static void main()throws IOException
            {
             BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
             System.out.println("ENTER THE NUMBER OF LINES");
             int n=Integer.parseInt(sa.readLine());
             for(int s=1;s<=n;s++)
                {
                 for(int a=1;a<=s;a++)
                    {
                     System.out.print(s);
                    }
                 System.out.println();
                }
            }
        }
                     