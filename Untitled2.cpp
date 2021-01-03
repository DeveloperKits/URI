import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

       Scanner input = new Scanner(System.in);

        float[][] M = new float[12][12];
        float sum = 0;

        int L = input.nextInt();

        char C = input.next().charAt(0);

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                M[i][j] = input.nextFloat();
            }
        }

        if (L >= 0 && L <= 12) {
            for (int j = 0; j < 12; j++) {
                sum += M[L][j];
            }

            if (C == 'S') {
                System.out.printf("%.1f\n",sum);
            } else if (C == 'M') {
                System.out.printf("%.1f\n", sum / 12);
            }
        }

    }

}
