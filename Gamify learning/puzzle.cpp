#include "puzzle.h"
namespace GameofCards
{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections; 
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    puzzle::puzzle()
    {
        Questions = gcnew array<String^>(10);
        Answers = gcnew array<String^>(10);
        set();
    } 
    void puzzle::set()
    {
        // Initializing the questions and answers

        for (int i = 0; i < 10; i++) {
            int num1 = rand() % 10 + 1;
            int num2 = rand() % 10 + 1;
            char operators[] = { '+', '-', '*', '/' };
            char op = operators[rand() % 4];

            int result;
            switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':

                while (num2 == 0) {
                    num2 = rand() % 100 + 1;
                }
                result = num1 / num2;
                break;
            }

            String^ Str = gcnew String(op, 1);


            Questions[i] = num1.ToString() + " " + Str + " " + num2.ToString();
            Answers[i] = result.ToString();
        }
    }
}