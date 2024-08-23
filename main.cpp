#include <iostream>
using namespace std;
//Переменные
 void task1(){
  cout << "Введите ваше имя" << endl;
  string name;
  cin >> name;
  cout << "Привет," << name << "! Рад видеть тебя:D" << endl;
  cout << endl << endl;
  }
void task2 () {
  cout << "Произведение чисел" << endl;
  cout << "Введите 2 числа" << endl;
  int a, b;
  cin >> a >> b;
  cout << a*b << endl;
  }
void task3 () {
  cout << "Периметр прямоугольника" << endl;
  cout << "Введите ширину" << endl;
  int a2;
  cin >> a2;
  cout << "Введите длину" << endl;
  int b2;
  cin >> b2;
  cout << (a2+b2)*2 << endl;
 }
void task4 () {
    cout << "Километры в мили" << endl;
  cout << "Введите число километров" << endl;
  int a3;
  cin >> a3;
  cout << a3*1.6093 << endl;
  }
void task5 () {
    cout << "Ваш возраст через 5 лет" << endl;
  cout << "Введите ваш возраст" << endl;
    int a4;
    cin >> a4;
    cout << a4+5 << endl;
}
void task6 () {
  cout << "Среднее арифмитическое" << endl;
  cout << "Введите 3 числа" << endl;
  int a5, b5, c5;
  cin >> a5 >> b5 >> c5;
  cout << (a5+b5+c5)/3 << endl;
}
void task8 () {
   cout << "Площадь квадрата" << endl;
  cout << "Введите длину стороны квадрата" << endl;
  int a7;
  cin >> a7;
  cout << a7*a7 << endl;
}
void task9 () {
  cout << "Объём куба" << endl;
  cout << "Введите длину ребра" << endl;
  int a8;
  cin >> a8;
  cout << a8*a8*a8 << endl;
}
void task10 () {
  cout << "Квадрат числа" << endl;
  cout << "Введите число,которое хотите возвести в квадрат" << endl;
  int a9;
  cin >> a9;
  cout << a9*a9 << endl;
}
//Условия
void task11 () {
  cout << "Какое это число" << endl;
  cout << "Введите число" << endl;
  int d1;
  cin >> d1;
  if (d1>0){
    cout << "Это положительное число";
  }
  else{
    if (d1<0){
    cout << "Это отрицательное число";
  }
  else{
    cout << "Это ноль";
  }}
}
void task12 (){
  cout << "Является ли число делителем 10" << endl;
  cout << "Введите число" << endl;
  int d2;
  cin >> d2;
  if (10%d2==0){
    cout << "Да,является" << endl;
  }
  else{
    cout << "Нет,не является" << endl;
  }
}
void task13 (){
  cout << "В каком квартале находится коорди" << endl;
  cout << "Введите x" << endl;
  int d3;
  cin >> d3;
  cout << "Введите y" << endl;
  int e3;
  cin >> e3;
  if (d3<0 && e3>0){
    cout << "2 квартал" << endl;
  }
  else{
    if (d3>0 && e3>0){
      cout << "1 квартал" << endl;
    }
    else{
    if (d3>0 && e3<0){
      cout << "4 квартал" << endl;
    }
    else{
      if (d3<0 && e3<0){
        cout << "3 квартал" << endl;
      }}}}
}
void task15 (){
cout << "Равны ли числа" << endl;
cout << "Введите 1 число" << endl;
  int d5;
  cin >> d5;
  cout << "Введите 2 число" << endl;
  int e5;
  cin >> e5;
  if (d5==e5){
     cout << "Эти числа равны" << endl;
  }
  else{
    cout << "Эти числа не равны" << endl;
  }
} 
void task16 (){
cout << "Наибольшие число" << endl;
cout << "Введите 1 число" << endl;
  int d6;
  cin >> d6;
  cout << "Введите 2 число" << endl;
  int e6;
  cin >> e6;
  cout << "Введите 3 число" << endl;
  int f6;
  cin >> f6;
  if (d6>e6 && d6>f6){
    cout << d6 << " наибольшее число" << endl;
  }
  else{
    if (e6>d6 && e6>f6){
      cout << e6 << " наибольшее число" << endl;
  }
    else{
      if (f6>d6 && f6>e6){
        cout << f6 << " наибольшее число" << endl;
}}}}
void task17 (){
cout << "Находится ли в районе от 1 до 100" << endl;
cout << "Введите число" << endl;
  int d7;
  cin >> d7;
  if (d7>0 && d7<100){
    cout << d7 << " находится в промежутке между 1 и 100" << endl;
  }
  else{
    cout << d7 << " не находится в промежутке между 1 и 100" << endl;
  }
}
void task18 (){
cout << "Yes или no" << endl;
cout << "Введите слово" << endl;
  string word8;
  cin >> word8;
  if (word8=="yes" || word8=="Yes" || word8=="YES" || word8=="ес" || word8=="ЕС" || word8=="da" || word8=="DA" || word8=="да" || word8=="ДА" || word8=="Да" || word8=="Da" || word8=="Ес"){
    cout << "Это Yes" << endl;
  }
  else{
    if (word8=="no" || word8=="No" || word8=="NO" || word8=="ноу" || word8=="НОУ" || word8=="net" || word8=="NET" || word8=="нет" || word8=="НЕТ" || word8=="Нет" || word8=="Net" || word8=="Ноу"){
      cout << "Это No" << endl;
  }
    else{
      cout << "Это не Yes и не No" << endl;
}}
}
void task19 (){
cout << "Является ли треугольник возможным" << endl;
cout << "Введите длину 1 стороны" << endl;
  int d9;
  cin >> d9;
  cout << "Введите длину 2 стороны" << endl;
  int e9;
  cin >> e9;
  cout << "Введите длину 3 стороны" << endl;
  int f9;
  cin >> f9;
if (d9+e9>f9 && d9+f9>e9 && e9+f9>d9){
  cout << "Треугольник возможен" << endl;
}
  else{
    cout << "Треугольник невозможен" << endl;
  }
}
void task20 (){
cout << "Является ли год высокосным" << endl;
cout << "Введите год" << endl;
int d10;
  cin >> d10;
  if (d10%4==0){
    cout << "Этот год високосный" << endl;
  }
  else{
    cout << "Этот год не високосный" << endl;
  }
}
//Циклы
void task21 (){
cout << "Чётные числа от 1 до 20" << endl;
   cout << endl << endl;
  for (int g1 = 0; g1 < 20; g1++) {
    if (g1%2 == 0) {
      cout << g1 << endl;
    }}
}
void task22 (){
cout << "Сумма от 1 до 100" << endl;
  int sum2 = 0;
  for ( int g2 = 0; g2 < 100; g2++) {
    sum2+=g2;
}
  cout << sum2;
}
void task23 (){
cout << "Выведение чисел от 10 до 1" << endl;
  cout << endl << endl;
  for (int g3 = 10; g3 > 0; g3--) {
      cout << g3 << endl;
  }
}
void task24 (){
cout << "Сумма нечётных чисел в диапозоне от 1 до 50" << endl;
  int sum4 = 0;
  for (int g4 = 1; g4 < 50; g4++) {  
    if (g4%2 == 1) {
      sum4+=g4;
      cout << g4 << endl;
      cout << sum4;
}}
}
void task25 (){
cout << "Таблица умножения цифры 5" << endl;
   for (int g5 = 1; g5 <= 10; g5++) { 
     cout << g5 << "*" << "5" << "=" << g5*5 << endl;
   }
}
void task26 (){
cout << "Найти факториал" << endl;
  cout << "Введите число" << endl;
  int g6;
  cin >> g6;
  int fact1=1;
  for (int i = 1; i <= g6; i++) {
    fact1 = fact1 * i;
  }
  cout << fact1 << endl;
}
void task27 (){
cout << "Последовательность Фибоначчи" << endl;
  cout << "Введите количество чисел Фиббоначи" << endl;
  int g7;
  cin >> g7;
  int num1 = 1;
  int num2 = 1;
  int num3 = 1;
  cout << "1 1 ";
  for (int h7 = 1; h7 <= g7; h7++){
    num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
    cout << num3 << " ";
  }
   cout << endl;
}
void task28 (){
cout << "Делители числа" << endl;
  cout << "Введите число" << endl;
  int g8;
  cin >> g8;
  for (int l = 1; l <= g8; l++) {
      if (g8%l == 0) {
        cout << l << endl;
      }}
}
void task29 (){
cout << "Наоборот" << endl;
  cout << "Напишите слово" << endl;
  string g9;
  cin >> g9;
  for (int l = 0; l < g9.length()/2; l++){
    int buf = g9[l];
    g9[l] = g9[g9.length() - l - 1];
    g9[g9.length() - l - 1] = buf;
  }
cout << g9;
}
void task30 (){
cout << "Сколько пробелов" << endl;
  cout << "Напишите что-то" << endl;
  string str;
  cin >> str;
  int m=0;
  for (int l = 0; l < str.length(); l++){
    if (str [l] == '_'){
      m+=1;
    }
  }
  cout << m;
}
//Строки
 void task31 (){
 cout << "Какова длина строки" << endl;
   cout << "Введите строку" << endl;
   string line;
   cin >> line;
   getline(cin, line);
   size_t length_of_string = line.length();
   cout << length_of_string << endl;
  }
