
class Logic
{
    public void SumEvenOddDigit(int iNo)
    {
      
        int iEvenSum=0;
        int iOddSum=0;
        int iDigit=0;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            if(iDigit%2!=0)
            {
                iOddSum=iOddSum+iDigit;
                
            }

            if(iDigit%2==0)
            {
                iEvenSum=iEvenSum+iDigit;
                
            }

        }
        System.out.println("OddSum is"+iOddSum);
        System.out.println("EvenSum is"+iEvenSum);
    }
}
class program4
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.SumEvenOddDigit(123456);

    }

}
