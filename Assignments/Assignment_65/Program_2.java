/*
Enter the number:
577
Modified number is: 1
*/
import java.util.*;

class program_2
{
    public static void main(String[] A)
    {
        int iNo = 0, iMask1 = 0x1, iMask2 = 0x1, iMask = 0 , iPos1 = 7 , iPos2 = 10;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        iMask = iMask1 | iMask2;

        iNo = iNo & (~iMask);   // OFF both bits

        System.out.println("Modified number is: " + iNo);
    }
}
