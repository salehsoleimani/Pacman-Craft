#ifndef PACMAN_CLYDE_H
#define PACMAN_CLYDE_H

#include "Ghost.h"

class Clyde : public Ghost {
public:
    Clyde(sf::Vector2f, GameForm *);

    ~Clyde();

    void update(sf::Time) override;

};


#endif //PACMAN_CLYDE_H
