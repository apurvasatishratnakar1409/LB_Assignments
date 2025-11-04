
class Logic
{
    public void CheckDivisible(int iNo)
    {
        if(iNo%5==0 && iNo%11==0)
        {
            System.out.println(" it is divisible by 5 and 11");

        }
        
        
         else
        {
            System.out.println(" it is not divisible by 5 and 11");

        }

    }

}
class progrram3
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.CheckDivisible(55);
    }
}
