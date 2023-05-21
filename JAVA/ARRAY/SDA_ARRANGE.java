package ARRAY;
import java.util.*;
//PROGRAM TO ARRANGE LOWERCASE CHARACTERS AT THE  RIGHT AND VICE VERSA
class SDA_ARRANGE
{
    public static void main()
    {
        Scanner sa=new Scanner(System.in);
        System.out.println("ENTER THE NO. OF CHARACTERS");
        int n=sa.nextInt();
        char a[]= new char[n];
        int pos=0;
        System.out.println("ENTER THE CHARACTERS");
        for(int i=0;i<n;i++)
        {
            a[i]=sa.next().charAt(0);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                char temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
                pos++;
            }
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}
            
   
            
        
        