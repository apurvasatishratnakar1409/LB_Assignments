import java.io.File ;
import java.util.Scanner;

class program_3
{   
    public static void main(String[] args) 
    {
        int iCnt = 0 ;
        int iCount = 0 ;
        System.out.println("Enter the Directory Name : ");
        Scanner sobj = new Scanner(System.in);

        String Dname = sobj.nextLine();

        File file =   new File(Dname);

        if (file.isDirectory() == true)
        {
            File [] fArr = file.listFiles() ;

            for (iCnt = 0 ; iCnt < fArr.length ; iCnt++)
            {
                if(fArr[iCnt].isDirectory() == true)
                {
                    System.out.println("File Name : " + fArr[iCnt].getName());
                    iCount++ ;
                }
                
            }
            System.out.println("Total Files in Directory : "+iCount);
            sobj.close();
        }
        else
        {
            System.out.println("Invalid Directory !!");
            sobj.close(); 
            return ;
        }
        

    }
}