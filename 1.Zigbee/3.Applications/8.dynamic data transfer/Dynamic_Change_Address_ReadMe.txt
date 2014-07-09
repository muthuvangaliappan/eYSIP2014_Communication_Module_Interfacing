In this Video we have demonstration of changing the destination address of the master robot placed at the center from the slave robot placed to its left to the slave robot placed to its right.
First we have coded the master robot to follow the sequence of 
2 for forward
8 for backward
4 for left
6 for right
5 for stop
7 for buzzer on
9 for buzzer off

	Now we will configure three zigbee modules and mount it on our two slave and one master robots.
	In a fourth zigbee module we configured in unicast mode of operation with the master robot. 
	We then configured the source address of zigbee modules mounted on slave robots as 1 and 3.
	
	
	Now in the video as we have demonstrated we have first shown the robot movement controlled by our PC through zigbee. The echo of the input we give is received back to the PC as the two modules on PC and master robot are in Unicast mode
	
	Now by pressing 1 as we have programmed we will dynamically change destination address of master robot to one of the slave robot. now when we move the master robot one of the slave robot moves along with it, this is because the echo from master is now received at that slave robot and not echoed back to the PC.
	
	Then we have again changed the destination address to another different slave robot whose source address is 3 by pressing 3 as written in the program contained in this folder. Here on moving the master robot this slave robot will move along with it.