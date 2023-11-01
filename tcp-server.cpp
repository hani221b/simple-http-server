#include <iostream>
#include <tcp-server.h>
#include <sys/socket.h>


namespace 
{

    void log(const std::string &message)
    {
        std::cout << message << std::endl; 
    }

    void exitWithError(const std::string &errorMessage)
    {
        log("Error: " + errorMessage);
        exit(1);
    }
}

namespace http 
{
    TCPServer::TCPServer(){

    }
    TCPServer::~TCPServer(){

    }

    int TCPServer::startServer(){
        int m_socket = socket(AF_INET, SOCK_STREAM, 0);
        if(m_socket < 0){
            // exitWithError("Cannot create socket");
            return 1;
        }
        return 0;
    }
}

