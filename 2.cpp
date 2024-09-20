#include<iostream>
#include<string.h>
using namespace std;

int main() {
   cout << "Enter the message to decrypt:\n";
   char msg[2000];
   cin.getline(msg, 2000);  // Take the message as input
   int length = strlen(msg);
   int key;

   cout << "Enter key: ";
   cin >> key;  

  for (int i = 0; i < length; ++i) {
      char ch = msg[i];

      // Decrypt for lowercase letters
      if (ch >= 'a' && ch <= 'z') {
          ch = ch - key;
          if (ch < 'a') {
              ch = ch + 'z' - 'a' + 1;
          }
          msg[i] = ch;
      }
      // Decrypt for uppercase letters
      else if (ch >= 'A' && ch <= 'Z') {
          ch = ch - key;
          if (ch < 'A') {
              ch = ch + 'Z' - 'A' + 1;
          }
          msg[i] = ch;
      }
      // Keep non-alphabetic characters unchanged
      else {
          msg[i] = ch;
      }
  }

  cout << "Decrypted message: " << msg << endl;

   return 0;
}
