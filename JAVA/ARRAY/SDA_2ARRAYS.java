package ARRAY;
class SDA_2ARRAYS
{
    static void main()
    {
        int a[]={1,5,6,6,9};
        int b[]={1,3,6,7,7,8,9,67,85,88};
        int c[]=new int[15];
        for(int i=0;i<5;i++)
        {
            int small=a[i];
            for(int j=1;j<10;j++)
            {
                if(b[j]<small)
                {
                    small=a[j];
                }
            }
            c[i]=small;
        }
        System.out.println("SORTED LIST OF ARRAY");
        for(int i=0;i<15;i++)
            System.out.print(c[i]+"\t");
    }
}