package labexam;

public class IsPerfect {

	public static void main(String[] args) {
		for(int num = 1; num <= 1000; num++){
			if(Check(num)){
				System.out.println("The number " + num + " is a perfect number.");
			}
		}
	}


	public static Boolean Check(int num){
		int sum = 0;
		for(int fac = 1; fac < num; fac++){
			if(num % fac == 0){
				sum += fac;
			}
		}
		if(sum == num)
			return true;
		else
			return false;
	}
	
}
