// Class derived from Arduboy2 to replace regular write() and drawChar()
// functions with restricted fast versions.

// The Y coodinate must be evenly divisible by 8.
// Only size 1, color WHITE, background BLACK, no auto end of line wrap.

/*
To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
*/

#include <Arduboy2.h>

class Arduboy2Ex : public Arduboy2
{
 public:
  static constexpr uint8_t characterWidth = 5;
  static constexpr uint8_t characterHeight = 8;

  virtual size_t write(uint8_t c);
  static void drawChar(int16_t x, int16_t y, unsigned char c);
};

