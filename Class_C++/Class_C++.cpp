//���������� ����� �����.���������� ������� ���������
//� ����������� � �������� ���������� - ������.����������
//������� - ����� ��� ����� ������ � ���������� - �����,
//��� ���������� �������������� ��������(��������,
//���������, ���������, �������, � �.�.).

#include <iostream>


class Decimal //������ �����.
{
 
    
    double addition{};       // ���������� ��� ��������.

    double subtraction{};    // ���������� ��� ���������.

    double multiplication{}; // ���������� ��� ���������.

    double division{};       // ���������� ��� �������.
    

public:

    char symbol{};

    double numerator{};   //���������.
    double denominator{}; //�����������. 

    double numerator2{};  // ������ ���������.
    double denominator2{};// ������ �����������.
    

    void print_Numerator() {
        std::cout << "Enter the numenator = ";
        std::cin >> numerator; //���������� ���������.  
       
    }
    

    void print_Denominator() {
        std::cout << "Enter the denominator = ";
        std::cin >> denominator;//���������� �����������. 
    }

    void print_Numerator2() {
        std::cout << "Enter the numenator2 = ";
        std::cin >> numerator2; //����������  ������ ���������.
    }

    void print_Denominator2() {
        std::cout << "Enter the denominator2 = ";
        std::cin >> denominator2;//���������� �����������. 
    }
    void print_Symbol() {
        std::cout << "Enter the sumbol = ";
        std::cin >> symbol;
    }

    
    void set_addition() {         //������� ��� �������� ������

        addition = ((numerator * denominator2) + (denominator * numerator2)) / ((denominator * denominator2));
    }

    double get_addition() {

        return  addition;
    }
    void set_subtraction() {         //������� ��� ��������� ������
        subtraction = ((numerator * denominator2) - (denominator * numerator2)) / ((denominator * denominator2));
    }
    double get_subtraction() {

        return  subtraction;
    }
    void set_multiplication() {         //������� ��� ��������� ������

        multiplication = ((numerator * numerator2) / (denominator * denominator2));
    }
    double get_multiplication() {

        return multiplication;
    }

    void set_division() {         //������� ��� ������� ������

        division = ((numerator * denominator2) / (denominator * numerator2));
    }
    double get_division() {

        return division;
    }

};


int main()
{
    Decimal num{};

    while (true)

    {
        num.print_Numerator();
        num.print_Denominator();


        std::cout << "-----------------------" << std::endl;
        num.print_Numerator2();
        num.print_Denominator2();
        
        if (num.numerator == 0 || num.denominator == 0 || num.numerator2 == 0 || num.denominator2 == 0) {
            std::cout << "The numerator and denominator cannot be equal to 0";
            return 0;

        }

        num.print_Symbol();

        switch (num.symbol)
        {
        case '+':
            num.set_addition();
            std::cout << num.get_addition() << std::endl;
            break;
        case '-':
            num.set_subtraction();
            std::cout << num.get_subtraction() << std::endl;
            break;
        case '*':
            num.set_multiplication();
            std::cout << num.get_multiplication() << std::endl;
            break;
        case '/':
            num.set_division();
            std::cout << num.get_division() << std::endl;
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
    }
}
    
    
        
    

   
    

   

    




