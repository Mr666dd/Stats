// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

void func(){}

void open_config(){
  ofstream config;
 if(config.open){
  config.open ("/etc/stats/config.txt");
  config << "Тест" << "\n";
  config.close();
} 
else{
 printf("Не удалось открыть файл конфига");
}
}
int main () {
  return 0;
}