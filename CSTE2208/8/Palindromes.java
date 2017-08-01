package labexam;
import java.util.Scanner;

public class s {
	public static void main(String[] args) {
		System.out.print("Enter an Integer : ");
		Scanner sc = new Scanner(System.in);
		int num, rev = 0, tmp;
		num = sc.nextInt();
		tmp = num;
		while(tmp != 0){
			rev = rev * 10 + tmp % 10;
			tmp = tmp / 10;
		}
		if(num == rev) System.out.println("Yes");
		else System.out.println("No");
	}
}
