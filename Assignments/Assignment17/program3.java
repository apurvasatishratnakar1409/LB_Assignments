
class Logic
{
    public void FindMax(int iNo1,int iNo2)
    {

       
        if(iNo1>iNo2)
        {
        System.out.println("Max number is:"+iNo1);
        }
        else  
        {
        System.out.println("Max number is:"+iNo2);
        }

    }
}
class program3
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.FindMax(20,15);

    }

}
