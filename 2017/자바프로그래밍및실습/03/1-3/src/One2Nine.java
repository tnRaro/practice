
public class One2Nine {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Main();
	}

}

class Main{
	public Main(){
		System.out.println(StringInt.join(" ", Range.generate(1, 9)));
	}
}

class StringInt {
	public static String join(String seperate, int[] arr){
		String ref = "";
		
		for(int i = 0; i < arr.length; i ++){
			if(i != 0){
				ref += seperate;
			}
			ref += Integer.toString(arr[i]);
		}
		
		return ref;
	}
}

class Range {
	public static int[] generate(int start, int length){
		int[] arr = new int[length];
		
		for(int i = 0; i < length; i ++){
			arr[i] = start + i;
		}
		
		return arr;
	}
}
