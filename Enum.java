
enum Level {
    LOW,
    MEDIUM,
    HIGH
}

public class Enum {
    public static void main(String[] args) {
        Level myVar = Level.MEDIUM;
        switch (myVar) {
            case LOW:
                System.out.println("Low level");
                break;
            case MEDIUM:
                System.out.println("Medium level");
                break;
            case HIGH:
                System.out.println("HIGH Level");
        }
        // Loop Through an Enum
        for (Level x : Level.values()) {
            System.out.println(x);
        }
    }
}
