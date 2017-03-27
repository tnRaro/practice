import java.util.Scanner;

public class Third {
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);

		System.out.print("학점을 입력하세요>>");

		String grade = s.next();

		s.close();

		switch(grade){
			case "A":
			case "B":
			System.out.println("Excellent");
			break;
			case "C":
			case "D":
			System.out.println("Good");
			break;
			case "F":
			System.out.println("Bye");
			break;
		}
	}
}
