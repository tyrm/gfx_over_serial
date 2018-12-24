#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSans18pt7b.h>
#include <Fonts/FreeSans24pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSansBold12pt7b.h>
#include <Fonts/FreeSansBold18pt7b.h>
#include <Fonts/FreeSansBold24pt7b.h>
#include <Fonts/FreeSansBoldOblique9pt7b.h>
#include <Fonts/FreeSansBoldOblique12pt7b.h>
#include <Fonts/FreeSansBoldOblique18pt7b.h>
#include <Fonts/FreeSansBoldOblique24pt7b.h>
#include <Fonts/FreeSansOblique9pt7b.h>
#include <Fonts/FreeSansOblique12pt7b.h>
#include <Fonts/FreeSansOblique18pt7b.h>
#include <Fonts/FreeSansOblique24pt7b.h>
#include <Fonts/FreeSerif9pt7b.h>
#include <Fonts/FreeSerif12pt7b.h>
#include <Fonts/FreeSerif18pt7b.h>
#include <Fonts/FreeSerif24pt7b.h>
#include <Fonts/FreeSerifBold9pt7b.h>
#include <Fonts/FreeSerifBold12pt7b.h>
#include <Fonts/FreeSerifBold18pt7b.h>
#include <Fonts/FreeSerifBold24pt7b.h>
#include <Fonts/FreeSerifBoldItalic9pt7b.h>
#include <Fonts/FreeSerifBoldItalic12pt7b.h>
#include <Fonts/FreeSerifBoldItalic18pt7b.h>
#include <Fonts/FreeSerifBoldItalic24pt7b.h>
#include <Fonts/FreeSerifItalic9pt7b.h>
#include <Fonts/FreeSerifItalic12pt7b.h>
#include <Fonts/FreeSerifItalic18pt7b.h>
#include <Fonts/FreeSerifItalic24pt7b.h>
#include <Fonts/FreeMono9pt7b.h>
#include <Fonts/FreeMono12pt7b.h>
#include <Fonts/FreeMono18pt7b.h>
#include <Fonts/FreeMono24pt7b.h>
#include <Fonts/FreeMonoBold9pt7b.h>
#include <Fonts/FreeMonoBold12pt7b.h>
#include <Fonts/FreeMonoBold18pt7b.h>
#include <Fonts/FreeMonoBold24pt7b.h>
#include <Fonts/FreeMonoBoldOblique9pt7b.h>
#include <Fonts/FreeMonoBoldOblique12pt7b.h>
#include <Fonts/FreeMonoBoldOblique18pt7b.h>
#include <Fonts/FreeMonoBoldOblique24pt7b.h>
#include <Fonts/FreeMonoOblique9pt7b.h>
#include <Fonts/FreeMonoOblique12pt7b.h>
#include <Fonts/FreeMonoOblique18pt7b.h>
#include <Fonts/FreeMonoOblique24pt7b.h>
#include <Fonts/Org_01.h>
#include <Fonts/Picopixel.h>
#include <Fonts/Tiny3x3a2pt7b.h>
#include <Fonts/TomThumb.h>

void Cp437(String s){
  String CStr = s.substring(2, 4);
  int16_t CVal = StrHexToInt(CStr);
  
  if (CVal == 0) {
    Matrix.cp437(false);
  }
  else {
    Matrix.cp437(true);
  }
}

void DrawChar(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String CStr = s.substring(6, 10);
  String BStr = s.substring(10, 14);
  String SStr = s.substring(14, 16);
  String ChrStr = s.substring(16, 18);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  uint16_t CVal = StrHexToInt(CStr);
  uint16_t BVal = StrHexToInt(BStr);
  uint8_t SVal = StrHexToInt(SStr);
  uint8_t ChrVal = StrHexToInt(ChrStr);
  
  Matrix.drawChar(XVal, YVal, char(ChrVal), CVal, BVal, SVal);
}

