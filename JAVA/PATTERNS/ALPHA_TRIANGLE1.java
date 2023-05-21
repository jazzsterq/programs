/* WAP TO PRINT THE GIVEN PATTERN
A
AB
ABC
ABCD
ABCDE
...continued as the input given*/
package PATTERNS;
import java.io.*;
class ALPHA_TRIANGLE1
      {
        public static void main()throws IOException
            {
             BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
             System.out.println("ENTER THE NUMBER OF LINES");
             int n=Integer.parseInt(sa.readLine());
             for(int s='A';s<n+65;s++)
                {
                 for(int a=65;a<=s;a++)
                    {
                     System.out.print((char)a);
                    }
                 System.out.println();
                }
            }
        }
                     