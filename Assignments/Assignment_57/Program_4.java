//4. Write java program to accept file name from user calculate checksum of that file and display on screen.

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;
class program_4
{
    public static void main(String A[]) 
    {
        try
        {
            Scanner sobj = new Scanner(System.in);
            System.out.print("Enter the File name: ");
            String FileName = sobj.nextLine();
            
            File f = new File(FileName);
            
            if(!f.exists() || !f.isFile())
            {
                System.out.println("Wrong Input\n");
                return;
            }

            FileInputStream fis = new FileInputStream(f);

            int data = 0;
            long checksum = 0;

            while((data = fis.read())!=-1)
            {
                checksum = checksum + data;
            }

            System.out.println("CheckSum of this file : "+checksum);

            fis.close();
            sobj.close();
        }
        catch(IOException eobj)
        {
            System.out.println("Error Occurred while calculating checksum");
        }
    }
    
}