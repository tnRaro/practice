public class A {
	public static void main(String[] args){
		new A();
	}

	public void A(){
		System.out.println(createBorder("20160678\t양호진"));
	}

	private String createBorder(String s){
		String header = "+";

		for(int i = 0; i < s.length() + 2; i ++){
			header += "-";
		}

		header += "+";

		return header + "\n| " + s + " |\n" + header;
	}
}
