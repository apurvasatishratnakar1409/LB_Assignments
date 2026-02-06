/*
Enter the number:
2147483649
1st and 32nd bits are ON

Enter the number:
4567653487
1st and 32nd bits are OFF
*/
import java.util.*;

class program_5
{
    public static void main(String[] A) 
    {
        int iNo = 0, iMask = 0, iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iMask = 0x80000001;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("1st and 32nd bits are ON");
        }
        else
        {
            System.out.println("1st and 32nd bits are OFF");
        }
    }
}
