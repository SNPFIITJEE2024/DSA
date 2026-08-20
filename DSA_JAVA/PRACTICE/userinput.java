import java.util.Scanner;
public class userinput {
	public static void main(String[] args){
		System.out.println("userinput data and operation on them:");
			Scanner scanner = new Scanner(System.in);
				

			System.out.println("enter byte value:");
			byte byteVar = scanner.nextByte();

			System.out.println("enter short value:");
			short shortVar = scanner.nextShort();	
	
			System.out.println("enter int value:");
			int intVar = scanner.nextInt();

			System.out.println("enter long value:");
			long longVar = scanner.nextLong();

			System.out.println("enter float value:");
			float floatVar = scanner.nextFloat();

			System.out.println("enter double value:");
			double doubleVar = scanner.nextDouble();

			System.out.println("enter char value:");
			char charVar = scanner.next().charAt(0);

			System.out.println("enter Boolean value:");
			boolean boolVar = scanner.nextBoolean();

			System.out.println("\n your intputs:");
			System.out.println("byte:" + byteVar);
			System.out.println("short:" + shortVar);
			System.out.println("int: " + intVar);
        		System.out.println("long: " + longVar);
        		System.out.println("float: " + floatVar);
        		System.out.println("double: " + doubleVar);
        		System.out.println("char: " + charVar);
        		System.out.println("boolean: " + boolVar);


			scanner.close();
}
}