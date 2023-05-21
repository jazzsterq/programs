/* WAP TO PRINT THE GIVEN PATTERN
continued as the input given....
5
44
333
2222
11111
*/
package PATTERNS;
import java.io.*;
class PATTERN_1_3
      {
        public static void main()throws IOException
            {
             BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
             System.out.println("ENTER THE NUMBER OF LINES");
              int n=Integer.parseInt(sa.readLine());
             
             for(int s=n;s>=1;s--)
                {
                 
                    for(int a=n;a>=s;a--)
                    {
                        
                            System.out.print(s);
                     
                        }
                    
                 System.out.println();
                }
            }
        }
                     