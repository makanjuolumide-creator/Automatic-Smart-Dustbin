# Automatic-Smart-Dustbin

An automated, touchless smart dustbin prototype built using an **Arduino Uno**, an **HC-SR04 ultrasonic proximity sensor**, and **dual servo motors**. Designed and prototyped as my first hands-on engineering project as a freshman Electrical Engineering student at the **University of Illinois Chicago (UIC)**.

---

## Project Overview

This project bridges digital simulation, embedded hardware logic, and physical system design. It detects an approaching hand or object within a preset distance threshold and automatically actuates a dual-servo mechanical mechanism to open and close the lid hands-free.

---

## Hardware & Components

| Component | Quantity | Description |
| :--- | :---: | :--- |
| **Arduino Uno** | 1 | Microcontroller board handling sensor logic and actuation signals |
| **HC-SR04 Ultrasonic Sensor** | 1 | Emits ultrasonic waves to measure object distance/proximity |
| **Micro Servos (SG90)** | 2 | Mechanical actuators connected to the lid hinge mechanism |
| **Solderless Breadboard** | 1 | Prototyping circuit board for component interconnects |
| **Jumper Wires** | — | Male-to-male and male-to-female jumper connections |
| **Power Source** | 1 | 5V DC USB / Battery supply |

---

## System Architecture & Logic

1. **Distance Sensing:** The HC-SR04 sensor continuously sends out ultrasonic pulses and calculates the distance to the target based on time-of-flight echo readings.
2. **Threshold Triggering:** The Arduino processes incoming sensor data. If an object is detected within the programmed distance threshold, a trigger signal is executed.
3. **Dual-Servo Actuation:** Both servo motors rotate simultaneously to actuate the mechanical lid hinge and lift the lid open.
4. **Auto-Close Delay:** The lid remains open for a set delay before the servos smoothly return to 0° (closed position).

---

## Development Phases & Progress

- [x] **Phase 1: Circuit Simulation** — Modeled circuit schematic and verified threshold logic in Tinkercad.
- [x] **Phase 2: Hardware Breadboard Build** — Wired physical components, isolated and debugged serial/sensor communication errors, and verified dual-servo actuation.
- [ ] **Phase 3: 3D CAD Chassis Design** — Model custom enclosure, mounting brackets, and lid hinge in Autodesk Fusion 360.
- [ ] **Phase 4: 3D Printing & Enclosure** — Print physical chassis components and test mounting tolerances.
- [ ] **Phase 5: Final Systems Integration & C++** — Perform final wiring, mount power source, and rewrite control logic in native C++.

---

## License

This project is open-source and licensed under the [MIT License](LICENSE).
