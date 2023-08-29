package master_javacore;

public class BoxingAndUnBoxing {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int primitive = 1010;
		Integer reference = Integer.valueOf(primitive); // boxing
		int anotherPrimitive = reference.intValue();// unboxing
		double primitiveDouble = 9.8;
		Double wrapperDouble = primitiveDouble;//autoboxing
		double anotherPrimitiveDouble = wrapperDouble;//auto-unboxing
		
		//create wrapper objects using special methods:
		Long longVal = Long.parseLong("1000");      // a Long from "1000"
		Long anotherLongVal = Long.valueOf("2000"); // a Long from "2000"
		
		//reference: https://hyperskill.org
	}

}
