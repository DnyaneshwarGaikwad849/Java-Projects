
  // import java.util.*;
     import java.util.Scanner;
class Program5
{
  public static void main(String[] arg)
  {
    Scanner sobj=new Scanner(System.in);
    int no1=0;
    int no2=0;
    int ans=0;

    
    System.out.println("Enter first number:");
    no1=sobj.nextInt();
 
    System.out.println("Enter Second number:");
    no2=sobj.nextInt();
    
    ans=no1+no2;
    

    System.out.println("Addition is:"+ans);
    



  }
}