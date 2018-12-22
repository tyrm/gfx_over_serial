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

void SetRotation(String s){
  String RStr = s.substring(2, 4);
  int16_t RVal = StrHexToInt(RStr);
  
  Matrix.setRotation(RVal);
}
