package master_javacore;

public class ImplicitCasting {
	// the target type is wider than the source type. 
	// byte -> short -> int -> long -> float -> double
	// char -> int 
	
	public static void main(String[] args) {
		long bigLong = 1_200_000_000L;
		float bigFloat = bigLong;
		System.out.println(bigFloat);
		//output 12E9 
	
	}
}
