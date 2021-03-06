`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:23:32 12/14/2018
// Design Name:   Device
// Module Name:   E:/Xilinx ISE Design 14.7/PCI_isa/tb_WRITE.v
// Project Name:  PCI_isa
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Device
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_WRITE2;
//////////////////initialize internal regs ///////////////
	// Inputs
	
	
	reg Force_RequestA = 1'b0;
	reg Force_RequestB = 1'b0;
	reg Force_RequestC = 1'b0;
	
	
	
	reg CLK;
	reg RST;
	//reg [31:0] AddressToContact;
	//reg [31:0] myAddress;
   //reg Force_Request;
	//reg [3:0] numberOfWords;
	//reg [31:0] writeWord;

	// Outputs
	//wire REQ;

	// Bidirs
	wire [31:0] AD;
	wire [3:0] CBE;

	wire FRAME;
	wire TRDY;
	wire IRDY;

	wire DEVSEL;
	//reg frameTurnAroundout= 1'b0;
	//wire bitTurnAround;
	//wire busTurnAround;
   // Bidirs regs
//	reg [31:0] IAD;
//	reg [3:0] ICBE;
//	reg IFRAME;
//	reg ITRDY;
//	reg IIRDY;
//	reg IDEVSEL;
	
	/*assign AD = IAD;
	assign CBE =ICBE;

	assign FRAME = IFRAME;
	assign TRDY = ITRDY;
	assign IRDY = IIRDY;

	assign DEVSEL = IDEVSEL;*/
	
	////////////////////////////////////////////////////////////////////////////
	
	////////////////////////parameters defining addresses //////////////////////
	parameter A = 3'b001 ;
	parameter B = 3'b010 ;
	parameter C = 3'b011 ;








/////////////////regs for GUI /////////////////
reg[2:0] tempMaster ; reg [2:0] tempTarget ; reg [3:0] tempCBE ; reg[4:0] tempWords ;
reg [2:0] currentMaster ;

/////////regs for A ////////////////
reg [3:0] noOfTransactionsA  = 4'b0000;
reg [2:0] targetA [0:20] ;
reg [3:0] CBEA [0 :20] ;
reg [3:0] wordsA [0:20] ;
wire REQA ;
wire GNTA ;
////////////////

/////////regs for B ////////////////
reg [3:0] noOfTransactionsB  = 4'b0000;
reg [2:0] targetB [0:20] ;
reg [3:0] CBEB [0 :20] ;
reg [3:0] wordsB [0:20] ;
wire REQB ;
wire GNTB ;
////////////////

/////////regs for C ////////////////
reg [3:0] noOfTransactionsC = 4'b0000; 
reg [2:0] targetC [0:20] ;
reg [3:0] CBEC [0 :20] ;
reg [3:0] wordsC [0:20] ;
wire REQC ;
wire GNTC ;
////////////////////







////////////////////////////////////////////////////////////////////////////////
	
	
integer file ,file2,i , a=0,b=0,c=0;
	
	// Instantiate the devices
	Device AA (
		.AD(AD), 
		.CBE(CBE), 
	   .FRAME(FRAME), 
		.TRDY(TRDY), 
		.IRDY(IRDY), 
	   .DEVSEL(DEVSEL), 
		.REQ(REQA), 
		.GNT(GNTA), 
		.CLK(CLK), 
		.RST(RST), 
		.AddressToContact({ 29'b0  , targetA[a] }), 
		.myaddress( { 29'b0  , A} ) ,
		.Force_Request(Force_RequestA), 
		.numberOfWords(wordsA[a]), 
		.writeWord(32'hAAAA_AAAA),
		.frameTurnAround(frameTurnAroundout) ,
		 .write(CBEA[a][0])
		//.bitTurnAround(bitTurnAround), 
		//.busTurnAround(busTurnAround)
	);
	
		Device BB (
		.AD(AD), 
		.CBE(CBE), 
	   .FRAME(FRAME), 
		.TRDY(TRDY), 
		.IRDY(IRDY), 
	   .DEVSEL(DEVSEL), 
		.REQ(REQB), 
		.GNT(GNTB), 
		.CLK(CLK), 
		.RST(RST), 
		.AddressToContact({ 29'b0  , targetB[b] }), 
		.myaddress( { 29'b0  , B} ) ,
		.Force_Request(Force_RequestB), 
		.numberOfWords(wordsB[b]), 
		.writeWord(32'hBBBB_BBBB),
		.frameTurnAround(frameTurnAroundout) ,
		.write(CBEB[b][0])
		//.bitTurnAround(bitTurnAround), 
		//.busTurnAround(busTurnAround)
	);

		Device CC (
		.AD(AD), 
		.CBE(CBE), 
	   .FRAME(FRAME), 
		.TRDY(TRDY), 
		.IRDY(IRDY), 
	   .DEVSEL(DEVSEL), 
		.REQ(REQC), 
		.GNT(GNTC), 
		.CLK(CLK), 
		.RST(RST), 
		.AddressToContact(   { 29'b0  , targetC[c] }), 
		.myaddress({ 29'b0  , C}) ,
		.Force_Request(Force_RequestC), 
		.numberOfWords( wordsC[c] ), 
		.writeWord(32'hCCCC_CCCC),
		.frameTurnAround(frameTurnAroundout) ,
		.write(CBEC[c][0])
		//.bitTurnAround(bitTurnAround), 
		//.busTurnAround(busTurnAround)
	);


//////clock ///
always #5 CLK = ~CLK ;
///////////

//////////////////////////////////////////////arbitreeeeeeeee//////////////////////



	// Instantiate the Unit Under Test (UUT)
	arbiter uut (
		.GNT(  { GNTC , GNTB , GNTA } ), 
		.REQ( { REQC , REQB , REQA }), 
		.clk(CLK), 
		.frame(FRAME), 
		.IRDY(IRDY), 
		.TRDY(TRDY) ,
		.turnaround( frameTurnAroundout)
	);

/////////////////////////////////////////////////////////////////////////////////













////////////////////

	initial begin
	CLK = 0 ;
      file =$fopen ("input.txt" , "r");
		file2= $fopen ("output.txt" );

	
		
		for ( i=0 ; i<20 ; i=i+1 )
		begin
		 $fscanf (file , "%d,%d,%d,%d " , tempMaster , tempTarget , tempCBE , tempWords);
	   case (tempMaster)
		A : begin
		    targetA [a] = tempTarget ; 
			 CBEA [a] = tempCBE ;
			 wordsA [a] = tempWords ;
			 a=a+1 ;
			 noOfTransactionsA = noOfTransactionsA + 4'b0001 ;
			 end
		B : begin
		    targetB [b] = tempTarget ;
			 CBEB [b] = tempCBE ;
			 wordsB [b] = tempWords ;
			 b=b+1;
			 noOfTransactionsB = noOfTransactionsB + 4'b0001 ;
			 end	 
		C : begin
		    targetC [c] = tempTarget ;
			 CBEC [c] = tempCBE ;
			 wordsC [c] = tempWords ;
			 c=c+1;
			 noOfTransactionsC = noOfTransactionsC + 4'b0001 ;
			 end
		endcase
		
		end  // end for loop
		a =0 ; b=0 ; c=0 ;
		
		
		$fmonitor(file2 , ("%d,%h,%h,%b,%b,%b,%b,%b,%b,%b,%b,%b,%b") ,($time*20 ),AD , CBE, IRDY , TRDY , DEVSEL , GNTA ,GNTB,GNTC , REQA,REQB ,REQC , CLK);
		
		
	end
	
	////////////////////////////////
	reg myFlag = 1'b0 ; 
	always  @( negedge FRAME ) 
	begin 
	myFlag =1'b1 ;
	      if (!GNTA ) currentMaster <= A ; 
	else 	if (!GNTB ) currentMaster <= B ;
	else  if (!GNTC ) currentMaster <= C ;


	
	end
	
	always @ (posedge FRAME )
	begin
	        if (myFlag )
		begin
		myFlag = 1'b0 ;
			case (currentMaster )
			A : a=a+1 ;
			B : b=b+1 ; 
			C : c=c+1 ;
			endcase
		end
	
	end
	
	
	
	//////////////force request logic //////////////////
	always @ (negedge CLK )
	begin 
	if (noOfTransactionsA ) Force_RequestA = 1'b1 ; else  Force_RequestA = 1'b0 ;
	if (noOfTransactionsB ) Force_RequestB = 1'b1 ; else Force_RequestB = 1'b0 ;
   if (noOfTransactionsC ) Force_RequestC = 1'b1 ; else Force_RequestC = 1'b0 ;

	end
	
	always @ (posedge CLK )
	begin 
	
	if (Force_RequestA ) noOfTransactionsA = noOfTransactionsA - 4'b0001 ;
	if (Force_RequestB ) noOfTransactionsB = noOfTransactionsB - 4'b0001 ;
	if (Force_RequestC ) noOfTransactionsC = noOfTransactionsC - 4'b0001 ;

	end
	///////////////////////////////////////////////////
      
endmodule
