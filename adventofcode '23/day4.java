import java.util.*;
import java.io.*;
public class day4
{
    public static void main(String[] args) {
        Scanner sa = new Scanner(System.in);
        while(1)
        {
            String s=sa.nextLine();
            StringTokenizer ss = new StringTokenizer(s);
            long a[] = new Long [10];
            for(int i=0;i<10;i++)
            {
                a[i]=ss.nextToken();
            }
            for(int i=0;i<10;i++)
            System.out.print(a[i]+" ");
            break;
        }
    }
}