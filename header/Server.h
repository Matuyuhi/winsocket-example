//
// Created by matuyuhi on 2023/12/20.
//

#ifndef SERVER_H
#define SERVER_H

#include <map>
#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <sstream>

#include "NetworkEntity.h"


namespace winsocket
{
    /// \brief
    /// サーバー側でIDを割り当て、クライアントを識別する
    /// その他は通常の処理
    class Server : public NetworkEntity
    {
    public:
        void Start() override;

    private:
        std::map<int, SOCKET> clientSockets;
        std::atomic<int> nextClientId{1};
        std::mutex socketsMutex;

        
        void HandleClient(int clientId, SOCKET clientSocket);

        SOCKET SetupListeningSocket() const;

        /// クライアントとの接続が切れたときに呼ぶ
        void CloseClientConnection(int clientId);
    };
}


#endif //SERVER_H
