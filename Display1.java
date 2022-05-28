
import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
      int icnt=0;
	  for(icnt=1;icnt<=iNo;icnt++)
	  {
		  System.out.print("*\t");
	  }
    }

       
}

class Display1
{
    public static void main(String arg[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

    }
}