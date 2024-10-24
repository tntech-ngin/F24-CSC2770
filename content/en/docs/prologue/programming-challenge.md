---
title: "Programming Challenge"
description: ""
lead: ""
date: 2024-08-26T11:05:37-06:00
lastmod: 2024-08-26T11:05:37-06:00
draft: true
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

---

#### **Weeks 3-4: Memory Mapping with Limited Space**

- **Problem**: A critical subsystem malfunction requires immediate memory reorganization. Due to a hardware failure, only a small portion of the memory is available. Teams need to allocate and manage memory efficiently to maintain subsystem operations.
- **Task**: Create a C program that allocates memory dynamically for different data types within a limited memory space (e.g., 256 bytes).
- **Resource Constraints**: Limited memory availability; the program must avoid memory fragmentation and efficiently manage space for dynamic allocations.
- **Outcome**: Teams learn effective memory management strategies, including dynamic allocation and avoiding memory leaks under constrained conditions.

---

#### **Weeks 5-6: Dynamic Memory Manager with Limited Resources**

- **Problem**: The colony's mainframe is overloaded with emergency data logs due to a storm. The system needs a dynamic memory manager that can handle frequent allocation and deallocation without running out of memory.
- **Task**: Develop a memory manager in C that allocates and deallocates memory dynamically, ensuring no memory leaks within a restricted memory limit (e.g., 512 bytes).
- **Resource Constraints**: Limited memory space and frequent allocation/deallocation requests; the memory manager must efficiently manage memory and prevent fragmentation.
- **Outcome**: Teams enhance their skills in dynamic memory management, learning to handle fluctuating data loads and prevent memory leaks in resource-constrained environments.

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

#### **Weeks 11-12: Network Configuration with Limited Bandwidth**

- **Problem**: Communication between different sectors of the colony is disrupted due to a bandwidth limitation. Teams must reconfigure their network setup to ensure reliable and efficient communication with minimal bandwidth.
- **Task**: Use socket programming in C to develop a client-server application that optimizes data transmission over a constrained network (e.g., 1 Mbps).
- **Resource Constraints**: Limited network bandwidth; teams must implement efficient data transmission protocols to minimize delays and maximize throughput.
- **Outcome**: Teams learn to optimize network configurations and data transmission methods under bandwidth constraints, crucial for maintaining communication quality.

---

#### **Weeks 13-14: Secure Communication with Limited Resources**

- **Problem**: A rival faction attempts to intercept colony communications. Teams must enhance their network security protocols to encrypt data and authenticate users while operating under limited processing and memory resources.
- **Task**: Enhance the client-server application to use efficient encryption and authentication techniques in C, balancing security with available resources.
- **Resource Constraints**: Limited processing power and memory; teams must implement security measures that protect data integrity and confidentiality without overloading the system.
- **Outcome**: Students learn to balance security and performance, optimizing cryptographic algorithms under resource constraints to ensure secure communication.

---

### Success Criteria:

To succeed, each team must complete the bi-weekly challenges by writing efficient and effective C/C++ programs. Performance is evaluated based on the correctness of their solutions, the efficiency of resource usage, and the ability to optimize under constraints. The team with the most points at the end of the 10-week period (spanning 14 weeks) is awarded the title of "Ultimate Systems Champions".
