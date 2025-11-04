
class Logic
{
    public void PrintOddNumber(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2!=0)
            {
                System.out.println(iCnt);
            }
        }
        
    }
}
class program3
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.PrintOddNumber(20);

    }

}
