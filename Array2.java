import java.lang.*;
import java.util.*;

class Array2
{
	public static void main(String arg[])
	{
		int i=0,j=0;
		int arr[][]=new int[3][];
		
		arr[0]=new int[3];
		arr[1]=new int[5];
		arr[2]=new int[2];
		
		for(i=0;i<arr.length;i++)
		{
			for(i=0;j<arr[i].length;j++)
			{
				System.out.println(arr[i][j]);
			}
		}
	}
}	