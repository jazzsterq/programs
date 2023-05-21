import java.util.*;
public class Watermelon
{ 
    public static void main(String[] args)
    {
        Scanner sa= new Scanner(System.in);
        int a = sa.nextInt();
        if (a%2==0&&a>2)
        {
            System.out.println("YES");
        }
        else
        System.out.println("NO");
    }
}