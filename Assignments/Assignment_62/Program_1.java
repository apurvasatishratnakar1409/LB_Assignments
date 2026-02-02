//1. Write a program in Java which accepts file name from user and display total number of bytes read from that file.

import java.util.Scanner;
import java.io.*;

class program_1
{
    public static void main(String A[]) throws Exception
    {
        String FileName = null;
        File fobj = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file : ");
        FileName = sobj.nextLine();

        fobj = new File(FileName);

        if(!fobj.exists() || !fobj.isFile())
        {
            System.out.println("Enter a Valid File Name");
            return;
        }

        
        FileInputStream fisobj = new FileInputStream(fobj);
        int byteRead = 0;

        while(fisobj.read() != -1)
        {
            byteRead++;
        }
        System.out.println("Total number of bytes read from '" + FileName + "': " + byteRead);
        
        fisobj.close();
        sobj.close();
    }

}
