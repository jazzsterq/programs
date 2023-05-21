package INHERITANCE;
class student extends school
{
    protected String name;
    protected int age;
    
    student(String n , int a )
    {
        name =n;
        age =a;
    }
    void display()
    {
        System.out.println(pri);
        System.out.println(hm);
        System.out.println(sch);
        System.out.println(name);
        System.out.println(age);
    }
    void main()
    {
        student s1=new student("Srijan",4);
        student s2=new student("Saksham",10);
        s1.display();
        s2.display();
    }
}
    
    