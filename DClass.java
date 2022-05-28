import java.lang.*;
import java.util.*;

class Check
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("enter the number:");
		this.iNo=sobj.nextInt();
		if(iNo<0)
		{
			iNo=-iNo;
		}
	}
	public void DisplayClass()
	{
	if(iNo<35)
	{
		System.out.println("Fail");
	}
	else if((iNo>=35)&&(iNo<50))
	{
		System.out.println("first class");
	}
	else if((iNo>=50)&&(iNo<60))
	{
		System.out.println("second class");
	}
	else if((iNo>=60)&&(iNo<70))
	{
		System.out.println("first class");
	}
	else if(iNo>=70)
	{
		System.out.println("First class with distinction");
	}
	}
}
class DClass
{
	public static void main(String arg[])
	{
		Check cobj=new Check();
		cobj.Accept();
		cobj.DisplayClass();
	}
}