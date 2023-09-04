public class TestBall {
    public static void main(String[] args) {
        // Create Ball objects using different constructors
        Ball ball1 = new Ball(5.0, "Red");
        Ball ball2 = new Ball(3.0);
        Ball ball3 = new Ball("Blue");
        Ball ball4 = new Ball();

        // Display information about the balls
        System.out.println("Ball 1:");
        System.out.println(ball1);
        System.out.println();

        System.out.println("Ball 2:");
        System.out.println(ball2);
        System.out.println();

        System.out.println("Ball 3:");
        System.out.println(ball3);
        System.out.println();

        System.out.println("Ball 4:");
        System.out.println(ball4);
        System.out.println();

        // Test getter and setter methods
        System.out.println("Changing properties of Ball 1:");
        ball1.setRadius(6.0);
        ball1.setColor("Green");

        System.out.println("Updated Ball 1:");
        System.out.println("Radius: " + ball1.getRadius());
        System.out.println("Color: " + ball1.getColor());
        System.out.println("Volume: " + ball1.calculateVolume());
    }
}
