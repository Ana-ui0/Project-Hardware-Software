Here's a clear and descriptive README file for your GitHub repository that neatly summarizes your university project:


# Component Tester for RC-Circuits Using STM32 Nucleo Boards

## Overview

This repository contains the implementation of a **Component Tester for RC-circuits**, developed during the **Computer Engineering Laboratory** course at RWTH Aachen University. The project was carried out using an STM32F429ZI Nucleo board, employing the agile **Scrum methodology** for structured software development.

## Objectives

The main goal of this project was to design, implement, and test a device capable of measuring the **time constant (τ)** of an RC-circuit accurately, providing interactive user feedback through onboard peripherals and displays.

### Key Learning Outcomes:

* Agile project management (Scrum methodology).
* Structured software development and debugging.
* Effective use of hardware peripherals (LCD, LEDs, buttons).
* Implementing event-driven programming.

## Hardware and Tools

The following hardware components and software tools were used:

* **Microcontroller**: STM32 Nucleo-F429ZI board.
* **RC Components**: Resistors and capacitors for building RC circuits.
* **Display**: LCD with PCF8574 Remote I/O expander (I²C protocol).
* **Breadboards and Jumper Cables**: For building and connecting the circuit.
* **RGB LED Module**: For visual feedback.
* **STM32CubeIDE**: Integrated Development Environment (IDE) for software development.
* **C++ Programming**: Utilizing an object-oriented event-driven structure.

## Project Structure

The project is organized into two main Scrum sprints, each delivering distinct increments of the final product:

### Sprint 1 (Initial Prototype):

* Basic program flow implemented using onboard peripherals.
* Interactive user prompts via LCD display.
* LEDs for system state indication (idle, operation, cleanup, result).
* Event handling structure (Start, Cancel, Display events).

### Sprint 2 (Functional Prototype):

* Integration of external peripherals (RC circuit).
* Debouncing algorithm for button presses.
* Accurate measurement and calculation of the RC time constant.
* Multiple measurements with averaging to enhance accuracy.
* Comparison of measured values against theoretical expectations.

## Project Workflow and Methodology

The development followed agile practices with key roles defined as follows:

* **Scrum Master**: Moderating and providing guidance during development.
* **Product Owner**: Defining requirements, maintaining product backlog, reviewing sprint outcomes.
* **Development Team**: Coding, debugging, and implementing project requirements in iterative sprints.

Regular **Scrum meetings**, sprint planning, retrospectives, and intermediate/final presentations structured the workflow, ensuring steady progress and continuous improvement.

## Technical Implementation Highlights

* **Event-Driven Architecture**: Events queued and processed asynchronously.
* **Measurement Algorithm**: Implemented using differential equations and Laplace transforms for signal analysis.
* **Debouncing Techniques**: Mitigating mechanical switch inaccuracies.

## How to Use the Project

### Prerequisites:

* STM32CubeIDE installation.
* STM32F429ZI Nucleo Board and additional peripherals.

### Setup Instructions:

1. Clone the repository.
2. Import the project into STM32CubeIDE.
3. Compile and deploy onto the Nucleo board.
4. Follow on-screen instructions via the LCD and interact using onboard buttons.

## Contributions and Contact

For questions, improvements, or suggestions, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License—see the [LICENSE](LICENSE) file for details.

---

Enjoy exploring and improving this project!
