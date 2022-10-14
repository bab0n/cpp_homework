#include <iostream>

int main(){
    int month, yeahr;
    std::cout << "Month number: ";
    std::cin >> month;
    // проверка мес€ца на валидность
    if (month > 12 || month < 1){
        return 0;
    }
    // в “« не было указано что надо вводить год, но
    std::cout << "Yeahr: ";
    std::cin >> yeahr;
    if (month == 2 ){
        if (yeahr%4 == 0){
            std::cout << 29 << std::endl;
        }else{
            std::cout << 28 << std::endl;
        }
    }else{
        switch (month)
        {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            std::cout<< 31 << std::endl;
            break;
        default:
            std::cout<< 30 << std::endl;
            break;
        }
    }
    system("pause");
    return 0;
}