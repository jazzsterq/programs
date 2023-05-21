package ARRAY;

import java.util.*;
class LINEAR_SEARCHING
{
    public static void main()
    {
        Scanner sa =new Scanner (System.in);
        System.out.println("ENTER THE RANGE");
        int r=sa.nextInt();
        int a[]=new int [r];
        int pos=0,count=0,found=0;
        System.out.println("ENTER THE ARRAY");
        for(int i=0;i<r;i++)
            a[i]=sa.nextInt();
        System.out.println("ENTER THE NUMBER TO BE SEARCHED");
        int n=sa.nextInt();
        for(int i=0;i<r;i++)
        {
            if(a[i]==n)
            {
                pos=i+1;
                count++; 
                found=1;
            }
        }
        if(found==1)
        {
            System.out.println("NUMBER IS FOUND AT "+pos+"th PLACE LASTLY");
            System.out.println("IT APPEARED "+count+" TIMES");
        }
        else
            System.out.println("NUMBER NOT FOUND");
    }
}

