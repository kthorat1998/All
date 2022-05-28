import java.lang.*;
import java.util.*;

class Check
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
        System.out.println("enter the number");
		
		this.iNo=sobj.nextInt();
	}
	public int CheckEven()
	{
		if((iNo%2)==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
class Even
{
	public static void main(String arg[])
	{ int iRet=0;
		Check cobj=new Check();
		cobj.Accept();
		
		iRet=cobj.CheckEven();
		if(iRet==1)
		{
			System.out.println("given number is even");
		}
		else
		{
		   System.out.println("given number is odd");
		}
	}
	
}