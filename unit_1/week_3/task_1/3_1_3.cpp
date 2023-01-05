#include <iostream>
#include <string>
#include <cstring>

void uniq_mas(int *ids, double *temps, int ind)
{
    int *whitelist = new int[256];
    for (int i = 0; i < ind; i++)
    {
        bool checked = false;
        for (int j = 0; j < 255; j++)
        {
            if (ids[i] == whitelist[j])
            {
                checked = true;
            }
        }
        if (checked)
        {
            continue;
        }
        double temp = 0;
        int count = 0;
        for (int j = 0; j < ind; j++)
        {
            if (ids[i] == ids[j])
            {
                temp += temps[j];
                count++;
            }
        }
        temps[i] = temp / count;
        whitelist[i] = ids[i];
        for (int j = i + 1; j < ind; j++)
        {
            if (ids[j] == ids[i])
            {
                ids[j] = 0;
                temps[j] = 0;
            }
        }
    }
}

int split_data(char *states, int *ids, double *temps)
{
    int ind = 0;
    char *ptr = 0;
    ptr = strtok(states, "@");
    while (ptr)
    {
        std::string datch{ptr[0], ptr[1]}, temp;
        for (int i = 2; i <= sizeof(ptr); i++)
        {
            temp += ptr[i];
        }
        temp += ".0";
        ids[ind] = std::stoi(datch);
        temps[ind] = std::stod(temp);
        ind += 1;
        ptr = strtok(0, "@");
    }
    return ind;
}

void print(int mode, int *ids, double *temps, int ind)
{
    int n_id[256];
    double n_temp[256];
    int index = 0;
    for (int i = 0; i < ind; i++)
    {
        if (ids[i] != 0)
        {
            n_id[index] = ids[i];
            n_temp[index] = temps[i];
            index++;
        }
    }
    delete[] ids;
    delete[] temps;
    for (int step = 0; step < index - 1; step++)
    {
        for (int i = 0; i < index - 1 - step; i++)
        {
            if (mode == 1)
            {
                if (n_id[i] > n_id[i + 1])
                {
                    int temp_id = n_id[i];
                    n_id[i] = n_id[i + 1];
                    n_id[i + 1] = temp_id;

                    double temp_t = n_temp[i];
                    n_temp[i] = n_temp[i + 1];
                    n_temp[i + 1] = temp_t;
                }
            }
            if (mode == 2)
            {
                if (n_temp[i] > n_temp[i + 1])
                {
                    int temp_id = n_id[i];
                    n_id[i] = n_id[i + 1];
                    n_id[i + 1] = temp_id;

                    double temp_t = n_temp[i];
                    n_temp[i] = n_temp[i + 1];
                    n_temp[i + 1] = temp_t;
                }
            }
        }
    }
    for (int i = 0; i < index; i++)
    {
        if (n_id[i] == 0)
        {
            continue;
        }
        printf("%d | %f\n", n_id[i], n_temp[i]);
    }
}

int main()
{
    char str[512];
    std::cout << "String from sensors\n> ";
    std::cin >> str;
    int ids[256];
    double temps[256];
    int ind = split_data(str, ids, temps);
    uniq_mas(ids, temps, ind);
    int mode;
    std::cout << "Chose sort target (1-Sensors, 2-Temps)\n> ";
    std::cin >> mode;
    print(mode, ids, temps, ind);
    system("pause");
    return 0;
}