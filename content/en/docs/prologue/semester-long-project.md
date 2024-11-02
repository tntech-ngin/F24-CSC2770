---
title: "Programming Challenge"
description: ""
lead: ""
date: 2024-08-26T11:05:37-06:00
lastmod: 2024-08-26T11:05:37-06:00
draft: false
images: []
menu:
  docs:
    parent: ""
    identifier: "program-csc2770"
weight: 1
toc: true
---
### High-Level Problem Description: "Mission Control: The Ultimate Systems Challenge"

**Scenario Overview:**

In the year 2145, humanity has established a colony on the distant planet Epsilon 6. The colony's survival depends on building, managing, and optimizing interconnected computer systems that handle everything from life support and resource management to defense and communication. Each team represents a different faction within the colony (e.g., Engineering, Medical, Defense), responsible for maintaining a critical subsystem.

However, the colony faces significant challenges: limited resources, harsh environmental conditions, and potential threats from rival factions or extraterrestrial forces. The success of each faction—and the colony as a whole—depends on their ability to efficiently utilize their constrained resources to solve complex computing problems.

**Objective:**

Teams must complete a series of challenges that involve programming tasks in C or C++ under resource constraints. Each challenge reflects real-world computing scenarios where teams must balance efficiency, performance, and resource management. The goal is to build a robust and resilient network of systems capable of supporting the colony's growth and defense.

### Bi-Weekly Problem Descriptions

---

#### **Weeks 1-2: Binary Conversion Under Pressure**

- **Problem**: The colony receives an encrypted communication from Earth in multiple number formats (decimal, binary, hexadecimal). The colony's communication system has limited processing power and must quickly decode the message to send an urgent response.
- **Task**: Write an optimized C program to convert numbers between different formats within strict time limits.
- **Resource Constraints**: Limited CPU cycles available for conversions; the program must run within a maximum execution time of 1 second for each conversion.
- **Outcome**: Teams learn to optimize conversion algorithms for speed and efficiency, crucial for real-time data processing.

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void decimalToBinary(int decimal);
void decimalToHex(int decimal);
void binaryToDecimal(char *binary);
void binaryToHex(char *binary);
void hexToDecimal(char *hex);
void hexToBinary(char *hex);

