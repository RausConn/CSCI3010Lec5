#ifndef _SUIT_H_ // this is the header guard
#define _SUIT_H_

// Create an enum class, Suit to represent the suit in a deck of cards
class Suit {
public:
    enum class suit {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };
};

// Create a struct, Card, to represent a card in a deck of cards.  You must
// use your Suit enum.  You may use any other values that you choose.
struct Card {
    Suit::suit suit;
    int value;
};

// Override operator== in your Card struct.
bool operator==(Card c1, Card c2);

// Design a class, Deck.  Write down the fields and methods that this class should have.  
// Don’t implement them!
class Deck {
public:
    // Constructor
    Deck();
    // Destructor
    ~Deck();
    // Draw card from deck
    Card Draw();
    // Shuffle deck
    void Shuffle();
    // Print deck
    void PrintDeck();

private:
    std::vector<Card> deck_;
};

#endif // _SUIT_H_
