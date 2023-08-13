# Simple Obstacle Detection and Collision Avoidance Self Driving Car

https://github.com/iitimii/Obstacle-Detection-and-Collision-Avoidance-Self-Driving-Car/blob/main/video/functional%20video.MP4

![Demo Video](./video/functional%20%video.MP4) 

https://github.com/iitimii/Obstacle-Detection-and-Collision-Avoidance-Self-Driving-Car/blob/main/images/car%20image.jpg
![Car Image](./images/car%20%image.jpg)

This repository contains the code and resources for a simple self-driving car prototype that utilizes an Arduino, SG90 servo motor, HC-SR04 ultrasonic sensor, and differential drive for obstacle detection and collision avoidance.

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
In this project, we've developed a simple self-driving car prototype using an Arduino, SG90 servo motor, HC-SR04 ultrasonic sensor, and a differential drive mechanism for obstacle detection and collision avoidance. The car employs a unique steering mechanism where the left wheels are set to reverse while the right wheel rotates forward, creating a torque that facilitates rotation.

## Components
- Arduino
- SG90 Servo Motor
- HC-SR04 Ultrasonic Sensor

## Features
- **Obstacle Detection:** The car uses the HC-SR04 ultrasonic sensor to detect obstacles in its path.
- **Servo-Mounted Sensor:** The ultrasonic sensor is mounted on an SG90 servo motor, enabling it to scan for obstacles in different directions.
- **Collision Avoidance:** When obstacles are detected, the car utilizes its differential drive mechanism to steer away from the obstacles.
- **Unique Steering Mechanism:** The left wheels are set to reverse while the right wheel rotates forward, creating a torque that facilitates the car's rotation.

## Getting Started
Follow these instructions to set up the project on your Arduino and test the self-driving car prototype.

### Prerequisites
- Arduino IDE installed on your computer.

### Circuit Connection
1. Connect the SG90 servo motor to the appropriate pins on the Arduino.
2. Connect the HC-SR04 ultrasonic sensor to the Arduino following the required connections.

### Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/your-username/Simple-SDC-Collision-Avoidance.git
   cd Simple-SDC-Collision-Avoidance
   ```
2. Open the Arduino IDE and load the provided code onto your Arduino.

## Usage
- Power on the self-driving car.
- The car will move straight until the ultrasonic sensor detects an obstacle.
- The servo-mounted sensor will rotate to find the direction with the most distance.
- The car will engage its unique steering mechanism to steer away from obstacles and continue moving.

## Algorithm Overview
The algorithm consists of the following steps:
1. Move the car straight.
2. Continuously monitor the ultrasonic sensor for obstacle detection.
3. When an obstacle is detected, rotate the servo-mounted ultrasonic sensor to find the direction with the most distance.
4. Engage the unique steering mechanism to steer the car away from obstacles.

## Demo
Include a GIF or video showcasing your self-driving car prototype in action.

## Contributing
Contributions to this project are welcome! Feel free to suggest enhancements, report issues, or submit pull requests.

## License
This project is licensed under the [MIT License](LICENSE).

## Acknowledgments
- [List any resources, tutorials, or tools you used and would like to credit here.]

---

Remember to customize the placeholders and details to match your specific project. This README template should help provide comprehensive information about your self-driving car prototype, including its steering mechanism and overall functionality.
