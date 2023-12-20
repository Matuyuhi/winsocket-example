//
// Created by matuyuhi on 2023/12/20.
//

#include "../header/Input.h"

std::pair<int, std::string> Input::getInputNumbers()
{
    std::string input;
    std::cin >> input;
    if (std::isdigit(input[0]))
    {
        int number;
        std::stringstream ss(input);
        if (ss >> number)
        {
            return std::make_pair(number, "");
        }
    }

    return std::make_pair(INPUT_ERROR_NUMBER, input);
}
