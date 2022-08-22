# Cpp-and-Unreal-Projects
This is the repository for all of my C++ and Unreal Engine course projects! Click the links below to view the files.
## Projects:
- <a href="" target="_blank">Hour of Code</a>
- <a href="https://github.com/alvarezsound/Cpp-and-Unreal-Projects/tree/main/UnrealFinal" target="_blank">Three Keys</a>

## Hour of Code
Completion time: 12 days

After completing the C++ and Unreal Engine course, I participated in a two-week sprint working on a small dev team. This project is based off a modified version of the Hour of Code tutorial by Unreal Engine. Below is a break down of each story I completed during this sprint.

### Story 1: 
My first assigned task was to add collision to the various platforms and using those platforms, designed a way for the player to travel from the 1st island to the 2nd. This was simply done by adding simple collision to the static mesh actors.

Gif of player jumping on platforms

### Story 2: 
The next assigned task was to add moving platforms using a level sequencer to create a way for the player to travel from island 2 to 3 in a more challenging, dynamic way.

Gif of player jumping on moving platforms

### Story 3: 
Added a jump boost powerup blueprint that allows the player to reach places they can't otherwise and coin and gem pickups. The gems are fewer in number and harder to find.

Gif of player using jump boost and collecting coins

### Story 4: 
Created a hidden key blueprint that will allow the character to open the door to the final section of the level.

Picture of key
Picture of Door but locked

### Story 5: 
Created a HUD widget that keeps track of the amount of coins/gems collected and whether or not the player has the key or jump boost pickups.

Picture of HUD

### Story 6: 
Added functionality to the HUD widget that tells the player the total amount of coins/gems in the level and a HUD that alerts the player that all gems and coins have been collected.

Picture of blueprints for HUD and 
coin/gem counter functions
Picture of HUD/alert

### Story 7: 
Added a finish line area in the final section of the level and a completion HUD that informs the player of the total amount of coins and gems they collected and their final completion time.

Picture of completion HUD

### Story 8: 
Added a camera blend event for when the player picks up the key to point them to the door that it is used for.

picture of blueprint for camera BP
gif of camera blend event

### Story 9: 
Added a gate that blocks the players way and a button that opens it. The gate will only stay open while the button is pressed. Added cube objects with physics that the player can move around and place on the button to move forward.

picture of blueprint for button/gate
gif of gate and button


## Three Keys
Completion time: 2 days

As a challenge, I was given 2 days to create an original game, complete with art and a full gameplay loop. I created Three Keys, a game that challenges the Player to find three keys to unlock a door and safely escape the level, all without getting caught by three enemy AI. Players take control of a third person character (using WASD and a mouse for movement) and have to search through the level to find the three golden keys to open the golden door. The game is complete with a menu, game over, and victory screens, all giving the player an option to restart the game or quit. 

The game starts with the player placed in the room and the three enemy AI patrolling various areas. The AI will chase the player when in sight and will explode and cause damage when caught. If the player is damaged by all three AI, their health will be depleted (Health bar will reflect damage) and the game will end. If player finds and collects all three golden keys, they will be allowed to unlock the golden door (just by colliding with the door) and the game will end in a victory. 

![ThreeKeys](/Images/TK0.png)
![ThreeKeys](/Images/TK1.png)
![ThreeKeys](/Images/TK2.png)
![ThreeKeys](/Images/TK3.png)
![ThreeKeys](/Images/TK5.png)