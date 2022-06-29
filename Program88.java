/*
*
*	*
*	*	*
*	*	*	*
*	*	*
*	*
*
*/
import java.lang.*;
import java.util.*;


class Pattern
{
	private int iRow;
	private int iCol;
	
	public Pattern(int a,int b)
	{
		this.iRow=a;
		this.iCol=b;
	}
	public void Display()
	{
		int i=0,j=0;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if(i>=j)
				{
					System.out.print("*\t");
				}
			}
			System.out.println("\n");
		}
		for(i=iRow-1;i>=1;i--)
		{
			for(j=1;j<=iCol;j++)
			{	
		     if(i>=j)
			{
				System.out.print("*\t");
			}
			
		   }
		   System.out.println("\n");
		}
	}
}
class Program88
{
	public static void main(String arg[])
	{
		int iValue1=0,iValue2=0;
		System.out.println("enter number of rows");
		
		Scanner sobj=new Scanner(System.in);
		iValue1=sobj.nextInt();
		
		System.out.println("enter number of Col");
		iValue2=sobj.nextInt();
		
		Pattern obj=new Pattern(iValue1,iValue2);
		
		obj.Display();
		
		obj=null;
	}
}