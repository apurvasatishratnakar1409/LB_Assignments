class Logic
{
    public void CalculateSum(int iNo)
    {
       
        int iCnt=0;
        int iCount=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iCount=iCount+iCnt;
           
        }
        System.out.println("sum of N Number is:"+iCount);
    }

}
class Program1
{
    public static void main (String arge[])
    {
        Logic Lobj=new Logic();
        Lobj.CalculateSum(10);

    }
}
