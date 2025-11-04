
class Logic
{
    public void SumofDigit(int iNo)
    {
        int iSum=0;
        while(iNo!=0)
        {
            int iDigit=iNo%10;
            iNo=iNo/10;
            iSum=iSum+iDigit;
        }
        System.out.println("Sum of Digits:"+iSum);

    }
}
class program1
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.SumofDigit(1234);

    }

}
