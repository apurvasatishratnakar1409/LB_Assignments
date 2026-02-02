//4. Write a program to accept directory name from user and write data of all files along with its name into one newly created file named as "Marvellous.txt"
import java.io.*;
import java.util.Scanner;

class program_4
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
                    FileReader fr = new FileReader(f);
                    int ch;
                    while((ch = fr.read()) != -1)
                    {
                        fw.write(ch);
                    }

                    fw.write("\n\n");
                }
            }

            fw.close();
            sobj.close();

            System.out.println("File Names and files data successfully copied!");
        }
        catch (IOException eobj)
        {
            System.out.println("An Error Occurred");
        }
    }
}