#include "Position.h"

Position::Position() {
}


Position::Position(int value) {
    this->value = value;
}


int Position::getValue() {
    return value;
}

void Position::setValue(int value) {
    this->value = value;
}
