package ARRAY;
import java.util.*;
class BINARY_SEARCHING
{
    public static void main(String[] args) {
        
    
    
   Scanner sa=new Scanner(System.in);
        int a[]={1,23,45,67,89};
        System.out.println("INITIAL LIST");
        for(int i=0;i<5;i++)
        System.out.print(a[i]+"\t");
        System.out.println("\nENTER THE NUMBER TO BE SEARCHED");
        int n=sa.nextInt();
        int start=0,end=4,mid=0,found=0;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(a[mid]==n)
            {
                found=1;
                break;
            }
            else if(a[mid]<n)
                start=mid+1;
            else if(a[mid]>n)
                end=mid-1;
        }
        if(found==1)
            System.out.println("THE NUMBER IS FOUND AT "+(mid+1)+" PLACE");
        else
            System.out.println("NUMBER NOT FOUND");
    }
}