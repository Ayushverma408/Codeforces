package codeforces123;

import java.util.Scanner;

public class Team {

	public static void main(String args[])
	{
		int testcases=0;
		int kid = 0;
		int count = 0;
		int ans = 0;
		Scanner sc = new Scanner(System.in);
		testcases = sc.nextInt();
		
		while(testcases>0)
		{
			for(int i=0; i<3;i++)
			{
				kid = sc.nextInt();
				if(kid == 1){count++;}
			}
			if(count >=2) {
				ans++;
				}
			count=0;
			testcases--;
		}
		System.out.print(ans);
	}
}