//Для красоты
int main () {
 cout << "Выберите блок заданий" << endl;
  cout << "1.Переменные" << endl;
  cout << "2.Условия" << endl;
  cout << "3.Циклы" << endl;
  cout << "4.Строки" << endl;
  cout << "5.Массивы" << endl;
  int taskblock;
  cin >> taskblock;
  switch (taskblock) {
    case 1:
    cout << "Введите номер задания" << endl;
    int tasknumber;
    cin >> tasknumber;
    switch (tasknumber){
       case 1:
    task1();
    break;
       case 2:
    task2();
    break;
       case 3:
    task3();
    break;
       case 4:
    task4();
    break;
        case 5:
    task5();
    break; 
        case 6:
    task6();
    break;
        case 8:
    task8();
    break;
        case 9:
    task9();
    break;
        case 10:
    task10();
    break;
  }
    case 2:
    cout << "Введите номер задания" << endl;
    int tasknumber2;
    cin >> tasknumber2;
    switch (tasknumber2){
         case 1:
    task11();
    break;
         case 2:
    task12();
    break;
         case 3:
    task13();
    break;
         case 5:
    task15();
    break;
        case 6:
    task16();
    break;
        case 7:
    task17();
    break;
        case 8:
    task18();
    break;
        case 9:
    task19();
    break;
        case 10:
    task20();
    break;
}
    case 3:
    cout << "Введите номер задания" << endl;
    int tasknumber3;
    cin >> tasknumber3;
    switch (tasknumber3){
        case 1:
    task21();
    break;
        case 2:
    task22();
    break;
       case 3:
    task23();
    break;
       case 4:
    task24();
    break;
       case 5:
    task25();
    break;
       case 6:
    task26();
    break;
       case 7:
    task27();
    break;
       case 8:
    task28();
    break;
       case 9:
    task29();
    break;
       case 10:
    task30();
    break;
  }
      case 4:
  cout << "Введите номер задания" << endl;
  int tasknumber4;
  cin >> tasknumber4;
  switch (tasknumber4){
      case 1:
  task31();
  break;
}}
}
