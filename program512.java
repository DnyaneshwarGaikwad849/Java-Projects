 import java.util.*;
import java.io.*;

class program512
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        String Header = null;


        System.out.println("Enter the name of packed file that you want to create:");
        String PackFile=sobj.newLine();

        File Packobj=new File();

        boolean bRet=Packobj.createNewFile()
        if(bRet==false)
        {
            System.out.println("Unable to create packed file");
            return;
        }
        
        {
            bRet = fobj.isDirectory();
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                for(int i = 0; i< list.length; i++)
                {
                    if((list[i].getName()).endsWith(".txt"))
                    {
                        Header = list[i].getName() + " " + list[i].length();
                        for(int j=Header.length();j<100;j++)
                        System.out.println(Header);
                    }
                }
            }            
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
}