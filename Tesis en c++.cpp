#include <iostream>
#include <string>
using namespace std;
int main() {
  // Estoy defiendo las variables para lo que es la tesis 
  string title =;
  string author;
  string date;
  // aqui es donde pondra el titulo de la tesis para encontrar
  cout << "Enter the thesis title: ";
  getline(cin, title);
  // nombre del autor de la tesis.
  cout << "Enter the thesis author: ";
  getline(cin, author);
  // datos de la tesis 
  cout << "Enter the thesis date: ";
  getline(cin, date);
  // en consola va a imprirmir nombre de la tesis, autor de la tesis y datos que contiene la tesis
  cout << "Thesis title: " << title << endl;
  cout << "Thesis author: " << author << endl;
  cout << "Thesis date: " << date << endl;
  return 0;
}
