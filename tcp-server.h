#ifndef INCLUDED_HTTP_TCPSERVER_LINUX
#define INCLUDED_HTTP_TCPSERVER_LINUX

#include <string>

namespace http 
{
    class TCPServer 
    {
        public:
            TCPServer(std::string IP, int port);
            ~TCPServer();
            void startListen();

        private:
            std::string IP;
            int m_port;
            int m_socket;
            int m_new_socket;
            long m_incomingMessage;
            int startServer();
            void closeServer();

    };
} 
#endif