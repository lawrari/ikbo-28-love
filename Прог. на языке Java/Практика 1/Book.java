public class Book {
    private String title;
    private String author;

    // Constructor to create a book with title and author
    public Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    // Getter method to retrieve the title of the book
    public String getTitle() {
        return title;
    }

    // Setter method to set the title of the book
    public void setTitle(String title) {
        this.title = title;
    }

    // Getter method to retrieve the author of the book
    public String getAuthor() {
        return author;
    }

    // Setter method to set the author of the book
    public void setAuthor(String author) {
        this.author = author;
    }

    // Override the toString method to provide a string representation of the book
    @Override
    public String toString() {
        return "Book Information:\n" +
                "Title: " + title + "\n" +
                "Author: " + author;
    }

    // Method to display information about the book
    public void displayInfo() {
        System.out.println(toString());
    }
}
