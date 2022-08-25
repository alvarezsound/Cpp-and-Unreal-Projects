# Cpp-and-Unreal-Projects
This is the repository for all of my C++ and Unreal Engine course projects! Click the links below to view the files.
## Projects:
- <a href="" target="_blank">Hour of Code</a>
- <a href="https://github.com/alvarezsound/Cpp-and-Unreal-Projects/tree/main/UnrealFinal" target="_blank">Three Keys</a>

## Hour of Code
Completion time: 12 days

After completing the C++ and Unreal Engine course, I participated in a two-week sprint on a small dev team. This project is based on a modified version of the Hour of Code tutorial by Unreal Engine. Below is a breakdown of each story I completed during this sprint.

### Story 1: 
My first assigned task was to 1. add collision to various platforms and 2. design a way for the player to travel from the first island to the second island using those platforms. I did this by adding a simple collision to the static mesh actors.

Gif of player jumping on platforms

### Story 2: 
The next assigned task was to add moving platforms using a level sequencer, creating a way for the player to travel from the second island to the third island in a more challenging and dynamic way.

Gif of player jumping on moving platforms

### Story 3: 
Next, I added a jump boost powerup blueprint allowing players to reach places they otherwise couldn’t. I also added coin and gem pickups, which operate essentially the same way but with different skins. The gems are fewer in number and harder to find.

Gif of player using jump boost and collecting coins

### Story 4: 
The next assigned story was to create a hidden key blueprint allowing the character to open the door to the final section of the level. If there player tries to open the door without the key, an alert HUD will pop up telling them that a key is needed.

![HoC](/Images/HoC_Key.png)
![HoC](/Images/Hoc_Door.png)

### Story 5: 
The next story was to create a HUD widget that keeps track of the number of coins and gems collected and whether or not the player is in possession of the key or jump boost pickups.

![HoC](/Images/HoC_HUD.png)

### Story 6: 
Next, I added functionality to the HUD widget to tell the player the total amount of coins and gems in the level. I also added a HUD that alerts the player that all gems and coins have been collected.

HUD widget BP
![HoC](/Images/HoC_HUDBP.png)
Function for getting the total amount of coins in the map within the main game BP
![HoC](/Images/HoC_CoinCounterBP.png)
![HoC](/Images/HoC_Alert.png)

### Story 7: 
To complete the game loop, I added a finish line area in the final section of the level and a completion HUD that informs the player of the total amount of coins and gems they collected, as well as their final completion time. This HUD is triggered when the player collides with the end goal object (crystals), ending the game. Finally, I added a replay button to restart the game.

![HoC](/Images/HoC_Victory.png)

### Story 8: 
As an extra feature, I created a camera blend event for whenever a key is picked up, panning the camera to the correct door and pointing the player in the right direction. I did this by creating a new actor with a camera component placed on top of the key. The camera blend is triggered when the player reaches the key, colliding with the actor, and is destroyed once the entire code has run through. This way, it cannot be triggered again, as the key can only be obtained once. The player's movement is also locked during the animation.

Actor BP with camera component
![HoC](/Images/HoC_CameraBP.png)
gif of camera blend event

### Story 9: 
As a final challenge, I created a gate that blocks the player's way, as well as a button to open the gate. The gate remains open only when the button is pressed, so I implemented cube objects with physics for the player to find, push, and place on top of the button in order to move past the gate.

Door BP
![HoC](/Images/HoC_GateBP.png)
Button BP
![HoC](/Images/HoC_GateButtonBP.png)


## Three Keys
Completion time: 2 days

As a challenge, I was given two days to create an original game, complete with art and a full gameplay loop. I created Three Keys, a game that challenges the player to escape the level by locating three keys and unlocking a door, all without getting caught by one of the three AI enemies. Players take control of a third-person character (using WASD and a mouse for movement) and must search through the level to find three golden keys and open the golden door. The game features a menu and game-over/victory screens which offer the player an option to restart or quit.

The game begins with the player placed inside a room with three AI enemies on patrol. The AI will chase the player when in sight and will explode and cause damage when caught. If all three AI damage the player, the player’s health will be depleted (the health bar will reflect damage), and the game will end. If the player finds and collects all three golden keys, the door will unlock when the player collides with it, and the game will result in a victory. 

![ThreeKeys](/Images/TK0.png)
![ThreeKeys](/Images/TK1.png)
![ThreeKeys](/Images/TK2.png)
![ThreeKeys](/Images/TK3.png)
![ThreeKeys](/Images/TK5.png)