
class Logic
{
    public void DisplayGread(int iNo)
    {
        if(iNo>=90)
        {
            System.out.println(" A Gread");

        }
        else if(iNo>=80)
        {
            System.out.println(" B Gread");
        }
        else if(iNo>=70)
        {
            System.out.println(" C Gread");

        }
         else if(iNo>=60)
        {
            System.out.println(" D Gread");

        }
         else
        {
            System.out.println(" F Gread");

        }

    }

}
class program2
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.DisplayGread(82);
    }
}
