//TO PRINT TABLE OF A NUMBER
import java.io.*;
  class TABLE
 {
    static void main()throws IOException
    {
        BufferedReader sa= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("ENTER THE NUMBER TO PRINT ITS TABLE");
        long t=Long.parseLong(sa.readLine());
        for( int i=1;i<=10;i++)
        {
            System.out.println(t+"*"+i+"="+(i*t));// t is the table to be printed
        }
    }
}
