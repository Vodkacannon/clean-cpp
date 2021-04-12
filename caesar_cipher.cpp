#include <iostream>
#include <string>

std::string caesar_encrypt(std::string plain_text)
{
  std::string cipher_text = ""; 
  
  for(int index = 0; index < plain_text.length(); index++)
  {
    //Forwards encryption by 1.
    plain_text[index] = char((short(plain_text[index]) + 1) % 126);
  }
  
  return cipher_text;
}

int main()
{
  std::cout << caesar_cipher("Hello World!");
  return 0;
}
