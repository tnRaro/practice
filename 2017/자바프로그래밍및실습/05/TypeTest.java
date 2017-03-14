import java.util.Scanner;

public class TypeTest {
	public static void main(String[] args){
		new TypeTest();
	}
	TypeTest(){
		while(true){
			System.out.println("========\n학과\t학번\t이름을 입력하세요.");

			Scanner s = new Scanner(System.in);

			String department = s.next();
			int id = s.nextInt();
			String name = s.next();
			
			System.out.println("+------------+---------------+");
			System.out.println("| department | " + department + " |");
			System.out.println("| id         | " + id + " |");
			System.out.println("| name       | " + name + " |");
			System.out.println("+------------+---------------+");
		}
	}
}