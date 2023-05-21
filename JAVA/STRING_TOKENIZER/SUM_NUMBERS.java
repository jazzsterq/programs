//PROGRAM TO  DISPLAY TOKENS(INTEGRAL) AND THEIR SUM
package STRING_TOKENIZER;
import java.util.*;
class SUM_NUMBERS
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER A STRING");
        String str=sa.nextLine();
        
        StringTokenizer st=new StringTokenizer(str,",");
        int count=st.countTokens();
        
        System.out.println("NO. OF TOKENS="+count);
        int sum=0;
        for(int i=0;i<count;i++)
        {
            int token=Integer.valueOf(st.nextToken());
            System.out.println(token);
            sum+=token;
        }
        System.out.println("SUM OF NUMBERS "+sum);
    }
}