#include <RGBmatrixPanel.h>

#define CLK  13
#define OE   1  // TX
#define LAT  0  // RX
#define A   A5
#define B   A4
#define C   A3
#define D   A2

// the RGB data pins on featherwing, must be on same PORT as CLK
uint8_t rgbpins[] = { 6,5,9,11,10,12 };
RGBmatrixPanel Matrix(A, B, C, D, CLK, LAT, OE, false, 64, rgbpins);

// serial buffer 
String sBuffer = "";
bool debug = true;

void setup() {
  Serial.begin(2000000);
  while (!Serial) {}
  
  sBuffer.reserve(255);
  
  Matrix.begin();
  Matrix.setRotation(1);

}

void loop() {
  if (Serial.available() > 0) {
    char inChar = (char)Serial.read();
    
    if (inChar == 13 || inChar == 10) {
      ProcessBuffer();
    }
    else {
      sBuffer += inChar;
    }
  }
}

String FormatHex8(uint8_t data) {
  String value = "";
  if (data<0x10) {value = value + "0";} 
  value = value + String(data, HEX);

  return value;
}

void ProcessBuffer() {
  String command = sBuffer.substring(0, 2);
  int commandVal = StrHexToUint8(command);

  switch(commandVal) {
    case 0x01:
      DrawPixel(sBuffer);
      break;
    case 0x02:
      SetRotation(sBuffer);
      break;
    case 0x03:
      InvertDisplay(sBuffer);
      break;
    case 0x04:
      DrawFastVLine(sBuffer);
      break;
    case 0x05:
      DrawFastHLine(sBuffer);
      break;
    case 0x06:
      FillRect(sBuffer);
      break;
    case 0x07:
      FillScreen(sBuffer);
      break;
    case 0x08:
      DrawLine(sBuffer);
      break;
    case 0x09:
      DrawRect(sBuffer);
      break;
    case 0x0a:
      DrawCircle(sBuffer);
      break;
    case 0x0b:
      //DrawCircleHelper(sBuffer);
      break;
    case 0x0c:
      FillCircle(sBuffer);
      break;
    case 0x0d:
      //FillCircleHelper(sBuffer);
      break;
    case 0x0e:
      DrawTriangle(sBuffer);
      break;
    case 0x0f:
      FillTriangle(sBuffer);
      break;
    case 0x10:
      DrawChar(sBuffer);
      break;
    case 0x11:
      SetCursor(sBuffer);
      break;
    case 0x12:
      SetTextColor(sBuffer);
      break;
    case 0x13:
      SetTextColorWBG(sBuffer);
      break;
    case 0x14:
      SetTextSize(sBuffer);
      break;
    case 0x15:
      SetTextWrap(sBuffer);
      break;
    case 0x16:
      Cp437(sBuffer);
      break;
    case 0x17:
      Print(sBuffer);
      break;
    case 0x18:
      PrintLN(sBuffer);
      break;
    case 0x19:
      SetFont(sBuffer);
      break;
    default:
      // 0xfe: I don't understand
      Serial.println("fe");
      break;
  }

  sBuffer = "";
}

void StrHexToXY(String str, int16_t *x, int16_t *y) {
  String XStr = str.substring(0, 3);
  String YStr = str.substring(3, 6);

  int xBufferSize = sizeof(XStr) + 1;
  char xBufferStr[xBufferSize];
  XStr.toCharArray(xBufferStr, xBufferSize);


  int yBufferSize = sizeof(YStr) + 1;
  char yBufferStr[xBufferSize];
  YStr.toCharArray(yBufferStr, yBufferSize);

  *x = (int16_t) strtol(xBufferStr, 0, 16);

  if (*x > 2047) {
    *x = *x - 4096;
  }
  
  *y = (int16_t) strtol(yBufferStr, 0, 16);

  if (*y > 2047) {
    *y = *y - 4096;
  }
  
  
  return;
}

int StrHexToUint8(String str) {
  int bufferSize = sizeof(str) + 1;
  char strBuffer[bufferSize];
  str.toCharArray(strBuffer, bufferSize);
  
  return (int) strtol(strBuffer, 0, 16);
}

int StrHexToInt8(String str) {
  int newInt = StrHexToUint8(str);

  if (newInt > 127) {
    newInt = newInt - 256;
  }
  
  return newInt;
}
