public class TestAuthor {
    public static void main(String[] args) {
        // Create an Author object
        Author author = new Author("John Doe", "john@example.com", 'M');

        // Display author information
        System.out.println("Author Information:");
        System.out.println("Name: " + author.getName());
        System.out.println("Email: " + author.getEmail());
        System.out.println("Gender: " + author.getGender());

        // Test toString() method
        System.out.println("\nAuthor:");
        System.out.println(author);

        // Update author information using setters
        author.setEmail("jane@example.com");

        // Display updated author information
        System.out.println("\nUpdated Author Information:");
        System.out.println("Name: " + author.getName());
        System.out.println("Email: " + author.getEmail());
        System.out.println("Gender: " + author.getGender());

        // Test toString() method after updates
        System.out.println("\nUpdated Author:");
        System.out.println(author);
    }
}