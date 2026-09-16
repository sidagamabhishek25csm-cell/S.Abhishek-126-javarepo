                                                                                 public class Test {
    public static void main(String[] args) {

        int a = 10;
        int b = 20;

        // Using &
        if ((a++ == 10) & (b++ == 20)) {
            System.out.println(a); // 11
            System.out.println(b); // 21
        }

        // Reset values
        a = 10;
        b = 20;

        // Using ||
        if ((a++ == 10) || (b++ == 20)) {
            System.out.println(a); // 11
            System.out.println(b); // 20
        }

        // Reset values
        a = 10;
        b = 20;

        // Using &&
        if ((a++ == 10) && (b++ == 20)) {
            System.out.println(a); // 11
            System.out.println(b); // 21
        }

        // Reset values
        a = 10;
        b = 20;

        // Using |
        if ((a++ == 10) | (b++ == 20)) {
            System.out.println(a); // 11
            System.out.println(b); // 21
        }
    }
}