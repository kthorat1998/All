import java.lang.*;
import java.util.*;

class node
{
    public int data;
	public node next;  //struct node*next;
}
class SinglyLL
{
	public node head;
	public int Count;
	
	public SinglyLL()
	{
		head=null;
		Count=0;
	}
	public void InsertFirst(int No)
	{
		node newn=new node();
		newn.data=No;
		newn.next=null;
		
		if(head==null)
		{
			head=newn;
		}
		else
		{
			newn.next=head;
			head=newn;
		}
		Count++;
		
	}
	
	public void InsertLast(int No)
	{
		node newn=new node();
		
		newn.data=No;
		newn.next=null;
		
		if(head==null)
		{
			head=newn;
		}
		else
		{
			node temp=head;
			while(temp.next!=null)
			{
				temp=temp.next;
			}
			temp.next=newn;
		}
		Count++;
		
	}
	public void Display()
	{
		node temp=head;
		System.out.println("elements from linkedlist:");
		while(head!=null)
		{
			System.out.print("|"+temp.data+"|->");
			temp=temp.next;
		}
		System.out.println("NULL");
	}
	public int CountNode()
	{
		return Count;
	}	


   public void DeleteFirst()
{
	if(Count==0)
	{
		return;
	}
	else if(Count==1)
	{
		head=null;
	}
	else
	{
		node temp=head;
		head=head.next;
		temp=null;
	}
	Count--;
}

   public void DeleteLast()
{
	if(Count==0)
	{
		return;
	}
	else if(Count==1)
	{
		head=null;
	}
	else
	{
		node temp=head;
		while(temp.next.next!=null)
		{
			temp=temp.next;
		}
		head.next=null;
		
	}
	Count--;
}

public void InsertAtPos(int No,int Pos)
{
	if((Pos<1)||(Pos>Count+1))
	{
		return ;
	}
	if(Pos==1)
	{
		InsertFirst(No);
	}
	else if(Pos==Count+1)
	{
		InsertLast(No);
	}
	else
	{
		node newn=new node();
		
		newn.data=No;
		newn.next=null;
		node temp=head;
		
		for(int icnt=1;icnt<(Pos-1);icnt++)
		{
			temp=temp.next;
		}
		newn.next=temp.next;
		temp.next=newn;
		
		Count++;
	}
}
	public void DeleteAtPos(int Pos)
{
	if((Pos<1)||(Pos>Count))
	{
		return ;
	}
	if(Pos==1)
	{
		DeleteFirst();
	}
	else if(Pos==Count)
	{
		DeleteLast();
	}
	else
	{
		node temp=head;
		
		for(int icnt=1;icnt<(Pos-1);icnt++)
		{
			temp=temp.next;
		}
		temp=temp.next;
		
		Count--;
	}
 }
}



class Program114
{
	public static void main(String arg[])
	{
		SinglyLL obj=new SinglyLL();
		
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);
		
		obj.InsertLast(101);
		obj.InsertLast(111);
		
		obj.InsertAtPos(55,4);
		obj.Display();
		
		obj.DeleteAtPos(4);
		obj.Display();
		System.out.println("Number of nodes are:"+obj.CountNode());
		
		obj.DeleteFirst();
		obj.DeleteLast();
		
		obj.Display();
		
		System.out.println("Number of nodes are:"+obj.CountNode());
		
		
	}
	
}