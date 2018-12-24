# GFX Over Serial
Turn an Arduino into a graphics card of sorts controlled by another host over serial

## Command Protocol
| 0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | Command                   |
| -- | -- | -- | -- | -- | -- | -- | -- | -- | ------------------------- |
| 01 | xx | yy | cc | cc |    |    |    |    | drawPixel                 |
| 02 | rr |    |    |    |    |    |    |    | setRotation               |
| 03 | ii |    |    |    |    |    |    |    | invertDisplay             |
| 04 | xx | yy | hh | cc | cc |    |    |    | drawFastVLine             |
| 05 | xx | yy | ww | cc | cc |    |    |    | drawFastHLine             |
| 06 | xx | yy | ww | hh | cc | cc |    |    | fillRect                  |
| 07 | cc | cc |    |    |    |    |    |    | fillScreen                |
| 08 | x0 | y0 | x1 | y1 | cc | cc |    |    | drawLine                  |
| 09 | xx | yy | ww | hh | cc | cc |    |    | drawRect                  |
| 0a | xx | yy | rr | cc | cc |    |    |    | drawCircle                |
| 0b |    |    |    |    |    |    |    |    | drawCircleHelper (Future) |
| 0c | xx | yy | rr | cc | cc |    |    |    | fillCircle                |
| 0d |    |    |    |    |    |    |    |    | fillCircleHelper (Future) |
| 0e | x0 | y0 | x1 | y1 | x2 | y2 | cc | cc | drawTriangle              |
| 0f | x0 | y0 | x1 | y1 | x2 | y2 | cc | cc | fillTriangle              |
| 10 | xx | yy | cc | cc | bg | bg | ss | CC | drawChar                  |
| 11 | xx | yy |    |    |    |    |    |    | setCursor                 |
| 12 | cc | cc |    |    |    |    |    |    | setTextColor              |
| 13 | cc | cc | bg | bg |    |    |    |    | setTextColor (With BG)    |
| 14 | ss |    |    |    |    |    |    |    | setTextSize               |
| 15 | ww |    |    |    |    |    |    |    | setTextWrap               |
| 16 | cc |    |    |    |    |    |    |    | cp437                     |
| 17 | ll | C0 | Cn |    |    |    |    |    | print                     |
| 18 | ll | C0 | Cn |    |    |    |    |    | println                   |
| 19 | ff |    |    |    |    |    |    |    | setFont                   |

## Font Values
| 0  | Font Name                 |
| -- | ------------------------- |
| 00 | Default Font              |
| 01 | FreeSans9pt7b             |
| 02 | FreeSans12pt7b            |
| 03 | FreeSans18pt7b            |
| 04 | FreeSans24pt7b            |
| 05 | FreeSansBold9pt7b         |
| 06 | FreeSansBold12pt7b        |
| 07 | FreeSansBold18pt7b        |
| 08 | FreeSansBold24pt7b        |
| 09 | FreeSansBoldOblique9pt7b  |
| 0a | FreeSansBoldOblique12pt7b |
| 0b | FreeSansBoldOblique18pt7b |
| 0c | FreeSansBoldOblique24pt7b |
| 0d | FreeSansOblique9pt7b      |
| 0e | FreeSansOblique12pt7b     |
| 0f | FreeSansOblique18pt7b     |
| 10 | FreeSansOblique24pt7b     |
| 11 | FreeSerif9pt7b            |
| 12 | FreeSerif12pt7b           |
| 13 | FreeSerif18pt7b           |
| 14 | FreeSerif24pt7b           |
| 15 | FreeSerifBold9pt7b        |
| 16 | FreeSerifBold12pt7b       |
| 17 | FreeSerifBold18pt7b       |
| 18 | FreeSerifBold24pt7b       |
| 19 | FreeSerifBoldItalic9pt7b  |
| 1a | FreeSerifBoldItalic12pt7b |
| 1b | FreeSerifBoldItalic18pt7b |
| 1c | FreeSerifBoldItalic24pt7b |
| 1d | FreeSerifItalic9pt7b      |
| 1e | FreeSerifItalic12pt7b     |
| 1f | FreeSerifItalic18pt7b     |
| 20 | FreeSerifItalic24pt7b     |
| 21 | FreeMono9pt7b             |
| 22 | FreeMono12pt7b            |
| 23 | FreeMono18pt7b            |
| 24 | FreeMono24pt7b            |
| 25 | FreeMonoBold9pt7b         |
| 26 | FreeMonoBold12pt7b        |
| 27 | FreeMonoBold18pt7b        |
| 28 | FreeMonoBold24pt7b        |
| 29 | FreeMonoBoldOblique9pt7b  |
| 2a | FreeMonoBoldOblique12pt7b |
| 2b | FreeMonoBoldOblique18pt7b |
| 2c | FreeMonoBoldOblique24pt7b |
| 2d | FreeMonoOblique9pt7b      |
| 2e | FreeMonoOblique12pt7b     |
| 2f | FreeMonoOblique18pt7b     |
| 30 | FreeMonoOblique24pt7b     |
| 31 | Org_01                    |
| 32 | Picopixel                 |
| 33 | Tiny3x3a2pt7b             |
| 34 | TomThumb                  |
