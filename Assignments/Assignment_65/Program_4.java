/*
Enter the number:
137
Enter first position:
7
Enter second position:
10
Updated Number : 713
*/
import java.util.*;

class program_4
{
    public static void main(String[] A)
    {
        int iNo = 0, iPos1 = 0, iPos2 = 0;
        int iMask1 = 0x1, iMask2 = 0x1, iMask = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        System.out.println("Enter first position:");
        iPos1 = sobj.nextInt();

        System.out.println("Enter second position:");
        iPos2 = sobj.nextInt();

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        iMask = iMask1 | iMask2;

        iNo = iNo ^ iMask;

        System.out.println("Updated Number : " + iNo);
    }
}
