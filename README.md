# The-Maze
![Premium Photo _ A circular maze in the middle of a forest with moss growing on it generative ai](https://github.com/user-attachments/assets/a8b77817-c164-4c1b-9975-ddb061db95aa)

## Introduction
The 2D Maze Project is a game designed to provide players with a challenging maze experience using raycasting techniques. Players navigate through a maze filled with walls and enemies, using strategic movement to avoid obstacles and reach their goals.

### Blog Article
https://www.linkedin.com/pulse/my-first-devo-2d-maze-game-using-ray-casting-kevin-mogakwe-xdoff

### Author
Mogakwe Kevin(https://www.linkedin.com/pulse/my-first-devo-2d-maze-game-using-ray-casting-kevin-mogakwe-xdoff)

<img width="1440" alt="bc20224777aa01d6b9b6f6944421beb1850fecb6" src="https://github.com/user-attachments/assets/dcb007e8-3503-40cb-8652-b7527842635f">

##Features
1.3D-like rendering using raycasting
2.Collision detection with walls
3.Mini-map display (toggle with 'M' key)
4.Custom map loading from files
5.Multi-directional movement and rotation
6.Textured walls
7.Sky and ground rendering

![FRAG Pro Shooter](https://github.com/user-attachments/assets/9287b2eb-5ea7-4549-8127-646e5261123a)


## Installation
To set up the project locally, follow these steps:
1.Ensure you have the SDL2 library installed on your system.
2.Clone this repository:
3.git clone https://github.com/Ndivhuwo26/The-Maze.git
4.cd maze-game
5.Compile the game:
6.gcc main.c functions.c -o maze_game -lSDL2 -lm

#Usage

Run the game with a map file:
./maze_game path/to/map_file.txt

Replace path/to/map_file.txt with the path to your map file.

#Controls

W: Move forward
S: Move backwards
A: Strafe left
D: Strafe right
Left Arrow: Rotate camera left
Right Arrow: Rotate camera right
M: Toggle mini-map display

#Map File Format

Create custom maps using the following format:

Use '1' for walls
Use '0' for empty spaces
Use '2' for enemy
Ensure the map is rectangular
Include at least one valid path through the maze

#Example: map_with_enemies.txt


![map](https://github.com/user-attachments/assets/8115908a-d6ea-470b-b404-ff0920207ea5)


1111111111
1000000201
1011101011
1000102011
1110111001
1020000001
1011111011
1002010001
1111111111

#Textures

Place a 64x64 pixel BMP file named "wall_texture.bmp" in the game directory for wall textures.

![Reflection ray scheme, vector illustration diagram – VectorMine](https://github.com/user-attachments/assets/b1a8bf2b-48f0-48ab-9eae-94a10983e709)


#Tech Stack

Programming Language:

C: The core language for developing the game, utilizing its performance and low-level capabilities for graphics and game logic.
Game Development Library:

SDL2 (Simple DirectMedia Layer): Used for graphics rendering, handling window creation, input management, and audio. SDL2 is a popular choice for 2D games due to its cross-platform capabilities.
Development Tools:

GCC (GNU Compiler Collection): The compiler used for building your C project.
Make: A build automation tool to manage the compilation of your project.
Version Control:

Git: For version control to track changes in your project and collaborate with others.
Text Editor/IDE:

Visual Studio Code, Code::Blocks, or CLion: Any of these IDEs can be used for writing and managing your C code efficiently.
Graphics and Design:

Tiled Map Editor (optional): If you decide to use more complex maps, Tiled can help design and export tile-based maps.
Image Editing Software (optional): Tools like GIMP or Adobe Photoshop for creating or editing game graphics, textures, and sprites.
Documentation:

Markdown: For writing your README.md and any project documentation.
Future Considerations:
Game Engines: If you decide to expand the project or create more complex features in the future, you might consider learning a game engine like Unity (using C#) or Godot (using GDScript).
Networking: If you plan to add multiplayer features, you could look into libraries like ENet for network communication.

#Contributing

We welcome contributions to the Maze Game Project! Here's how you can help:

Fork the repository
Create a new branch (git checkout -b feature/amazing-feature)
Commit your changes (git commit -m 'Add some amazing feature')
Push to the branch (git push origin feature/amazing-feature)
Open a Pull Request

#License
This project is licensed under the MIT License - see the LICENSE.md file for details
