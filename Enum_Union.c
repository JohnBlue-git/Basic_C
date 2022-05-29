/*
Auther: John Blue
Time: 2022/6
Platform: atom
Object: display Enum and Union

Enum
is a representation of user defined sequence

Union
is a structure whose max space is only the maximum size of its member variables
one type of variable is ues each time for saving space

Usaully, Enum and Union will work togather
*/

#include <stdio.h>

enum State {character, number, str};

union StateMachine {
    char character;
    int number;
    char* str;
};

int main() {
    enum State state;
    union StateMachine machine;

    state = character;
    machine.character = 'J';

    if (state == character) {
      printf("character = %c", machine.character);
    }
    else if (state == character) {
      printf("number = %d", machine.number);

    }
    else if (state == character) {
      printf("string = %s", machine.str);
    }
}
