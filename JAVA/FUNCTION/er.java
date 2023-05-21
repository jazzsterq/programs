package FUNCTION;
class er
{
    int z;
    void process( er T)
    {
        T.z=T.z/10;
    }
    void run()
    {
        er ob= new er();
        ob.z=30;
        process(ob);
        System.out.println(ob.z);
    }
}

