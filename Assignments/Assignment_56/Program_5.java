//5. Write java program to accept directory name froom user and display all names of files from that directory.

import java.io.File;
import java.util.Scanner;

class program_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirName = sobj.nextLine();

        File dir = new File(dirName);

        if (!dir.exists() || !dir.isDirectory())
        {
            System.out.println("Invalid directory");
            sobj.close();
            return;
        }

        File files[] = dir.listFiles();

        System.out.println("Files in directory:");

        for (int i = 0; i < files.length; i++)
        {
            File f = files[i];
            System.out.println(f.getName());
        }
        
        sobj.close();
    }
}