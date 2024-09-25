---
title: "Lab1"
description: ""
lead: ""
date: 2023-01-12T11:09:01-06:00
lastmod: 2023-01-12T11:09:01-06:00
draft: false
images: []
menu:
  docs:
    parent: ""
    identifier: "program1-0e4bde5bb61c2a4f1e4d42c95c108a96"
weight: 20
toc: true
---

## Instructions
Note: The following guide provides step-by-step instructions for creating and configuring virtual machines (VMs) on the Google Cloud Platform (GCP). Subsequently, the guide outlines the process of establishing network connectivity between these VMs using the “ping” command. This exercise aims to provide students with a practical understanding of cloud-based virtualization, network configuration, and basic connectivity testing. This lab is ungraded.

## Lab Objectives
   - Creating two virtual machines on Google Cloud.
   - Configuring network settings for the VMs.
   - Testing network connectivity between the VMs using the “ping” command.

## Prerequisites

   - An active Google Cloud account.
    - **You can create an account that comes with sign-up credits. The current sign-up credit is $300 for 90 days. We will distribute additional credits as they become available.**
   - Basic familiarity with command-line interfaces and networking concepts.
   - We will provide coupon codes once we hear from Google.

# Step 1: Creating Virtual Machines 
  - Log in to your Google Cloud Console.
  - Navigate to the Compute Engine section and click on “VM instances.”
  - Click the “Create Instance” button to create your first VM.
     - Choose a suitable name and region for your VM.
     - Select a machine type based on your requirements.
     - Configure boot disk settings.
     - Configure firewall rules to allow ICMP (ping) traffic.


### Step 2: Configuring Network Settings 
  - Once both VMs are created, take note of their internal and external IP addresses.
  - To enable communication between the VMs, configure their firewall settings to allow ICMP traffic.
    - In the “Firewall” section, establish a new firewall rule.
    - Provide a name and description for the rule.
    - Set the target tags to match the VMs you’ve created.
    - Define the source IP ranges as the internal IP address of the other VM.
    - Allow ICMP protocol
    
### Step 3: Testing Connectivity    
  - Access one of the VMs through SSH using a terminal or command prompt.
  - Utilize the “ping” command to examine connectivity to the other VM.
