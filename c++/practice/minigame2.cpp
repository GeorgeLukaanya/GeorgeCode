#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int attempts = 0;

    // Create the window
    sf::RenderWindow window(sf::VideoMode(400, 200), "Guessing Game");

    // Set up the font
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Error loading font!" << std::endl;
        return -1;
    }

    // Set up the text
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);

    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) {
                    window.close();
                }
            }

            if (event.type == sf::Event::TextEntered) {
                if (event.text.unicode >= '0' && event.text.unicode <= '9') {
                    int digit = event.text.unicode - '0';
                    attempts++;

                    if (digit > secretNumber) {
                        text.setString("Too high! Try again.");
                    } else if (digit < secretNumber) {
                        text.setString("Too low! Try again.");
                    } else {
                        text.setString("Congratulations! You guessed the number in " + std::to_string(attempts) + " attempts.");
                    }
                }
            }
        }

        window.clear();

        // Display the instructions
        text.setString("Guess the number between 1 and 9:");
        window.draw(text);

        window.display();
    }

    return 0;
}
