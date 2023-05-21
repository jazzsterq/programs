package STRING;
import java.util.*;
class CHARACTER_FUNCTIONS
{
    static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE CHARACTER");
        char ch=sa.next().charAt(0);
        if(Character.isDigit(ch))
        System.out.println("IS A DIGIT");
        if(Character.isLetter(ch))
        System.out.println("IS A LETTER");
        if(!(Character.isLetterOrDigit(ch)))
        System.out.println("IS A SPECIAL SYMBOL");
        if(Character.isUpperCase(ch))
        System.out.println("IN UPPERCASE");//Character.toUpperCase(ch); can be used to convert into upper case
        if(Character.isLowerCase(ch))
        System.out.println("IN LOWERCASE");//Character.toLowerCase(ch); can be used to convert into lower case
    }
}