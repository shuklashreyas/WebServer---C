# Simple Web Server in C

This project implements a simple web server in C that listens for HTTP connections and responds with a "Hello world!" message. The server listens on a specified port and can handle multiple incoming connections.

## Getting Started

These instructions will help you set up and run the web server on your local machine.

### Prerequisites

Make sure you have a C compiler installed on your system. This project uses `gcc` for compilation, so ensure that `gcc` is installed.

### Running The Program

1) gcc Networking/test.c DataStructures/Common/Node.c DataStructures/Lists/LinkedList.c DataStructures/Lists/Queue.c Networking/Server.c
2) ./a.out
3) Visit : http://localhost:8080/

To check if `gcc` is installed, run:

```bash
gcc --version

sudo apt-get install gcc        # For Ubuntu/Debian
brew install gcc                # For macOS with Homebrew

.
├── DataStructures
│   ├── Common
│   │   └── Node.c
│   ├── Lists
│   │   ├── LinkedList.c
│   │   └── Queue.c
├── Networking
│   ├── Server.c
│   └── test.c
└── README.md



