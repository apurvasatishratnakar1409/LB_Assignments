//5. Write java program to accept directory name from user and display all the names of files from that directory and size of each file on screen
import java.io.File;
import java.util.Scanner;

class program5
{
    public static void main(String[] args)
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

        if (files == null || files.length == 0)
        {
            System.out.println("Directory is empty");
        }
        else
        {
            System.out.print("Files in directory " + dirName + ":\n");

            for (int i = 0; i < files.length; i++)
            {
                File f = files[i];
                if (f.isFile())
                    System.out.println(f.getName() + " (" + f.length() + " bytes)");
            }
        }

        sobj.close();
    }
}