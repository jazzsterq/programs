package FILE_HANDLING;
import java.io.*;
import java.util.*;
class MARKS
{
    public static void main()throws IOException
    {
        File obj = new File("f:\\files\\list.txt");
        Scanner sa = new Scanner(obj);
        int count=0;
        while(sa.hasNextLine())
        {
            count++;
            sa.nextLine();
        }
        String name[] = new String[count];
         int mark[]= new int[count];
        sa=new Scanner(obj);
        int i=0;
        while(sa.hasNextLine())
        {
            try
            {
                name[i]=sa.next();    
                mark[i]=sa.nextInt();                               
                i++;
            }
            catch(Exception e){}
        }
        for(i=0;i<count;i++)
            if(mark[i]>=75)
                System.out.println(name[i]+"    "+mark[i]);
    }
}

