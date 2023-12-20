//
// Created by matuyuhi on 2023/12/20.
//

#ifndef CLIENT_H
#define CLIENT_H
#include "NetworkEntity.h"
#include <thread>

namespace winsocket
{
    /// クライアント側のコード
    class Client : public NetworkEntity
    {
    public:
        void Start() override;

    private:
        SOCKET connectSocket = 0;
        std::atomic<bool> running{true};
        void ReceiveMessages();
        /// サーバーとの接続を確立する
        SOCKET SetupConnection(const std::string& ipAddress) const;
    };
}


#endif //CLIENT_H
