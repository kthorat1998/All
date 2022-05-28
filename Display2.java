import java.lang.*;
import java.util.*;
 class Pattern
 {
	 private int iNo;
	 
	 public void Accept()
	 {
		 Scanner sobj=new Scanner(System.in);
		 System.out.println("enter the number");
		 this.iNo=sobj.nextInt();
		 
	}
	public void Display()
	{
		int icnt=0;
		for(icnt=1;icnt<=iNo;icnt++)
		{
			System.out.print("\t"+icnt);
		}
	}
 }
class Display2
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		pobj.Accept();
		pobj.Display();
	}
}