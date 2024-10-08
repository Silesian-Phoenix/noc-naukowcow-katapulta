# Arduino UNO based projectile launcher

## Description

This project contains code wich enables full controll over movements of tiny 3D printed projectile launcher. This toy-sized bad boy was designed to perform fun tasks for the public at Silesian Univeristy "Night of Scientists" event. It's main and only purpose is to provide fun for audience visiting our science club throughout this particular evening. Our war machine contains of two **M1173030 stepper motors**, two **stepper motor drivers** (various kinds, working the same way). 

### Electrical design

The electrical circuit of this deadly cannon is powered by **two racks of four 1.5V AA batteries each**, connected in series.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Files](#files)
- [License](#license)
- [Contact](#contact)

## Installation

### Prerequisites

- Arduino IDE

To install the project, follow these steps:

1. Clone the repository
2. Send the code to the Arduino UNO board.

## Usage

Run the `main.py` script to start the simulation.

## Files

- `AMR.py`: Contains the `AMR` class which represents the Autonomous Mobile Robot.
- `interface.py`: Contains the `Interface` class which represents the interface of the simulation.
- `assets.py`: Contains the assets used in the simulation such as color constants and screen dimensions.
- `a_star.py`: Contains the implementation of the A* pathfinding algorithm used by the AMR to plan its trajectory.
- `map.py`: Contains the `Map` class which represents the environment in which the AMR operates. It includes obstacles and the target position.
- `main.py`: Contains the main function which initializes and runs the simulation.

## License

This project is licensed under the [MIT License](LICENSE).

## Contact

[LinkedIn](https://www.linkedin.com/in/micha%C5%82-w%C3%B3jcik-562213266/)

[mwooycik@gmail.com](mailto:mwooycik@gmail.com)
