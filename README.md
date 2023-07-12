# Stratagem-UCI-Chess-Engine
Stratagem, a C++ UCI-compliant chess engine, integrates a neural network (NNUE) for accurate evaluation and employs a range of advanced search techniques to achieve exceptional performance within the Alpha-Beta framework. Drawing inspiration from multiple open-source projects, Stratagem not only strives to be a top-tier engine but also serves as a valuable resource for developers to enhance their own chess engines

## Features
* Architecture
  * Bitboard Representation
  * Zobrist Hashing
  * Magic Numbers for Movegen

* Search
  
  * Alpha-Beta Pruning
  * Negamax Framework
  * Transposition Table
  * Principal Variation Search
  * Quiescence Search
  * Late-move Pruning
  * Late-move Reduction
  * Null-move Pruning
  * Razoring
  * Reverse Futility Pruning
  * Internal Iterative Deepening
  * Aspiration Window
  * Static Exchange Evaluation Pruning (Reverse Futility Pruning)
  * Check Extension
  * Repetition Detection
  * Killer Move, History
  * MVV-LVA Capture Ordering
  * Time Manager
  
* Evaluation
  * NNUE Evaluation

## Improvements
  * Implement Syzygy Bases, SyzygyPath, ...
  * Improve the NN Structure
    
 ## Installation/Usage
 Clone the repository:

```bash
$ git clone https://github.com/yanpuri/Stratagem-UCI-Chess-Engine.git
```
Then, in the directory:
```bash
$ cd Stratagem-UCI-Chess-Engine
$ make
```
Run the generated .exe file in the install dir.
 
* How to work the engine?
The UCI (Universal Chess Interface) serves as a widely adopted protocol for interacting with a chess engine and is the preferred method for communication in graphical user interfaces (GUIs) and chess-related tools. The guidelines are outlined in the UCI protocol, which can be accessed and referenced at this link http://page.mi.fu-berlin.de/block/uci.htm


## Acknowledgements

* BluefeverSoftware, YouTube series about Vice engine
* CodeMonkeyKing, General chess programming videos
* AndyGrant, Author of Ethereal
* And of course, ChessProgrammingWiki
