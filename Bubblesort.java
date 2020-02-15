import java.util.Scanner;
import java.util.Random;
import java.util.concurrent.TimeUnit;

public class Bubblesort
	{
	public static void main(String args[])
		{
		Scanner se = new Scanner(System.in);
		Random rand = new Random();
		int temp,n;
		long startTime,endTime;
		System.out.println("Enter the number of elements:");
		n=se.nextInt();
		int arr[]=new int[n];
		for(int i = 0;i<n;i++)
		{
		arr[i]=rand.nextInt(n);
		}
		startTime = System.nanoTime();
		for(int i =0;i<n;i++)
			{
			for(int j = 0;j<n-i-1;j++)
				{
				if(arr[i]>arr[j])
					{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}
				}
			}
		endTime = System.nanoTime();
		for(int i=0;i<n;i++)
			{
			System.out.println(arr[i]);
			}
		long durationInNano = (endTime - startTime);
		System.out.println(durationInNano);
		long durationInMillis = TimeUnit.NANOSECONDS.toMillis(durationInNano);
		System.out.println(durationInMillis);
		}
	}
