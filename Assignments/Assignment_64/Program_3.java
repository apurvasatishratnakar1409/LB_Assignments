/*
Enter the number:
448
7th, 8th and 9th bits are ON

Enter the number:
564
7th, 8th and 9th bits are OFF
*/
import java.util.*;

class program_3
{
    public static void main(String[] A) 
    {
        int iNo = 0, iMask = 0, iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iMask = 0x000001C0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("7th, 8th and 9th bits are ON");
        }
        else
        {
            System.out.println("7th, 8th and 9th bits are OFF");
        }
    }
}
