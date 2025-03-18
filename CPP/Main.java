class one
{
    private int test()
    {
        return 15;
    }
    public int Y20()
    {
        return 16;
    }
}

class two extends one
{
    private int test()
    {
        return 17;
    }
    public int Y20()
    {
        return test();
    }
}

class three extends two
{
    public int test()
    {
        return 18;
    }
}

public class Main
{
    public static void main(String args[])
    {
        one j = new three();
        two tw = (two) j;
        System.out.println(tw.Y20());
    }
}
