#include <iostream>
#include <string>
#include <cstring>

int main(){
    char str[512] = "3744@6646@63-4@461@127@37-50";
    //std::cin >> str;
    char *ptr = 0;
    ptr = strtok(str, "@");
    while (ptr){
        std::string datch {ptr[0], ptr[1]};
        std::string temp;
        std::cout << ptr[0] << ptr[1] << std::endl;
        for (int i = 2; i <= sizeof(ptr)-1; i++){
            temp += ptr[i];
        }
        int id = std::stoi (datch);
        int tmp = std::stoi (temp);
        std::cout << id << " -> "<< tmp << std::endl;

        ptr = strtok(0, "@");
    }

    system("pause");
    return 0;
}