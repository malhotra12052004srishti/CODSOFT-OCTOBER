#include <iostream>
#include <string>
#include <vector>

// Structure to represent a movie
struct Movie {
    std::string title;
    std::string genre;
    int duration;
    int availableSeats;
    double ticketPrice;
};

// Function to display a list of movies
void displayMovies(const std::vector<Movie>& movies) {
    std::cout << "Available Movies:\n";
    for (const Movie& movie : movies) {
        std::cout << "Title: " << movie.title << "\n";
        std::cout << "Genre: " << movie.genre << "\n";
        std::cout << "Duration: " << movie.duration << " minutes\n";
        std::cout << "Available Seats: " << movie.availableSeats << "\n";
        std::cout << "Ticket Price: Rs." << movie.ticketPrice << "\n";
        std::cout << "------------------------\n";
    }
}

int main() {
    std::vector<Movie> movies = {
        {"Movie 1", "Action", 120, 100, 100.0},
        {"Movie 2", "Comedy", 90, 80, 180.0},
        {"Movie 3", "Drama", 150, 120, 120.0}
    };

    std::cout << "Welcome to the Movie Ticket Booking System!\n";

    while (true) {
        displayMovies(movies);

        int choice;
        std::cout << "Enter the number of the movie you want to book (0 to exit): ";
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "Thank you for using our system. Goodbye!\n";
            break;
        } else if (choice < 1 || choice > movies.size()) {
            std::cout << "Invalid choice. Please enter a valid movie number.\n";
        } else {
            int numTickets;
            std::cout << "Enter the number of tickets you want to book: ";
            std::cin >> numTickets;

            Movie& selectedMovie = movies[choice - 1];

            if (numTickets <= selectedMovie.availableSeats) {
                double totalCost = numTickets * selectedMovie.ticketPrice;
                std::cout << "Total Cost: Rs." << totalCost << "\n";
                selectedMovie.availableSeats -= numTickets;
                std::cout << "Tickets booked successfully!\n";
            } else {
                std::cout << "Sorry, there are not enough available seats for your request.\n";
            }
        }
    }

    return 0;
}