// Function to print the hexadecimal number in reverse order
void printHexInReverse(char hex[], int length) {
    printf("Hexadecimal: ");
    for (int j = length - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

// Function to convert decimal to binary (placeholder)
void decimalToBinary(int decimal) {
    printf("Converting decimal %d to binary...\n", decimal);
    // Conversion logic will go here
    printf("Binary: %s\n", binary);

}

// Function to convert decimal to hexadecimal (placeholder)
void decimalToHex(int decimal) {
    printf("Converting decimal %d to hexadecimal...\n", decimal);
    // Conversion logic will go here

    // Call the function to print the hexadecimal number in reverse order
    printHexInReverse(hex, i);
    
}

// Function to convert binary to decimal (placeholder)
void binaryToDecimal(char *binary) {
    printf("Converting binary %s to decimal...\n", binary);
    // Conversion logic will go here
    printf("Decimal: %d\n", decimal);

}

// Function to convert binary to hexadecimal (placeholder)
void binaryToHex(char *binary) {
    printf("Converting binary %s to hexadecimal...\n", binary);
    // Conversion logic will go here

    // Call the function to print the hexadecimal number in reverse order
    printHexInReverse(hex, i);
}

// Function to convert hexadecimal to decimal (placeholder)
void hexToDecimal(char *hex) {
    printf("Converting hexadecimal %s to decimal...\n", hex);
    // Conversion logic will go here
    printf("Decimal: %d\n", decimal);

}

// Function to convert hexadecimal to binary (placeholder)
void hexToBinary(char *hex) {
    printf("Converting hexadecimal %s to binary...\n", hex);
    // Conversion logic will go here
    printf("Binary: %s\n", binary);

}



// Main function to handle inputs and trigger conversions
int main(int argc, char *argv[]) {
    // Ensure correct number of arguments are provided
    if (argc != 3) {
        printf("Usage: %s -[d|b|h] [number]\n", argv[0]);
        printf("Options:\n");
        printf("-d [decimal]     Convert decimal to binary and hexadecimal\n");
        printf("-b [binary]      Convert binary to decimal and hexadecimal\n");
        printf("-h [hexadecimal] Convert hexadecimal to decimal and binary\n");
        return 1;
    }

    // Extract the flag and value from arguments
    // Check which flag was provided and call the appropriate function
    }

    return 0;
}

```
---

```
Test Inputs
1. Empty Input

    Test Case 1.1: -b ''
    Test Case 1.2: -h ''
    Test Case 1.3: -d ''

2. Input Overflow

    Test Case 2.1: -d 99999999999999999999999999999
    Test Case 2.2: -b 111111111111111111111111111111111111111111111111111111111111111111111111

3. Invalid Characters in Binary and Hexadecimal Input

    Test Case 3.1: -b 11012
    Test Case 3.2: -h 1G3H

4. Lowercase Hexadecimal Input

    Test Case 4.1: -h 1a2b

5. Negative Decimal Input

    Test Case 5.1: -d -15

6. Non-Numeric Characters in Decimal Input

    Test Case 6.1: -d 123abc

7. Valid Large Binary Input

    Test Case 7.1: -b 00001111

8. Invalid Flag

    Test Case 8.1: -x 123

9. Overflow When Converting Hexadecimal to Decimal

    Test Case 9.1: -h FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF

10. Valid Decimal to Binary and Hexadecimal Conversions

    Test Case 10.1: -d 255
    Test Case 10.2: -d 1024

11. Valid Binary to Decimal and Hexadecimal Conversions

    Test Case 11.1: -b 1111
    Test Case 11.2: -b 101010

12. Valid Hexadecimal to Decimal and Binary Conversions

    Test Case 12.1: -h FF
    Test Case 12.2: -h 1A
    Test Case 12.3: -h ABCD
```

#### **Weeks 3-4: Memory Mapping with Limited Space**

- **Problem**: A critical subsystem malfunction requires immediate memory reorganization. Due to a hardware failure, only a small portion of the memory is available. Teams need to allocate and manage memory efficiently to maintain subsystem operations.
- **Task**: Create a C program that allocates memory dynamically for different data types within a limited memory space (e.g., 256 bytes).
- **Resource Constraints**: Limited memory availability; the program must avoid memory fragmentation and efficiently manage space for dynamic allocations.
- **Outcome**: Teams learn effective memory management strategies, including dynamic allocation and avoiding memory leaks under constrained conditions.

```
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MEMORY_SIZE 256
#define LARGE_MEMORY_SIZE (1 * 1024 * 1024) // 1 MB
#define BAD_BLOCK 'X'

// Simulate the memory space for our allocator
static char memory[MEMORY_SIZE];

// Simulate a large memory space for testing
char *large_memory = NULL;

// Structure to manage memory blocks
typedef struct Block {
    size_t size;
    bool free;
    struct Block *next;
} Block;

Block *freeList = (Block*)memory;

// Initialize the memory manager
void initializeMemory() {
    freeList->size = MEMORY_SIZE - sizeof(Block);
    freeList->free = true;
    freeList->next = NULL;
}

// Randomly mark blocks as "bad" in the large memory
void markBadBlocks(char *memory, size_t size, size_t badBlockCount) {
    srand(time(NULL));
    for (size_t i = 0; i < badBlockCount; i++) {
        size_t randomIndex = rand() % size;
        memory[randomIndex] = BAD_BLOCK; // Mark as bad block
    }
}

// Skeleton function: Allocate memory dynamically, skipping bad blocks
void* myMalloc(size_t size) {
    // STUDENTS: Implement logic to allocate memory dynamically, ensuring that you skip over bad blocks
    return NULL; // Placeholder return value
}

// Skeleton function: Free the allocated memory
void myFree(void *ptr) {
    // STUDENTS: Implement logic to free the allocated memory
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <size_of_allocation>\n", argv[0]);
        return 1;
    }

    // Convert the command-line argument to an integer for allocation size
    size_t allocationSize = atoi(argv[1]);

    // Initialize memory management
    initializeMemory();

    // Allocate a large memory block (1 MB)
    large_memory = (char*)malloc(LARGE_MEMORY_SIZE);
    if (large_memory == NULL) {
        printf("Failed to allocate large memory.\n");
        return 1;
    }

    // Mark some blocks as "bad"
    markBadBlocks(large_memory, LARGE_MEMORY_SIZE, 1000); // Mark 1000 bad blocks

    // Simulate memory allocation
    int *array = (int*)myMalloc(allocationSize * sizeof(int));  // Allocate memory for an array of integers
    if (array == NULL) {
        printf("Memory allocation failed.\n");
    } else {
        // Assign values to the array and print them
        for (int i = 0; i < allocationSize; i++) {
            array[i] = i * i;  // Assign square of index
            printf("Array[%d] = %d\n", i, array[i]);
        }

        // Free the allocated memory
        myFree(array);
        printf("Memory successfully freed.\n");
    }

    // Clean up large memory block using system's free function
    myFree(large_memory);

    return 0;
}
```

***Output***
```
./memory_manager 10


Array[0] = 0
Array[1] = 1
Array[2] = 4
Array[3] = 9
Array[4] = 16
Array[5] = 25
Array[6] = 36
Array[7] = 49
Array[8] = 64
Array[9] = 81
Memory successfully freed.

