
import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow;
	private  int iCol;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the number of rows:");
		iRow=sobj.nextInt();
		System.out.println("enter the number of Col:");
		iCol=sobj.nextInt();
	}
	public void Display()
	{ char ch='A';
	int j=0,i=0;
		for(j=1;j<=iCol;ch++,j++)
		{  
			for(i=1;i<=iRow;i++)
			{
				System.out.print(ch+"	");
				
			}
			System.out.print("\n");
		     
		}
	}
}
class Program89
{
	public static void main(String arg[])
	{
		Pattern obj=new Pattern();
		
		obj.Accept();
		obj.Display();
		
		
		obj=null;
		
	}
}