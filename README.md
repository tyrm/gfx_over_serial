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
