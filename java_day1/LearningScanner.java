/*
 * This program asks the user to enter his/her name
 * using Scanner API
 */

package java_day1;

import java.util.Scanner;		// Import scanner API

public class LearningScanner
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Please enter your name: ");
		String name = scanner.nextLine();
		
		System.out.println("Your name is " + name);
		
		scanner.close();
	}
}
