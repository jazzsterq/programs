package EXCEPTION_HANDLING;

class THROW
{
    static void main(int a,int b)
    {
        if(b==0)
        {
            throw new ArithmeticException("INFINITY");
        }
        else
        {
            System.out.println(a+"/"+b+"="+(a/b));
        }
    }
}

