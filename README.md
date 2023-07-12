# Stratagem-UCI-Chess-Engine
Stratagem, a C++ UCI-compliant chess engine, integrates a neural network (NNUE) for accurate evaluation and employs a range of advanced search techniques to achieve exceptional performance within the Alpha-Beta framework. Drawing inspiration from multiple open-source projects, Stratagem not only strives to be a top-tier engine but also serves as a valuable resource for developers to enhance their own chess engines.

![Stratagem, Strong and Open Source C++ Chess Engine](https://github.com/yanpuri/Stratagem-UCI-Chess-Engine/assets/121260820/6cee1812-570d-43db-bf75-92201a4acbda)
                         
<p align="center">
<em><strong>Stratagem, Strong and Open Source Chess Engine Written in C++</strong></em>
</p>

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

 ## Requirements
 * Stratagem software requires GCC(GNU Compiler Collection) or CLang, C++ version: CXX >= C++17 !
 * Stratagem doesn't support Microsoft visual studio (yet).
 * It is recommended that the terminal uses a TrueType Font (ttf), Consolas and other monospaced fonts are recommended for the best user experience [Unicode characters and ANSI escape code] (However, most engines are 
   linked directly to the GUI and don't really need to interact with the terminal).
 
 ## Installation/Usag
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
* [BluefeverSoftware](https://www.youtube.com/@BlueFeverSoft), YouTube series about Vice engine.
* [CodeMonkeyKing](https://www.youtube.com/@chessprogramming591), General chess programming videos.
* [AndyGrant](https://github.com/AndyGrant), Author of Ethereal.
* And of course, [ChessProgrammingWik](https://www.chessprogramming.org/Main_Page).

## Images
Terminal interface:
![Screenshot 2023-07-12 140224](https://github.com/yanpuri/Stratagem-UCI-Chess-Engine/assets/121260820/4d23bf75-96a6-4e1f-b7d7-91d2419bba39)
Gameboard:
![Screenshot 2023-07-12 140716](https://github.com/yanpuri/Stratagem-UCI-Chess-Engine/assets/121260820/6d026320-0683-404d-aa6f-907024dcdab5)
Search, Evaluation, Picking:
![Screenshot 2023-07-12 140931](https://github.com/yanpuri/Stratagem-UCI-Chess-Engine/assets/121260820/e34d8b44-3c3f-4965-a0e5-76b0d52ed97e)



