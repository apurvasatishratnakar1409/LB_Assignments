import java.io.File ;
import java.util.Scanner;

class program_5
{   
    public static void main(String[] args) 
    {
        int iCnt = 0 ;
        System.out.println("Enter the Directory Name : ");
        Scanner sobj = new Scanner(System.in);

        String Dname = sobj.nextLine();

        File file =   new File(Dname);

        if (file.isDirectory() == true)
        {
            File [] fArr = file.listFiles() ;

            for (iCnt = 0 ; iCnt < fArr.length ; iCnt++)
            {

                if(fArr[iCnt].isFile() == true)
                {
                    System.out.println("---------------------------------------------------------------");
                    System.out.println("File Name : "+fArr[iCnt].getName());
                    System.out.println("File Path : " + fArr[iCnt].getAbsolutePath());
                    System.out.println("---------------------------------------------------------------");
                    System.out.println();
                }
                
            }
        }
        else
        {
            System.out.println("Invalid Directory !!");
            sobj.close(); 
            return ;
        }
        sobj.close();

    }
}