//2. Write java program to accept directory name from user and write data of all files from that directory into one newly created file named as "Marvellous.txt".
import java.io.*;
import java.util.Scanner;

class program_2
{
    public static void main(String[] args)
    {
        try
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

            File[] files = dir.listFiles();

            if (files == null || files.length == 0)
            {
                System.out.println("Directory is empty");
                sobj.close();
                return;
            }

            File fileOpen = new File("Marvellous.txt");
            FileWriter fw = new FileWriter(fileOpen);

            for (int i = 0; i < files.length; i++)
            {
                File f = files[i];

                if (f.isFile())
                {
                    fw.write("File Name: " + f.getName() + "\n");
                    fw.write("\n");
                }
            }

            fw.close();
            sobj.close();

            System.out.println("Files and file names successfully copied!");
        }
        catch (IOException eobj)
        {
            System.out.println("An Error Occurred");
        }
    }
}