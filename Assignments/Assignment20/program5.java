
class Logic
{
    public void FindLargestNumber(int iNo)
    {

        int iSmaller=9;
        while(iNo!=0)
        {
            int iDigit=iNo%10;
           if(iDigit<iSmaller)
           {
             iSmaller=iDigit;
           }
             iNo=iNo/10;
        }
        System.out.println("Smaller digit is:"+iSmaller);
    }
        

}
class program5
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.FindLargestNumber(83429);
    }
}
