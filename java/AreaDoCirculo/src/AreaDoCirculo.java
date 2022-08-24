import java.util.Scanner;
import java.util.Locale;

public class AreaDoCirculo {
	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double area, pi, raio;
		pi = 3.14159;
		
		raio = sc.nextDouble();
		
		area = raio * 2 * pi;
		
		System.out.println("A=" + String.format("%.4f", area));

	}

}
