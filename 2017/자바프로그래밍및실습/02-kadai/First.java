import java.util.Scanner;

public class First {
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);

		System.out.print("두 정수를 입력하세요>>");

		int a = s.nextInt();

		int b = s.nextInt();

		s.close();

		System.out.println(a + " + " + b + " = " + (a + b));
	}
}
