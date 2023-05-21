package ARRAY;
import java.util.*;
class SDA_PRIME
    {
        public static void main()
        {   int temp=0;
            Scanner sa=new Scanner(System.in);
            System.out.println("ENTER THE RANGE");
            int n=sa.nextInt();
            int A[]=new int[n];
            System.out.println("ENTER THE NUMBERS");
            for(int i=0;i<n;i++)
            {
                A[i]=sa.nextInt();
            }
            System.out.println("THE PRIME NUMBERS ARE :");
            for(int i=0;i<n;i++)
            { 
                for(int j=2;j<=A[i]/2;j++)
                {
                    if(A[i]%j==0)
                    {   temp=1;
                        break;
                    }
                }
                if(temp==0)
                System.out.print(A[i]+"\t");
                temp=0;
            }
        }
    }
                  
                    
        