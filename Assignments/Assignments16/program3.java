class Logic
{
    public void FindFactorial(int iNo)
    {
        int iCnt=0;
        int iFact=1;


        for(iCnt=1;iCnt<=iNo;iCnt++)

        {

            iFact=iFact*iCnt;
         }
           
          System.out.println("Factors are:"+iFact);
    }

}
class Program3

{
    public static void main (String arge[])
    {
        Logic Lobj=new Logic();
        Lobj.FindFactorial(5);

    }
}
