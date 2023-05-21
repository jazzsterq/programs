package Programs.J;

import java.util.*;
public class cls
{
    public static void main(String[] args)
    {
        Scanner sa = new Scanner(System.in);
        int n = sa.nextInt();
        String a[] = new String [n];
        for (int i =0;i<n;i++)
        a[i]=sa.next();
        for (int i =0;i<n;i++)
        {
        char c1 = a[i].charAt(0);
        char c2 = a[i].charAt(a[i].length()-1);
        if(a[i].length()>10)
       {
        System.out.println(c1+""+(a[i].length()-2)+""+c2);}
        else
        System.out.println(a[i]);
        }
    }
}

/*System.out.print(c1);
        System.out.print(a[i].length()-2);
        System.out.println(c2);}*/