```

***Unit Tests***

```
// Unit Test Functions
void testMemoryAllocation() {
    // Test 1: Allocate memory for an array of size 10
    int *array = (int*)myMalloc(10 * sizeof(int));
    if (array != NULL) {
        printf("Test 1 Passed: Memory allocated for an array of size 10\n");
        myFree(array);
    } else {
        printf("Test 1 Failed: Memory allocation for array of size 10 failed.\n");
    }

    // Test 2: Try to allocate more memory than available
    int *largeArray = (int*)myMalloc(MEMORY_SIZE + 1);
    if (largeArray == NULL) {
        printf("Test 2 Passed: Large memory block allocation failed as expected.\n");
    } else {
        printf("Test 2 Failed: Large memory block should not have been allocated.\n");
        myFree(largeArray);
    }

    // Test 3: Allocate memory while skipping bad blocks
    int *testBlock = (int*)myMalloc(50 * sizeof(int));
    if (testBlock != NULL) {
        printf("Test 3 Passed: Memory allocated by skipping bad blocks.\n");
        myFree(testBlock);
    } else {
        printf("Test 3 Failed: Memory allocation should have succeeded by skipping bad blocks.\n");
    }
}

// Run all tests
void runTests() {
    testMemoryAllocation();
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <size_of_allocation>\n", argv[0]);
        return 1;
    }

    // Convert the command-line argument to an integer for allocation size
    size_t allocationSize = atoi(argv[1]);

    // Initialize memory management
    initializeMemory();

    // Allocate a large memory block (1 MB)
    large_memory = (char*)malloc(LARGE_MEMORY_SIZE);
    if (large_memory == NULL) {
        printf("Failed to allocate large memory.\n");
        return 1;
    }

    // Mark some blocks as "bad"
    markBadBlocks(large_memory, LARGE_MEMORY_SIZE, 1000); // Mark 1000 bad blocks

    // Run unit tests
    runTests();

    // Clean up large memory block using the system free function
    free(large_memory);

    return 0;
}
```

***Sample Unit Tests Output***
```
Test 1 Passed: Memory allocated for an array of size 10
Test 2 Passed: Large memory block allocation failed as expected.
Test 3 Passed: Memory allocated by skipping bad blocks.
```



---

#### **Weeks 5-6: Network Configuration with Limited Bandwidth**

- **Problem**: Communication between different sectors of the colony is disrupted due to a bandwidth limitation. Teams must optimize their network setup to ensure reliable and efficient communication with minimal bandwidth.
- **Task**: Use socket programming in C to develop a client-server application that optimizes data transmission. 
- **Constraints**: Limited packet sizes (150 bytes); Teams must use UDP; Implement efficient data transmission protocols to keep track of lost packets and retransmit.
- **Outcome**: Teams learn to create data transmission methods under resource constraints, crucial for maintaining communication quality.

```
// server.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define MAX_PACKET_SIZE 150  // Limit packet size to 150 bytes

// Function declarations
int create_server_socket();
void bind_server_socket(int server_fd, struct sockaddr_in *address);
int accept_client_connection(int server_fd, struct sockaddr_in *address);
void handle_client(int client_socket);
void close_server_socket(int server_fd);

int main() {
    int server_fd, client_socket;
    struct sockaddr_in address;
    
    server_fd = create_server_socket();
    bind_server_socket(server_fd, &address);
    listen_for_connections(server_fd);

    while (1) {
        client_socket = accept_client_connection(server_fd, &address);
        handle_client(client_socket);
    }

    close_server_socket(server_fd);
    return 0;
}

// Function to create the server socket
int create_server_socket() {
    // TODO: Implement server socket creation
    return 0;
}

// Function to bind the server socket to an address and port
void bind_server_socket(int server_fd, struct sockaddr_in *address) {
    // TODO: Implement binding the server socket to an address
}

// Function to accept client connections
int accept_client_connection(int server_fd, struct sockaddr_in *address) {
    // TODO: Implement accepting client connection
    // You this is where you keep state related to the client. This might be useful for retransmission.
    return 0;
}

// Function to handle communication with the client
void handle_client(int client_socket) {
    // TODO: Implement the logic to receive and send data to the client
}

// Function to close the server socket
void close_server_socket(int server_fd) {
    // TODO: Implement closing the server socket
}

```


```
// client.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define MAX_PACKET_SIZE 150  // Limit packet size to 150 bytes

// Function declarations
int create_client_socket();
void connect_to_server(int client_socket, struct sockaddr_in *serv_addr);
void send_message(int client_socket, const char *message);
void close_client_socket(int client_socket);

int main() {
    int client_socket;
    struct sockaddr_in serv_addr;
    char *message = "This is an example of a very long message that will be broken into multiple 150-byte packets.";

    client_socket = create_client_socket();
    connect_to_server(client_socket, &serv_addr);
    send_message(client_socket, message);
    close_client_socket(client_socket);

    return 0;
}

