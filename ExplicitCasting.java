package master_javacore;

public class ExplicitCasting {
	public static void main(String[] args) {
		double doubleNum = 10.9;
		System.out.println((long)doubleNum);//10
		long bigNum = 100_000_000_000_000L;
		int n = (int)bigNum;
		System.out.println(n);
	}
}
