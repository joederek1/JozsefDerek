#include <iostream>

void PrintOptions();
void PrintAddition(int number_1, int number_2);
void PrintSubtraction(int number_1, int number_2);
void PrintMultiplication(int number_1, int number_2);
void PrintDivision(int number_1, int number_2);


int main() {

  int number_1;
  int number_2;
  char option;

  PrintOptions();
  std::cin >> option;

  if( option != 'a' && option != 'b' && option != 'c' && option != 'd'/* && option != 'e' */ && option != 'x'){
    std::cout << "Rossz karaktert adtal meg, ezert a program leall.\n\n";
    return 1;
  
  } else if(option == 'x' ){
      std::cout << "Viszlat!\n\n";

  } else{

      std::cout << "Add meg az elso szamot: ";
      std::cin  >> number_1;
      std::cout << "Add meg a masodik szamot: ";
      std::cin  >> number_2;
  
      if( option == 'a' ){
        PrintAddition(number_1, number_2);

      } else if( option == 'b' ){
        PrintSubtraction(number_1, number_2);

      } else if( option == 'c' ){
        PrintMultiplication(number_1, number_2);

      } else if( option == 'd' ){
        PrintDivision(number_1, number_2);
      }

 /*     else if( option == 'e' ){
        PrintPower(number_1, number_2);
      }*/
           
  }

}
  






void PrintOptions(){
  std::cout << "Valaszthato muveletek:\n";
  std::cout << "  a) - Osszeadas\n";
  std::cout << "  b) - Kivonas\n";
  std::cout << "  c) - Szorzas\n";
  std::cout << "  d) - Osztas\n";
  //std::cout << "  e) - Hatvanyozas\n";
  std::cout << "  x) - Kilepes\n";
  std::cout << "Muvelet kivalasztasahoz usd be a megfelelo betut! ";
  
}

void PrintAddition(int number_1, int number_2){
  std::cout << number_1 << " + " << number_2 << " = " << number_1 + number_2 << "\n\n";
}

void PrintSubtraction(int number_1, int number_2){
  std::cout << number_1 << " - " << number_2 << " = " << number_1 - number_2 << "\n\n";
}

void PrintMultiplication(int number_1, int number_2){
  std::cout << number_1 << " * " << number_2 << " = " << number_1 * number_2 << "\n\n";
}

void PrintDivision(int number_1, int number_2){
  std::cout << number_1 << " / " << number_2 << " = " << double(number_1) / number_2 << "\n\n";
}