void DrawCircle(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String RStr = s.substring(6, 8);
  String CStr = s.substring(8, 12);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  int16_t RVal = StrHexToInt(RStr);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.drawCircle(XVal, YVal, RVal, CVal);
}

void DrawFastHLine(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String WStr = s.substring(6, 8);
  String CStr = s.substring(8, 12);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  int16_t WVal = StrHexToInt(WStr);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.drawFastHLine(XVal, YVal, WVal, CVal);
}

void DrawFastVLine(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String HStr = s.substring(6, 8);
  String CStr = s.substring(8, 12);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  int16_t HVal = StrHexToInt(HStr);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.drawFastVLine(XVal, YVal, HVal, CVal);
}

void DrawLine(String s){
  String X0Str = s.substring(2, 4);
  String Y0Str = s.substring(4, 6);
  String X1Str = s.substring(6, 8);
  String Y1Str = s.substring(8, 10);
  String CStr = s.substring(10, 14);
  
  int16_t X0Val = StrHexToInt(X0Str);
  int16_t Y0Val = StrHexToInt(Y0Str);
  int16_t X1Val = StrHexToInt(X1Str);
  int16_t Y1Val = StrHexToInt(Y1Str);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.drawLine(X0Val, Y0Val, X1Val, Y1Val, CVal);
}

void DrawPixel(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String CStr = s.substring(6, 10);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.drawPixel(XVal, YVal, CVal);
}

void DrawRect(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String WStr = s.substring(6, 8);
  String HStr = s.substring(8, 10);
  String CStr = s.substring(10, 14);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  int16_t WVal = StrHexToInt(WStr);
  int16_t HVal = StrHexToInt(HStr);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.drawRect(XVal, YVal, WVal, HVal, CVal);
}

void DrawTriangle(String s){
  String X0Str = s.substring(2, 4);
  String Y0Str = s.substring(4, 6);
  String X1Str = s.substring(6, 8);
  String Y1Str = s.substring(8, 10);
  String X2Str = s.substring(10, 12);
  String Y2Str = s.substring(12, 14);
  String CStr = s.substring(14, 18);
  
  int16_t X0Val = StrHexToInt(X0Str);
  int16_t Y0Val = StrHexToInt(Y0Str);
  int16_t X1Val = StrHexToInt(X1Str);
  int16_t Y1Val = StrHexToInt(Y1Str);
  int16_t X2Val = StrHexToInt(X2Str);
  int16_t Y2Val = StrHexToInt(Y2Str);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.drawTriangle(X0Val, Y0Val, X1Val, Y1Val, X2Val, Y2Val, CVal);
}

void FillCircle(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String RStr = s.substring(6, 8);
  String CStr = s.substring(8, 12);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  int16_t RVal = StrHexToInt(RStr);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.fillCircle(XVal, YVal, RVal, CVal);
}

void FillRect(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  String WStr = s.substring(6, 8);
  String HStr = s.substring(8, 10);
  String CStr = s.substring(10, 14);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  int16_t WVal = StrHexToInt(WStr);
  int16_t HVal = StrHexToInt(HStr);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.fillRect(XVal, YVal, WVal, HVal, CVal);
}

void FillScreen(String s){
  String CStr = s.substring(2, 6);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.fillScreen(CVal);
}

void FillTriangle(String s){
  String X0Str = s.substring(2, 4);
  String Y0Str = s.substring(4, 6);
  String X1Str = s.substring(6, 8);
  String Y1Str = s.substring(8, 10);
  String X2Str = s.substring(10, 12);
  String Y2Str = s.substring(12, 14);
  String CStr = s.substring(14, 18);
  
  int16_t X0Val = StrHexToInt(X0Str);
  int16_t Y0Val = StrHexToInt(Y0Str);
  int16_t X1Val = StrHexToInt(X1Str);
  int16_t Y1Val = StrHexToInt(Y1Str);
  int16_t X2Val = StrHexToInt(X2Str);
  int16_t Y2Val = StrHexToInt(Y2Str);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.fillTriangle(X0Val, Y0Val, X1Val, Y1Val, X2Val, Y2Val, CVal);
}

