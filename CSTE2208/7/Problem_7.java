package labexam;
import java.util.Scanner;
public class Problem_7 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cnt = 10, num, ans = 0;
		while(cnt != 0){
			num = sc.nextInt();
			if(num > ans)
				ans = num;
			cnt--;
		}
		System.out.println(ans);
	}
}
