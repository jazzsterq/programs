/* WAP TO PRINT THE GIVEN PATTERN
continued as the input given....
11111
2222
333
44
5
*/
package PATTERNS;
import java.io.*;
class PATTERN_1_4
      {
        public static void main()throws IOException
            {
             BufferedReader sa = new BufferedReader(new InputStreamReader(System.in));
             System.out.println("ENTER THE NUMBER OF LINES");
              int n=Integer.parseInt(sa.readLine());
             
             for(int s=1;s<=n;s++)
                {
                 
                    for(int a=n;a>=s;a--)
                    {
                        
                            System.out.print(s);
                     
                        }
                    
                 System.out.println();
                }
            }
        }
                     