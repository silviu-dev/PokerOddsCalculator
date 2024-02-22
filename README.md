# Texas Holdem Pre Flop Odds Calculator


## Description
This project is a pre-flop odds calculator for the game of Texas Hold'em, which calculates the pre-flop probabilities for different card hands.

## Key Features
- Calculates pre-flop odds for card hands
- Simple and intuitive interface for inputting card hands
- Displays probabilities for different hands and number of players
- Provides strategic instructions
- Developed in C++ with a graphical interface using Qt

## User Manual

### Installation
1. Clone this repository:
```shell
  git clone https://github.com/silviu-dev/PokerOddsCalculator.git
```
2. Navigate to the project directory: 
```shell
  cd PokerOddsCalculator
```
3. Build and run the project using build.sh script:
```shell
  ./build.sh
```

### Inputting Card Hands
1. Launch the application either by executing the build.sh script or by running the binary located in the build folder
2. Input the card hands for each player by selecting the cards from the graphical interface. You can change your mind anytime by clicking again on selected cards

### Viewing Results
1. The application provides strategic instructions based on the calculated odds.
2. The odds are automatically calculated and displayed on the right side of the screen below the strategic information.

![SS1](https://github.com/silviu-dev/PokerOddsCalculator/assets/56478018/05d4841d-e014-475e-a473-9eb3a93a75b7)

### Changing the Number of Players
1. By default, the application calculates odds for two players.
2. To calculate odds for more than two players,  use the arrows up or down. (The number of opponents is represented by the number of pairs of cards turned over on the screen.)

![ss2](https://github.com/silviu-dev/PokerOddsCalculator/assets/56478018/443cd56f-3a79-4e0f-a6c0-79dc20dce932)

### Reset
To reset the current session press space

## System Requirements
- Qt 6.x
- cmake 3.14 or newer
- A C++ compiler compatible with Qt

## Contributing
Contributions are welcome! If you'd like to contribute to this project, you can fork it and then submit a pull request with your improvements.


## License
This project is licensed under the GNU Lesser General Public License v3.0. See the [LICENSE](LICENSE) file for details.
