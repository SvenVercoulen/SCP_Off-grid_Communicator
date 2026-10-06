# LoRaBasedCompass

## Project Description

LoRaBasedCompass is a communication device designed for use in locations where there is no internet or mobile network connection, especially in emergency situations.

The device uses **LoRa technology** to communicate with another device of the same type. This allows two users to stay connected and communicate with each other without relying on the internet or a mobile network.

The device includes a **digital compass** that helps users find each other by showing the direction of the other device. This can be especially useful when users become separated or when one user gets lost.

Users can also send **short messages** to each other through the devices.

## Emergency Detection

For emergency situations, the device includes a **gyroscope** and a **small speaker** to detect and respond to a possible fall.

When the device detects that it has been lying on its side for a certain amount of time, it will first produce a continuous audible alert. This gives the user an opportunity to pick up or reposition the device.

If the user does not respond within the set time, the device will automatically send an **emergency alert** to the other device. The other user will then be notified that the person may have fallen and could be unresponsive.

## Main Features

- 📡 **LoRa communication** – Communicate without internet or mobile network coverage.
- 🧭 **Digital compass** – Shows the direction of the other device.
- 💬 **Short messages** – Send messages between the two devices.
- 🚨 **Fall detection** – Detect a possible fall using a gyroscope.
- 🔊 **Audible warning** – Warn the user after a possible fall is detected.
- 🆘 **Emergency alert** – Automatically notify the other device if the user does not respond.

## Main Goal

The main goal of LoRaBasedCompass is to provide a **simple and reliable way for people to communicate and locate each other in areas without internet or mobile network coverage**.

The project is especially focused on situations where communication and locating another person can be important, such as outdoor activities, remote areas, or emergency situations.

## Technologies

- **LoRa** – Wireless communication over long distances
- **Gyroscope** – Fall and orientation detection
- **Digital Compass** – Direction detection
- **Speaker/Buzzer** – Audible warnings
- **Microcontroller** – Controls the device and its features

## How It Works

Two LoRaBasedCompass devices communicate directly with each other using LoRa.

1. The devices establish a LoRa connection.
2. Users can send short messages to each other.
3. Each device can determine the direction of the other device.
4. The compass shows the user which direction to move to find the other device.
5. The gyroscope continuously monitors the device for a possible fall.
6. If a possible fall is detected, the device produces an audible warning.
7. If the user does not respond, an emergency alert is sent to the other device.
