# PCI-bus-simulator-GUI
GUI that send orders / receives response from actual compiled verilog PCI modules , and draws the waveform manually on the screen  

# Demo preview
https://drive.google.com/file/d/14B48F__fDqKnZqVz4a4k8jAe31q1K-zO/view?usp=sharing

# intro
PCI bus (peripheral component interconnect ) is a communication protocal used inside computers for various devices to communicate .
this project is a GUI and implementation of PCI modules .


this repo contains the GUI code as well as the verilog modules that helped in the GUI . 
the project performs a complete cycle from the GUI (php + js) to the verilog modules , then vice versa from the verilog to the GUI to 
draw the response waveform . 

for software : used vanilla php + konva-vuejs 

for hardware : used  xilinx technologies , fuse [a verilog compiler] , 
               isim [simulator] , used TCL scripting
               

# launching 
-for launching you have to edit all the file destinations after cloning the repo to match your computer 
,including any links that contain localhost , image places , etc

-compile your own verilog modules or use the provided ones 

-npm 
``` bash
# install dependencies
npm install

# serve with hot reload at localhost:8080
npm run dev

# build for production with minification
npm run build
```


# modifications 
the project can draw the output of any verilog module , just write a verilog test bench to monitor all signal changes over time , 
then in the file phpverilog.php let it get contents of your file instead of the default .



# Pull requests
-there are lots of modifications and features to be added , contributions are more than welcome , all pull requests will be reviewed and   either accepted or further discussed 

# license 
GNU GPLv3

