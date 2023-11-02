#include "tcp-server.h"

int main()
{
    using namespace http;
    TCPServer server = TCPServer("0.0.0.0", 8090);
    return 0;
}