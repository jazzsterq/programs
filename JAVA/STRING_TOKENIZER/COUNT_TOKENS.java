//PROGRAM TO COUNT AND DISPLAY TOKENS SEPERATED BY DEFAULT DELIMITER->"SPACE"
package STRING_TOKENIZER;
import java.util.*;
class COUNT_TOKENS
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER A STRING");
        String str=sa.nextLine();
        
        StringTokenizer st=new StringTokenizer(str);
        int count=st.countTokens();
        
        System.out.println("NO. OF TOKENS="+count);
        for(int i=0;i<count;i++)
        {
            String token=st.nextToken();
            System.out.println("TOKEN "+(i+1)+"="+token);
        }
    }
}