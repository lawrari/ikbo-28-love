public class Ball {
    private double radius;
    private String color;

    public Ball(double radius, String color) {
        this.radius = radius;
        this.color = color;
    }

    public Ball(double radius) {
        this.radius = radius;
        this.color = "Unknown";
    }

    public Ball(String color) {
        this.radius = 0.0;
        this.color = color;
    }

    public Ball() {
        this.radius = 0.0;
        this.color = "Unknown";
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public double calculateVolume() {
        return (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);
    }

    public String toString() {
        return "Ball Properties:\n" +
                "Radius: " + radius + "\n" +
                "Color: " + color + "\n" +
                "Volume: " + calculateVolume();
    }

}
