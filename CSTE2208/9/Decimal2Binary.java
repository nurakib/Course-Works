package labexam;

import java.util.Scanner;

public class Deci2Bi {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long sum = 0;
		int result;
		String num;
		num = sc.next();
		for(int i = 0; i < num.length(); i++){
			result = (int) (num.charAt(i) - '0') * (int) Math.pow(2, num.length() - i - 1);
			sum += result;
		}
		System.out.println(sum);
	}
}
