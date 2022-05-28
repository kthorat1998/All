import java.lang.*;
import java.util.*;

class Factors
{
	private int iNo1;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the number:");
		this.iNo1=sobj.nextInt();
		
	}
	public void DisplayFactor()
	{   int icnt=0;
		for(icnt=1;icnt<iNo1;icnt++)
		{
			if((iNo1%icnt)==0)
			{
				System.out.print(icnt+"\t");
			}
		}
		System.out.println("\n");
	}
	   public int CountFactor()
	{   int icnt=0,CountFact=0;
		for(icnt=1;icnt<iNo1;icnt++)
		{
			if((iNo1%icnt)==0)
			{
				CountFact++;
			}
		}
		return CountFact;
	}
} 

class Factor
{
	public static void main(String arg[])
	{int iRet=0;
		Factors fobj=new Factors();
		fobj.Accept();
		fobj.DisplayFactor();
		iRet=fobj.CountFactor();
		System.out.println("number of factors are:\n"+iRet);
	}
}