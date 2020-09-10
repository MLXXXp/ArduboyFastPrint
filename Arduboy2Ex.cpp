/*
To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
*/

#include "Arduboy2Ex.h"

size_t Arduboy2Ex::write(uint8_t c)
{
  if (c == '\r') // carriage return
  {
    // ignore
  }
  else if (c == '\n') // newline
  {
    cursor_x = 0;
    cursor_y += characterHeight;
  }
  else
  {
    drawChar(cursor_x, cursor_y, c);
    cursor_x += (characterWidth + 1);
  }
  return 1;
}

void Arduboy2Ex::drawChar(int16_t x, int16_t y, unsigned char c)
{
  const uint8_t* bitmap = &font5x7[c * characterWidth];

  uint8_t* buffer = &sBuffer[y / characterHeight * WIDTH + x];

  for (uint8_t i = 0; i < characterWidth; ++i)
  {
    *(buffer++) = pgm_read_byte(bitmap++);
  }

  *buffer = 0;
}

