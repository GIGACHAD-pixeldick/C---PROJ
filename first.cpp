#include <iostream>
#include <vector>
#include<cmath>

int main(){
    
    // This is a comment
    /*
    This
    is
    a
    comment
    */

    int x; // обьявление
    x = 5; // присвоение
    
    int y = 6;
    int sum = x + y;

    // integer (целые числа)
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (как float в python)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 36.6;

    // лишь одно значение
    char grade = 'A';
    char initial = 'B';
    char dollar = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forsale = true;

    // string (строка)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "Fake St.";

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";

    
    std::cout << initial << "\n";
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";

    std::cout << "I am Oleg and" << "\n";
    std::cout << " I like Pizza!" << "\n";
    
    return 0;
}

namespace first{
    int x = 1; // присвоить одно значение
}

namespace second{
    int x = 2; // присвоить другое значение
}

int general(){
    using namespace first; // использовав  функцию(namespace first) вывести значения этой функции
    //int x = 0;

    //std::cout << first::x;
    std::cout << x;
    std::cout << second::x; 

    return 0;
}

int general_2(){
    using namespace std; // это все
    using std::cout; // это только вывод

    string name = "Bro";

    cout << "Hello " << name;

    return 0;
}

int main_2(){
    double pi = 3.14159;
    const int LIGHT_SPEED = 299345;
    const int WIDTH = 1920;
    const int WEIGHT = 1080;
    //pi = 420.689;
    double radius = 10;
    double dlina_okruzh = 2 * pi * radius;
    
    std::cout << dlina_okruzh << "cm";

    return 0;
}

//typedef std::vector<std::pair<std::string, int>> pairlist; // это просто переменная pairlist
                                                            // внутри которой лежит тип данных
typedef std::string text_t;
typedef int number_t;
using text_t =  std::string;
using number_t = int;

int main_3(){
    
    text_t firstName = "bro";
    number_t age = 21;

    std::cout << age << "\n";
    std::cout << firstName;

    return 0;
}

int main_4(){
    // or double
    int students = 20;

    //plus
    students+=1;
    students++;

    //minus
    students-=1;
    students--;

    //multiply
    students*=1;
    
    //separate
    students/=1;

    int remainder = students % 2;

    std::cout << students << "\n";
    std::cout << remainder;

    return 0;
}

int main_5(){
    // можно присваивать разные типы данных одной и той же переменной
    double tear = (int) 33;
    char tea = 100;
    std::cout << (char) 100;
    std::cout << tea;

    int correct = 8;
    int questions = (double) 10;
    double score = correct / questions * 100;

    std::cout << score << "%" << "\n"; 
    std::cout << tear;

    return 0;
}

int main_6(){
    // C++ input и C++ output
    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);

    //std::cout << "What's your name?:  ";
    //std::cin >> name;

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old";

    return 0;
}

int main_7(){
    
    // maths operators
    
    double x = 3.14;
    double y = 4;
    double z;
    double c;
    double b;
    double a;
    double g;
    double f = 2.5;
    double h;
    double j;

    c = std::max(x,y);
    z = std::min(x,y);
    b = pow(2,3);
    a = sqrt(9);
    g = abs(-144);
    f = round(f);
    h = ceil(x);
    j = floor(x);
    
    std::cout << z << c << "\n";
    std::cout << b << a << "\n";
    std::cout << g << f << h;
}

int main_8(){
    
    double e;
    double r;
    double t;
    
    std::cout << "Enter side E: ";
    std::cin >> e;
    
    std::cout << "Enter side R: ";
    std::cin >> r;
    
    e = sqrt(pow(e,2) + pow(r,2));
    
    std::cout << "Enter side T: " << t;
}

int main_9(){
    
    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if(age >= 18){
        std::cout << "Welcome!";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!"
    }
    else if(age > 70){
        std::cout << "You are too old for that shit"
    }
    else(age < 18){
        std::cout << "You are too small"
    }
}
    
int main_10(){
    
    int month;
    std::cout << "Enter your month: ";
    std::cin >> month;
    
    // можно было прописать вcе условия через if, 
    //но это не прагматично(because we uses switch)
    
    switch(month){
        case 1:
            std::cout << "It's January";
            break;
        
        case 2:
            std::cout << "It's February";
            break;
        
        case 3:
            std::cout << "It's March";
            break;
        
        case 4:
            std::cout << "It's April";
            break;
        
        case 5:
            std::cout << "It's May";
            break;
        
        case 6:
            std::cout << "It's June";
            break;
        
        case 7:
            std::cout << "It's July";
            break;
        
        case 8:
            std::cout << "It's August";
            break;
        
        case 9:
            std::cout << "It's September";
            break;
        
        case 10:
            std::cout << "It's October";
            break;
        
        case 11:
            std::cout << "It's November";
            break;
        
        case 12:
            std::cout << "It's December";
            break;
        
        default:
            std::cout << "The programm using only numbers(1-12)";
    }
}

int main_11(){
    
    // switch - замена if(case)/else(default) statement
    char grade;
    
    std::cout << "What's letter grade?: ";
    std::cin >> grade;
    
    switch(grade){
        case 'A':
            std::cout << "Great!";
            break;
        
        case 'B':
            std::cout << "Good!";
            break;
        
        case 'C':
            std::cout << "Okay";
            break;
        
        case 'D':
            std::cout << "Not good";
            break;
        
        case 'F':
            std:;cout << "Epic Fail";
            break;
        
        default:
            std::cout << "The programm using only letter grades (A-F)";
    }
}

int main_12(){
    
    //CALCULATOR
    
    char op;
    double num1;
    double num2
    double result;
    
    std::cout << " DEBILNIK 1.0 \n";
    
    std:cout << "Enter either( + - * / ): ";
    std::cin >> op;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    switch(op){
        case "+":
            result = num1 + num2;
            std::cout << "result: " << result << "\n";
            break;
            
        case "-":
            result = num1 - num2;
            std::cout << "result: " << result << "\n";
            break;
            
        case "*":
            result = num1 * num2;
            std::cout << "result: " << result << "\n";
            break;
            
        case "/":
            result = num1 / num2;
            std::cout << "result: " << result << "\n";
            break;
        
        default:
            std::cout << "Error";
            break;
    }
}

int main_13(){
    
    // ternary operator(замена if/else statement) "?":
    //condition(условие) ? expression1(if it's true) : expression2(if it's false)
    
    int years = 75;
    years >= 60 ? std::cout << "You pass!" : std::cout << "You failed!";
    
    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    
    bool hungry = true;
    
    //hungry == true ?
    hungry ? std::cout << "true" : std::cout << "false";
    std::cout << (hungry ? "true" : "false");
    
    
    //if(years >= 60){
    //    
    //    std::cout << "You pass!";
    //}
    //else{
    //    
    //    std::cout << "You fail!";
    //}
}

int main_14(){
    
    //&& - выполняется если два(или более) условий верны
    //|| - выполняется если последнее из двух условий верно
    // ? - выполняется
    
    int temp;
    
    std::cout << "Enter your temperature";
    std:cin >> temp;
    
    if(temp > 0 && temp < 30){
        std::cout << "Good temperature!";
    }
    else{
        std::cout << "Stay home!"
    }
}
