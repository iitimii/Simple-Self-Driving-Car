# Simple Obstacle Detection and Collision Avoidance Self-Driving Car
- [Car Image](./images/chasis.jpg) 

This repository contains the code and resources for a simple self-driving car prototype that utilizes an Arduino, SG90 servo motor, and HC-SR04 ultrasonic sensor for obstacle detection and collision avoidance.

## Table of Contents
- [Introduction](#introduction)
- [Components](#components)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Circuit Connection](#circuit-connection)
  - [Installation](#installation)
- [Usage](#usage)
- [Algorithm Overview](#algorithm-overview)
- [Demo](#demo)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction
In this project, I've developed a simple self-driving car prototype using an Arduino UNO, SG90 servo motor, HC-SR04 ultrasonic sensor, an L298N motor controller, and a 2-cell 18650 LiPo battery for obstacle detection and collision avoidance with bidirectional steering.

## Components
- Arduino UNO
- SG90 Servo Motor
- HC-SR04 Ultrasonic Sensor
- L298N Motor Driver
- 2-Cell 18650 LiPo Battery (7.4V)
- 2S Battery Holder

## Features
- **Obstacle Detection:** The car uses the HC-SR04 ultrasonic sensor to detect obstacles in its path.
- **Servo-Mounted Sensor:** The ultrasonic sensor is mounted on an SG90 servo motor, enabling it to scan for obstacles in different directions.
- **Collision Avoidance:** When obstacles are detected, the car utilizes its differential drive mechanism to steer away from the obstacles.
- **Bidirectional Steering:** The steering mechanism allows the car to rotate in both directions for enhanced manoeuvrability.
- **Motor Control:** The L298N motor driver controls the movement of the car's wheels.
- **Power Source:** The car is powered by a 2-cell 18650 LiPo battery (7.4V) connected using a 2S battery holder.

### Prerequisites
- Arduino IDE installed on your computer.
- ```Servo.h``` Arduino library 

### Circuit Connection
![Circuit Diagram](./images/circuit%20%diagram.jpg) 

### Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/iitimii/Obstacle-Detection-and-Collision-Avoidance-Self-Driving-Car.git
   cd Obstacle-Detection-and-Collision-Avoidance-Self-Driving-Car
   ```
2. Open the Arduino IDE and load the provided code onto your Arduino.

## Usage
- Power on the self-driving car using the two-cell lipo battery.
- The car will move straight until the ultrasonic sensor detects an obstacle.
- The servo-mounted sensor will rotate to find the direction with the most distance.
- The car will engage its unique steering mechanism to steer away from obstacles and continue moving.

## Demo
![Demo Video](./video/functional%20%video.MP4) 


## License
This project is licensed under the [MIT License](LICENSE).
