import java.io.File ;
import java.util.Scanner;

class program_4
{   
    public static void main(String[] args) 
    {
        int iCnt = 0 ;
        int iFile = 0 ;
        int iDir = 0 ;
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
                    iDir++ ;
                }

                if(fArr[iCnt].isFile() == true)
                {
                    iFile++ ;
                }
                
            }
            System.out.println("Total Files in Directory : "+iFile);
            System.out.println("Total Sub Directories in directory : "+iDir);
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