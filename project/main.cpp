#include <iostream>
#include <fstream>

void enterData(std::string data)
{

    std::ifstream check("./data.txt");

    std::ofstream file("./data.txt");

    file << data;
    file.close();
}
int main()
{

    std::string data;
    std::string answer;
    std::cout << "Enter your name:";
    std::cin >> data;
    data += '\n';

    std::cout << "Enter your age:";

    std::cin >> data;
    enterData(data);


    while (true)
    {
        std::cout << "Are you sure this is the information you wanted to enter? Y/N? \n";
        std::cin >> answer;

        if (answer == "Y")
            break;
        data.clear();
        std::cout << "Enter your name again:";
        std::cin >> data;
        data += '\n';

        std::cout << "Enter your age again:";
        std::string age;
        std::cin >> age;

        data += age;
        enterData(data);
    }
    std::cout << "This is the information you have provided us with:\n";
    std::ifstream readFile("./data.txt");
    readFile >> data;
    std::cout << "Name: " << data << std::endl;

    readFile >> data;
    std::cout << "Age: " << data;
    readFile.close();

    std::cout << "\nDo you want to delete the data you inserted? Y/N\n";

    std::cin >> answer;


    if (answer == "Y")
    {
        std::ofstream file("./data.txt");
        file.clear();
        file.close();
    }
    else
    {
        std::cout << "The file has not been cleared";

    }


}

