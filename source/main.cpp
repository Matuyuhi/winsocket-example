//
// Created by matuyuhi on 2023/12/20.
//

#include <iostream>
#include "../header/NetworkEntity.h"
#include "../header/Server.h"
#include "../header/Client.h"

int main()
{
    std::string mode;
    std::cout << "Start as (server/client): ";
    std::cin >> mode;

    NetworkEntity* networkEntity;
    // 入力からstringを受け取り、それに応じてモードを切り替える
    if (mode == "server")
    {
        networkEntity = new winsocket::Server();
    }
    else if (mode == "client")
    {
        networkEntity = new winsocket::Client();
    }
    else
    {
        std::cerr << "Invalid mode selected." << '\n';
        return 1;
    }

    networkEntity->Start();
    delete networkEntity;
    return 0;
}
