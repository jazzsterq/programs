package FILE_HANDLING;
import java.io.File;
import java.io.IOException;
import java.util.Scanner;
class CREATE
{
    public static void main()throws IOException
    {               
            System.out.println("ENTER THE LOCATION WHERE THE FILE NEEDS TO BE CREATED");
            File sa = new File(new Scanner(System.in).next());
            if(sa.createNewFile())
            {
                System.out.println(sa.getAbsolutePath());
            }        
            else
            
                System.out.println("FILE ALREADY EXISTS");
    }
}