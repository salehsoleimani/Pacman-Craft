#include "Form.h"
#include "GameObject.h"

Form::Form(string mapFileName) : mapFileName(mapFileName) {
    initGrid();
}

void Form::clear(sf::RenderWindow *window) {
    for (auto wall: walls) wall->render(window);
}

Form::~Form() {
    for (auto wall: walls) delete wall;
}

void Form::initGrid() {
    File file(mapFileName);
    file.open(ios::in);

    string line;
    for (int i = 0; i < 26; ++i) {
        line = file.getline();
        for (int j = 0; j < Dimensions::WALL_COL; ++j) {
            switch (line[j]) {
                case 'W': // WALL
                    board[i][j] = GameObject::ObjectType::WALL;
                    break;
                case 'P': //PACMAN
                    board[i][j] = GameObject::ObjectType::PACMAN;
                    break;
                case 'F': //Normal Food
                    board[i][j] = GameObject::ObjectType::FOOD;
                    break;
                case 'S' ://Power food
                    board[i][j] = GameObject::ObjectType::FOOD_POWER;
                    break;
                case 'E':
                    board[i][j] = GameObject::ObjectType::EMPTY;
                    break;
            }
        }
    }

    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < Dimensions::WALL_COL; ++j) {
            if (board[i][j] == GameObject::ObjectType::WALL)
                walls.push_back(new Wall({j * Dimensions::wallSize.x,
                                          i * Dimensions::wallSize.y}));
        }
    }
}

const array<array<GameObject::ObjectType, 19>, 26> &Form::getBoard() const {
    return board;
}
