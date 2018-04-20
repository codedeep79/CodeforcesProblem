// Link: http://codeforces.com/problemset/problem/691/A

import java.util.Scanner;

public class FashionInBerland {
	public static void main(String[] args)
	{
		
		int n, temp = 0, button;
		Scanner input = new Scanner(System.in); 
		n = input.nextInt();
		for (int i = 0; i < n; ++i)
		{
			button = input.nextInt();
			if (button ==  1)
				++temp;
		}
		
		if (temp == 1 && n == 1)
		{
			System.out.println("YES");
		}
		
		if (temp == (n-1))
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}
	}
}
