package labexam;
import java.util.LinkedList;
import java.util.Scanner;

public class Problem_1 {
	public static void main(String[] args) {
		LinkedList <Integer> stack = new LinkedList<Integer>();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a integer number: ");
		int num = sc.nextInt();
		while(num != 0){
			stack.push(num % 10);
			num /= 10;
		}
		while(!stack.isEmpty()){
			System.out.print(stack.pop() + " ");
		}
	}
}
