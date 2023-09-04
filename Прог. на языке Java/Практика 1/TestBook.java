public class TestBook {
    public static void main(String[] args) {
        // Create Book objects
        Book book1 = new Book("The Great Gatsby", "F. Scott Fitzgerald");
        Book book2 = new Book("To Kill a Mockingbird", "Harper Lee");

        // Display information about the books
        System.out.println("Book 1:");
        book1.displayInfo();
        System.out.println();

        System.out.println("Book 2:");
        book2.displayInfo();
        System.out.println();

        // Test getter and setter methods
        System.out.println("Changing properties of Book 1:");
        book1.setTitle("New Title");
        book1.setAuthor("New Author");

        System.out.println("Updated Book 1:");
        System.out.println("Title: " + book1.getTitle());
        System.out.println("Author: " + book1.getAuthor());
    }
}
