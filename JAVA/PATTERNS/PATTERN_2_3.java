/* WAP TO PRINT THE GIVEN PATTERN
continued as the input given....
5
54
543
5432
54321
*/
package PATTERNS;
import java.io.*;
class PATTERN_2_3
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
                        
                            System.out.print(a);
                     
                        }
                    
                 System.out.println();
                }
            }
        }
                     