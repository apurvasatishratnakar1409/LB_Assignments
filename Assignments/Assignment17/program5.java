class Logic
{
    public void PrintTable(int iNo)
    {
        int iMult=1;
        int iCnt=1;
        while(iCnt<=10)
        {
           
            iMult=iNo*iCnt;
            iCnt++;
            System.out.println("Table is"+iMult);
        }
        
 
    }
}
class program5
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.PrintTable(5);

    }

}
