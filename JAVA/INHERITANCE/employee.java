package INHERITANCE;
class employee
{
    protected String name;
    protected int empcode;
    protected int basic;
    void getdata(String nm,int ec,int bs)
    {
        name=nm;
        empcode=ec;
        basic=bs;
    }
    void showdata()
    {
        System.out.println("NAME: "+ name);
        System.out.println("EMPLOYEE CODE: "+empcode);
        System.out.println("BASIC SALARY: "+basic);
    }
}
        
 