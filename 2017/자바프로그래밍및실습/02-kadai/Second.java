import java.util.Scanner;

public class Second {
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);

		System.out.print("논리 연산을 입력하세요>>");

		boolean a = s.nextBoolean();
		String op = s.next();
		boolean b = s.nextBoolean();

		s.close();

		switch(op){
			case "OR":
			System.out.println(a || b);
			break;
			case "AND":
			System.out.println(a && b);
			break;
		}
	}
}
