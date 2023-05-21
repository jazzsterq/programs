package STRING_TOKENIZER;
import java.util.*;
class DISPLAY
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE STRING");
        while(true)
        {
            String st=sa.next();
            
            if(st.equals("."))
            
            break;
            System.out.println(st);
        }
    }
}