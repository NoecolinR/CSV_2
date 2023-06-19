#include <iostream>
using namespace std;
int main() {
  // Definicion de las preguntas.
  string questions[] = {
    "Cual es la capital de Francia?",
    "Cual es el Oceano mas Grande?",
    "Cual es el Nombre del Presidente de los Estados Unidos de America?"
  };
  string answers[] = {
    "Paris",
    "Pacific Ocean",
    "Joe Biden"
  };
  // lo que se deinide con un for y si en dado caso pondra incorrecto la respuesta
  for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++) {
    cout << questions[i] << endl;
    string answer = getline(cin);
    // las respuestas de las preguntas aparecera como correcta o si se equivoca saldra como incorrecta
    if (answer == answers[i]) {
      cout << "Correct!" << endl;
    } else {
      cout << "Incorrect!" << endl;
    }
  }
  return 0;
}
