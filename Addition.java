import java.lang.*;

class Summation
{
	public int iNo1;
	public int iNo2;
	
	public Summation(int a,int b)
	{
		this.iNo1=a;
		this.iNo2=b;
	}
	 public int Addition()
	{
		int ans=iNo1+iNo2;
		return ans;
	}
}

class Addition
{
	public static void main(String arg[])
	{
		Summation sobj=new Summation(10,20);
		
		int iRet=sobj.Addition();
		System.out.println(iRet);
	}
}