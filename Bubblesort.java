import java.util.Scanner;
import java.util.Random;
import java.util.concurrent.TimeUnit;

public class Bubblesort
	{
	public static void main(String args[])
		{
		Scanner se = new Scanner(System.in);
		Random rand = new Random();
		long startTime = System.nanoTime();
		int temp,n;
		System.out.println("Enter the number of elements:");
		n=se.nextInt();
		int arr[]=new int[n];
		for(int i = 0;i<n;i++)
		{
		arr[i]=rand.nextInt(n);
		}
		for(int i =0;i<n;i++)
			{
			for(int j = i;j<n;j++)
				{
				if(arr[i]>arr[j])
					{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}
				}
			}
		for(int i=0;i<n;i++)
			{
			System.out.println(arr[i]);
			}
		long endTime = System.nanoTime();
		long durationInNano = (endTime - startTime);
		System.out.println(durationInNano);
		}
	}
