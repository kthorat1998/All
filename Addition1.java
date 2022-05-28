import java.lang.*;
import java.util.*;

class Addition
{
	private int iNo1;
	private int iNo2;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the number");
		
		this.iNo1=sobj.nextInt();
		this.iNo2=sobj.nextInt();
	}
	public int Summation()
	{
		int ians=iNo1+iNo2;
		return ians;
	}
}	
class Addition1
{
	public static void main(String  arg[])
	{ int iRet=0;
		Addition aobj=new Addition();
		aobj.Accept();
		iRet=aobj.Summation();
		
		System.out.println("Addition is:"+iRet);
	}
}
