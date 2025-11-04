
class Logic
{
    public void CountEvenOddRange(int iNo)
    {
        int iCnt=0;
         int iEven=0;
        int iodd=0;
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       
        if(iCnt%2==0)
        { iEven++;
        }
        else
        { iodd++;
        }

    }


       
        System.out.println("Count of Even in N:"+iEven); 
        System.out.println("Count of Odd in N:"+iodd); 
    }
        

}
class program2
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.CountEvenOddRange(50);
    }
}
