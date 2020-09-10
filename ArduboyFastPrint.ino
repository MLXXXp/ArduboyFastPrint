// Arduboy sketch to test overloads for fast printing

/*
To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
*/

#include "Arduboy2Ex.h"

Arduboy2Ex arduboy;

void setup() {
  arduboy.begin();
  arduboy.clear();
  arduboy.println(F("Testing... 123\nLine2--- 456"));
  arduboy.print(123.5F);
  arduboy.display();
}

void loop() {
  arduboy.idle();
}