// Function to create the client socket
int create_client_socket() {
    // TODO: Implement client socket creation
    return 0;
}

// Function to connect the client to the server
void connect_to_server(int client_socket, struct sockaddr_in *serv_addr) {
    // TODO: Implement connecting the client to the server
    // You can emulate TCP behavior here. For now simply print which server you are connecting to.
    // More advanced clients will need to keep track of which server they are connecting to, you can ignore this for now.
}

// Function to send an arbitrarily long message to the server
void send_message(int client_socket, const char *message) {
    // TODO: Implement message sending in chunks of 150 bytes
}

// Function to close the client socket
void close_client_socket(int client_socket) {
    // TODO: Implement closing the client socket
}

```

```
Rubric:
1. **Using UDP (10 points)**: Both client and server correctly implement UDP (SOCK_DGRAM).
2. **Fragmenting on the Client (10 points)**: Client properly splits messages longer than 150 bytes into 150-byte packets.
3. **Reassembling on the Server (10 points)**: Server accurately reassembles fragmented packets received from the client.
4. **Oversized Packets (10 points)**: Oversized packets are correctly handled, either rejected or not sent by the client.
5. **Handling Very Large Message (10 points)**: Very large messages are handled properly, fragmented, transmitted, and reassembled without issues.
6. **Handling Empty Message (10 points)**: Empty messages are handled gracefully without causing errors in transmission.
7. **Partial Packet Handling (10 points)**: The final partial packet (less than 150 bytes) is handled correctly by both client and server.
8. **Server Binding (10 points)**: Server successfully binds to the specified address and port.
9. **Server Accept (10 points)**: Server correctly accepts and handles incoming connections from the client.
10. **General code formatting and logging (10 points)**
```
---

#### **Weeks 7-8: CPU Cycle Optimization with Limited Processing Power**

- **Problem**: A power outage forces the colony to run its operations on a backup CPU with limited processing power. Teams must optimize the CPU's fetch-and-execute cycle to ensure all critical systems remain operational.
- **Task**: Simulate a CPU fetch-and-execute cycle in C, optimizing instruction execution under cycle constraints (e.g., 100 cycles).
- **Resource Constraints**: Limited CPU cycles available; teams must optimize the order and execution of instructions to minimize cycle usage while maintaining functionality.
- **Outcome**: Students learn CPU optimization techniques and develop the ability to maximize efficiency under processing constraints.

---

#### **Weeks 9-10: Storage System Designer with Limited Access**

- **Problem**: The colony's data center faces a critical storage shortage. Teams must redesign their storage systems to prioritize essential data and optimize read/write operations under constrained access conditions.
- **Task**: Implement a storage management system in C that simulates limited read/write operations and prioritizes critical data.
- **Resource Constraints**: Limited storage operations (e.g., 50 read/write operations); teams must prioritize essential data and optimize access patterns to reduce latency.
- **Outcome**: Teams gain experience in managing storage resources efficiently, ensuring optimal data retrieval and storage under constrained conditions.

---


#### **Weeks 11-12: Dynamic Memory Manager with Limited Resources**

- **Problem**: The colony's mainframe is overloaded with emergency data logs due to a storm. The system needs a dynamic memory manager that can handle frequent allocation and deallocation without running out of memory.
- **Task**: Develop a memory manager in C that allocates and deallocates memory dynamically, ensuring no memory leaks within a restricted memory limit (e.g., 512 bytes).
- **Resource Constraints**: Limited memory space and frequent allocation/deallocation requests; the memory manager must efficiently manage memory and prevent fragmentation.
- **Outcome**: Teams enhance their skills in dynamic memory management, learning to handle fluctuating data loads and prevent memory leaks in resource-constrained environments.


#### **Weeks 13-14: Secure Communication with Limited Resources**

- **Problem**: A rival faction attempts to intercept colony communications. Teams must enhance their network security protocols to encrypt data and authenticate users while operating under limited processing and memory resources.
- **Task**: Enhance the client-server application to use efficient encryption and authentication techniques in C, balancing security with available resources.
- **Resource Constraints**: Limited processing power and memory; teams must implement security measures that protect data integrity and confidentiality without overloading the system.
- **Outcome**: Students learn to balance security and performance, optimizing cryptographic algorithms under resource constraints to ensure secure communication.

---

### Success Criteria:

To succeed, each team must complete the bi-weekly challenges by writing efficient and effective C/C++ programs. Performance is evaluated based on the correctness of their solutions, the efficiency of resource usage, and the ability to optimize under constraints. The team with the most points at the end of the 10-week period (spanning 14 weeks) is awarded the title of "Ultimate Systems Champions".
