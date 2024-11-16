#include <iostream>

int main(){
    std::cout << "Made By Roam45" << '\n';
    long double num1;
    long double num2;
    long double result;
    char optype;
    std::string optypename;
    long long int calc = 1;
    for(;;){
        std::string error = "";
        std::cout <<"This is calculation " << calc << "." << '\n';
        calc += 1;
        // getting number 1
        std::cout << "Enter Number 1." << '\n';
        // checking if it is a number
        if (std::cin >> num1){
            std::cout << '\n';
        }else {
            break;
        }
        // getting number 2
        std::cout << "Enter Number 2." << '\n';
        // checking if it is a number
        if (std::cin >> num2){
            std::cout << '\n';
        }else {
            break;
        }
        // getting the operation
        std::cout << "Enter What You Want To Do." << '\n' << "* for Multiplication. " << '\n' << "/ for Division. " << '\n' << "+ for Addition. " << '\n' << "- for Subtraction." << '\n';
        std::cin >> optype;
        //figuring out what to do
        if (optype == '*'){
            result = num1 * num2;
            optypename = " multiplied by ";
        
        } else if (optype == '/'){
            result = num1 / num2;
            optypename = " divided by ";
        
        }else if (optype == '+'){
            result = num1 + num2;
            optypename = " add ";
        
        }else if (optype == '-'){
            result = num1 - num2;
            optypename = " subtract ";
        
        }else if (num1 == 0){
            result = 0;
        
        }else if (num2 == 0){
            result = 0;
        }else {
            break;

        }
        // the end
        std::cout << "The result of " << num1 << optypename << num2 << " is " << result << "." << '\n';
        // pausing and restarting
        std::cin.ignore();
        std::cin.get();
    }
    return 0;
}