void InvertDisplay(String s){
  String IStr = s.substring(2, 4);
  int16_t IVal = StrHexToInt(IStr);

  if (IVal == 0) {
    Serial.println("Uninverting");
    Matrix.invertDisplay(false);
  }
  else {
    Serial.println("Inverting");
    Matrix.invertDisplay(true);
  }
}

void Print(String s){
  String LStr = s.substring(2, 4);
  int16_t LVal = StrHexToInt(LStr);

  String str = "";
  str.reserve(255);
  
  for (int i=0; i < LVal; i++){
    String CStr = s.substring((2*i)+4, (2*i)+6);
    int16_t CVal = StrHexToInt(CStr);
    
    str += char(CVal);
  }
  
  Matrix.print(str);
}

void PrintLN(String s){
  String LStr = s.substring(2, 4);
  int16_t LVal = StrHexToInt(LStr);

  String str = "";
  str.reserve(255);
  
  for (int i=0; i < LVal; i++){
    String CStr = s.substring((2*i)+4, (2*i)+6);
    int16_t CVal = StrHexToInt(CStr);
    
    str += char(CVal);
  }
  
  Matrix.println(str);
}

void SetCursor(String s){
  String XStr = s.substring(2, 4);
  String YStr = s.substring(4, 6);
  
  int16_t XVal = StrHexToInt(XStr);
  int16_t YVal = StrHexToInt(YStr);
  
  Matrix.setCursor(XVal, YVal);
}

