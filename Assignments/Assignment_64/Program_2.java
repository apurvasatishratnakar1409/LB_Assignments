/*
Enter the number:
393216
5th and 18th bits are OFF

Enter the number:
393232
5th and 18th bits are ON
*/
import java.util.*;

class program_2
{
    public static void main(String[] A) 
    {
        int iNo = 0, iMask = 0, iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iMask = 0x00020010;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("5th and 18th bits are ON");
        }
        else
        {
            System.out.println("5th and 18th bits are OFF");
        }
    }
}
