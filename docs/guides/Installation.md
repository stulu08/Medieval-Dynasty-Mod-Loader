**MDML Installation Instructions**  
⚠️ **Important:** MDML supports only the Steam version of Medieval Dynasty!  

### Steps to Install MDML:  
1. **Download the Mod Files**  
   - Download the MDML zip file from the provided source (Nexus or GitHub).

2. **Extract the Files**  
   - Unzip the downloaded file using a tool like WinRAR or 7-Zip.  

3. **Copy Required Files to the Game's Binaries Folder**  
   - Locate the game's binaries folder (Steam > Medieval Dynasty > Manage > Browse local files):  
     ```
     [Your Steam Library Folder]/common/Medieval Dynasty/Medieval_Dynasty/Binaries/Win64
     ```  
   - This folder should contain a file named:  
     ```
     Medieval_Dynasty-Win64-Shipping.exe
     ```  
   - Copy the following files and folder into this directory:  
     - `MDML.dll`  
     - `xinput1_3.dll`  
     - The entire `Config` folder  

4. **Prepare the Mods Folder**  
   - Locate or create the following directory for the base mod files:  
     ```
     [Your Steam Library Folder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods
     ```  
   - If the `Mods` folder does not already exist, you can create it manually or start the game once to generate it automatically.  
   - Copy the entire `BaseMod` folder into the `Mods` directory.  

5. **Start the Game**  
   - Launch Medieval Dynasty through Steam.  
   - If everything is set up correctly:  
     - A GUI will appear when you press **F1** in the game.  
     - A `Log` folder will be created inside the game's binaries folder (`Binaries/Win64`).  

---

### Troubleshooting  
- **No GUI or Log Folder?**  
  - Double-check that you copied the files to the correct folders.  
  - Ensure you are using the Steam version of the game.  
- **Mods Folder Missing?**  
  - Start the game once to automatically create the `Mods` folder if it’s not already there.  