void SetFont(String s){
  String FStr = s.substring(2, 4);
  int16_t FVal = StrHexToInt(FStr);

  switch(FVal) {
    case 0x00:
      Matrix.setFont();
      break;
    case 0x01:
      Matrix.setFont(&FreeSans9pt7b);
      break;
    case 0x02:
      Matrix.setFont(&FreeSans12pt7b);
      break;
    case 0x03:
      Matrix.setFont(&FreeSans18pt7b);
      break;
    case 0x04:
      Matrix.setFont(&FreeSans24pt7b);
      break;
    case 0x05:
      Matrix.setFont(&FreeSansBold9pt7b);
      break;
    case 0x06:
      Matrix.setFont(&FreeSansBold12pt7b);
      break;
    case 0x07:
      Matrix.setFont(&FreeSansBold18pt7b);
      break;
    case 0x08:
      Matrix.setFont(&FreeSansBold24pt7b);
      break;
    case 0x09:
      Matrix.setFont(&FreeSansBoldOblique9pt7b);
      break;
    case 0x0a:
      Matrix.setFont(&FreeSansBoldOblique12pt7b);
      break;
    case 0x0b:
      Matrix.setFont(&FreeSansBoldOblique18pt7b);
      break;
    case 0x0c:
      Matrix.setFont(&FreeSansBoldOblique24pt7b);
      break;
    case 0x0d:
      Matrix.setFont(&FreeSansOblique9pt7b);
      break;
    case 0x0e:
      Matrix.setFont(&FreeSansOblique12pt7b);
      break;
    case 0x0f:
      Matrix.setFont(&FreeSansOblique18pt7b);
      break;
    case 0x10:
      Matrix.setFont(&FreeSansOblique24pt7b);
      break;
    case 0x11:
      Matrix.setFont(&FreeSerif9pt7b);
      break;
    case 0x12:
      Matrix.setFont(&FreeSerif12pt7b);
      break;
    case 0x13:
      Matrix.setFont(&FreeSerif18pt7b);
      break;
    case 0x14:
      Matrix.setFont(&FreeSerif24pt7b);
      break;
    case 0x15:
      Matrix.setFont(&FreeSerifBold9pt7b);
      break;
    case 0x16:
      Matrix.setFont(&FreeSerifBold12pt7b);
      break;
    case 0x17:
      Matrix.setFont(&FreeSerifBold18pt7b);
      break;
    case 0x18:
      Matrix.setFont(&FreeSerifBold24pt7b);
      break;
    case 0x19:
      Matrix.setFont(&FreeSerifBoldItalic9pt7b);
      break;
    case 0x1a:
      Matrix.setFont(&FreeSerifBoldItalic12pt7b);
      break;
    case 0x1b:
      Matrix.setFont(&FreeSerifBoldItalic18pt7b);
      break;
    case 0x1c:
      Matrix.setFont(&FreeSerifBoldItalic24pt7b);
      break;
    case 0x1d:
      Matrix.setFont(&FreeSerifItalic9pt7b);
      break;
    case 0x1e:
      Matrix.setFont(&FreeSerifItalic12pt7b);
      break;
    case 0x1f:
      Matrix.setFont(&FreeSerifItalic18pt7b);
      break;
    case 0x20:
      Matrix.setFont(&FreeSerifItalic24pt7b);
      break;
    case 0x21:
      Matrix.setFont(&FreeMono9pt7b);
      break;
    case 0x22:
      Matrix.setFont(&FreeMono12pt7b);
      break;
    case 0x23:
      Matrix.setFont(&FreeMono18pt7b);
      break;
    case 0x24:
      Matrix.setFont(&FreeMono24pt7b);
      break;
    case 0x25:
      Matrix.setFont(&FreeMonoBold9pt7b);
      break;
    case 0x26:
      Matrix.setFont(&FreeMonoBold12pt7b);
      break;
    case 0x27:
      Matrix.setFont(&FreeMonoBold18pt7b);
      break;
    case 0x28:
      Matrix.setFont(&FreeMonoBold24pt7b);
      break;
    case 0x29:
      Matrix.setFont(&FreeMonoBoldOblique9pt7b);
      break;
    case 0x2a:
      Matrix.setFont(&FreeMonoBoldOblique12pt7b);
      break;
    case 0x2b:
      Matrix.setFont(&FreeMonoBoldOblique18pt7b);
      break;
    case 0x2c:
      Matrix.setFont(&FreeMonoBoldOblique24pt7b);
      break;
    case 0x2d:
      Matrix.setFont(&FreeMonoOblique9pt7b);
      break;
    case 0x2e:
      Matrix.setFont(&FreeMonoOblique12pt7b);
      break;
    case 0x2f:
      Matrix.setFont(&FreeMonoOblique18pt7b);
      break;
    case 0x30:
      Matrix.setFont(&FreeMonoOblique24pt7b);
      break;
    case 0x31:
      Matrix.setFont(&Org_01);
      break;
    case 0x32:
      Matrix.setFont(&Picopixel);
      break;
    case 0x33:
      Matrix.setFont(&Tiny3x3a2pt7b);
      break;
    case 0x34:
      Matrix.setFont(&TomThumb);
      break;
  }
}

void SetRotation(String s){
  String RStr = s.substring(2, 4);
  int16_t RVal = StrHexToInt(RStr);
  
  Matrix.setRotation(RVal);
}

void SetTextColor(String s){
  String CStr = s.substring(2, 6);
  uint16_t CVal = StrHexToInt(CStr);
  
  Matrix.setTextColor(CVal);
}

void SetTextColorWBG(String s){
  String CStr = s.substring(2, 6);
  String BStr = s.substring(6, 10);
  
  uint16_t CVal = StrHexToInt(CStr);
  uint16_t BVal = StrHexToInt(BStr);
  
  Matrix.setTextColor(CVal, BVal);
}

void SetTextSize(String s){
  String SStr = s.substring(2, 4);
  int16_t SVal = StrHexToInt(SStr);
  
  Matrix.setTextSize(SVal);
}

void SetTextWrap(String s){
  String WStr = s.substring(2, 4);
  int16_t WVal = StrHexToInt(WStr);
  
  if (WVal == 0) {
    Matrix.setTextWrap(false);
  }
  else {
    Matrix.setTextWrap(true);
  }
}
