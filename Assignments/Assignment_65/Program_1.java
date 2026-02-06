/*
Enter the number:
79
Modified number is: 15
*/
import java.util.*;

class program_1
{
    public static void main(String[] A)
    {
        int iNo = 0, iMask = 0x1, iPos = 7;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iMask = iMask << (iPos - 1);

        if((iNo & iMask) == iMask)
        {
            iNo = iNo ^ iMask;   // OFF bit
        }

        System.out.println("Modified number is: " + iNo);
    }
}
