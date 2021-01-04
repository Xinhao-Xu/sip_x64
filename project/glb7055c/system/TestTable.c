#include <stdlib.h>
#include <stdio.h>

#include "Diag.h"
#include "FixedTest.h"

TEST_ACTION g_DiagAutoTest[] =
{
	/*
		Fixed Items
	*/	
	/********************************** T2 ***********************************/
	// //System
	// //ITEM_MAP(T01001001),  //mSata1
	// //ITEM_MAP(T01001002),  //SD Card 1
	// //ITEM_MAP(T01001003),  //TPM	
	// ITEM_MAP(T01002001),  //Product ID
	// ITEM_MAP(T01003001),  //DRAM 
	// //ITEM_MAP(T01004001),  //IDE1
	// //ITEM_MAP(T01004002),  //IDE2
	// //ITEM_MAP(T01015001),  //SATA1
	// ITEM_MAP(T01015002),  //SATA2
	// //ITEM_MAP(T01015005),  //OnBoard Storage1
	// //ITEM_MAP(T01005001),  //Audio Right
	// //ITEM_MAP(T01005002),	//Audio Left
	// //ITEM_MAP(T01005003),	//Audio Bass
	// ITEM_MAP(T01006001),	//LAN1
	// ITEM_MAP(T01006002),  //LAN2
	// //ITEM_MAP(T01008001),  //HDMI1
	// //ITEM_MAP(T01008002),  //HDMI2
	// //ITEM_MAP(T01009001),  //Vcore
	// //ITEM_MAP(T01009002),  //+12V
	// //ITEM_MAP(T01009003),  //+5V
	// //ITEM_MAP(T01009004),  //+3.3V
	// //ITEM_MAP(T01009005),  //VccSRAM	
	// //ITEM_MAP(T01010001),  //CPU Temp.
	// //ITEM_MAP(T01010002),  //System Temp.
	// //ITEM_MAP(T01011001),  //PS2 Mouse
	// //ITEM_MAP(T01011002),  //PS2 Keyboard
	// //ITEM_MAP(T01012001),  //USB1
	// ITEM_MAP(T01012002),  //USB2
	// ITEM_MAP(T01012003),  //USB3
	// ITEM_MAP(T01012004),  //USB4
	// //ITEM_MAP(T01012005),  //USB5
	// //ITEM_MAP(T01012006),  //USB6
	// //ITEM_MAP(T01012007),  //USB7
	// //ITEM_MAP(T01012008),  //USB8
	// //ITEM_MAP(T01013001),  //COM1
	// ITEM_MAP(T01013002),  //COM2
	// ITEM_MAP(T01013003),  //COM3
	// ITEM_MAP(T01013004),  //COM4
	// ITEM_MAP(T01013005),  //COM5
	// ITEM_MAP(T01013006),  //COM6 
	// //ITEM_MAP(T01014001),  //GPIO-A	
	// //ITEM_MAP(T01014002),  //GPIO-B
	// //ITEM_MAP(T01014003),  //GPIO-C
	// //ITEM_MAP(T01014004),  //GPIO-D
	// ITEM_MAP(T01020001),  //FAN1
	// //ITEM_MAP(T01020002),  //FAN2 left gmb7055, manual test
	// ITEM_MAP(T01020002),  //FAN2
	// ITEM_MAP(T01020003),  //FAN3 
	// //Gaming Feature
	// //ITEM_MAP(T02002001),  //Meter1
	// //ITEM_MAP(T02002002),  //Meter2
	// //ITEM_MAP(T02002003),  //Meter3
	// //ITEM_MAP(T02002004),  //Meter4
	// //ITEM_MAP(T02002005),  //Meter5
	// //ITEM_MAP(T02002006),  //Meter6
	// //ITEM_MAP(T02002007),  //Meter7
	// //ITEM_MAP(T02002008),  //Meter8
	// //ITEM_MAP(T02003001),  //Coin Enable
	// //ITEM_MAP(T02003002),  //Coin A
	// //ITEM_MAP(T02003003),  //Coin B
	// //ITEM_MAP(T02004001),  //Bill enable
	// //ITEM_MAP(T02004002),  //Bill A
	// //ITEM_MAP(T02004003),  //Bill B
	// //ITEM_MAP(T02005001),  //Hopper Enable
	// //ITEM_MAP(T02005002),  //Hopper
	// //ITEM_MAP(T01024001),	//hwaddr1
	// //ITEM_MAP(T01024002),	//whaddr2
	// ITEM_MAP(T02006001),  //SRAM
	// //ITEM_MAP(T02006001),  //SRAM
	// //ITEM_MAP(T02007001),  //Timer A
	// //ITEM_MAP(T02007002),  //Timer B
	// //ITEM_MAP(T02007003),  //Timer C
	// //ITEM_MAP(T02007004),  //Timer D
	// //ITEM_MAP(T02008001),  //CCTalk COM2->COM3
	// //ITEM_MAP(T02008002),  //CCTalk 2
	// //ITEM_MAP(T02019001),  //SPI Flash1
	// //ITEM_MAP(T02019002),  //SPI Flash2
	// //ITEM_MAP(T02010001),  //IIC0
	// //ITEM_MAP(T02010002),  //IIC1
	// ITEM_MAP(T02012001),  //Secure RTC
	// //ITEM_MAP(T02012001),  //Secure RTC
	// //ITEM_MAP(T02013003),  //Intrusion 0
	// //ITEM_MAP(T02013004),  //Intrusion 1
	// //ITEM_MAP(T02013005),  //Intrusion 2
	// //ITEM_MAP(T02013006),  //Intrusion 3
	// //ITEM_MAP(T02013007),  //Intrusion 4
	// //ITEM_MAP(T02013008),  //Intrusion 5
	// //ITEM_MAP(T02013009),  //Intrusion 6
	// //ITEM_MAP(T02013010),  //Intrusion 7
	// //ITEM_MAP(T02013001),  //Intrusion power
	// //ITEM_MAP(T02013002),  //Intrusion alert
	// ITEM_MAP(T02014001),  //Battery Voltage1
	// //ITEM_MAP(T02014001),  //Battery Voltage1
	// //ITEM_MAP(T02014002),  //Battery voltage 2
	// //ITEM_MAP(T02015001),  //+5VNG
	// //ITEM_MAP(T02015002),  //+12VNG
	// //ITEM_MAP(T02016001),  //HCS300
	// //ITEM_MAP(T02021001),  //ibutton
	// //ITEM_MAP(T02017001),  //
	// //ITEM_MAP(T02017002),  //
	// //ITEM_MAP(T02017003),  //
	// //ITEM_MAP(T02017004),  //
	// //ITEM_MAP(T02017005),  //
	// //ITEM_MAP(T02017006),  //
	// //ITEM_MAP(T02017007),  //
	// //ITEM_MAP(T02017008),  //
	// //ITEM_MAP(T02017009),  //
	// //ITEM_MAP(T02017010),  //
	// //ITEM_MAP(T02017011),  //
	// //ITEM_MAP(T02017012),  //
	// //ITEM_MAP(T02017013),  //
	// //ITEM_MAP(T02017014),  //
	// //ITEM_MAP(T02017015),  //
	// //ITEM_MAP(T02017016),  //
	// //ITEM_MAP(T02017017),  //
	// //ITEM_MAP(T02017018),  //
	// //ITEM_MAP(T02017019),  //
	// //ITEM_MAP(T02017020),  //
	// //ITEM_MAP(T02017021),  //
	// //ITEM_MAP(T02017022),  //
	// //ITEM_MAP(T02017023),  //
	// //ITEM_MAP(T02017024),  //
	// //ITEM_MAP(T02017025),  //
	// //ITEM_MAP(T02017026),  //
	// //ITEM_MAP(T02017027),  //
	// //ITEM_MAP(T02017028),  //
	// //ITEM_MAP(T02017029),  //
	// //ITEM_MAP(T02017030),  //
	// //ITEM_MAP(T02017031),  //
	// //ITEM_MAP(T02017032),  //
	// //ITEM_MAP(T01022001),	//SIO
	// //ITEM_MAP(T01019001),	//PCIe1x - gpc exist or not
	// ITEM_MAP(T02017001),  //
	// ITEM_MAP(T02017002),  //
	// ITEM_MAP(T02017003),  //
	// ITEM_MAP(T02017004),  //
	// ITEM_MAP(T02017005),  //
	// ITEM_MAP(T02017006),  //
	// ITEM_MAP(T02017007),  //
	// ITEM_MAP(T02017008),  //
	// ITEM_MAP(T02017009),  //
	// ITEM_MAP(T02017010),  //
	// ITEM_MAP(T02017011),  //
	// ITEM_MAP(T02017012),  //
	// ITEM_MAP(T02017013),  //
	// ITEM_MAP(T02017014),  //
	// ITEM_MAP(T02017015),  //
	// ITEM_MAP(T02017016),  //
	// ITEM_MAP(T02017017),  //
	// ITEM_MAP(T02017018),  //
	// ITEM_MAP(T02017019),  //
	// ITEM_MAP(T02017020),  //
	// ITEM_MAP(T02017021),  //
	// ITEM_MAP(T02017022),  //
	// ITEM_MAP(T02017023),  //
	// ITEM_MAP(T02017024),  //
	// ITEM_MAP(T02017025),  //
	// ITEM_MAP(T02017026),  //
	// ITEM_MAP(T02017027),  //
	// ITEM_MAP(T02017028),  //
	// ITEM_MAP(T02017029),  //
	// ITEM_MAP(T02017030),  //
	// ITEM_MAP(T02017031),  //
	// ITEM_MAP(T02017032),  //
	// ITEM_MAP(T02017033),  //DK 20160817 pci config table version check
	/*************************************************************************/

	/********************************** T3 ***********************************/
	//System
	//ITEM_MAP(T01001001),  //mSata1
	//ITEM_MAP(T01001002),  //SD Card 1
	//ITEM_MAP(T01001003),  //TPM	
	ITEM_MAP(T01002001),  //Product ID
	ITEM_MAP(T01003001),  //DRAM 
	//ITEM_MAP(T01004001),  //IDE1
	//ITEM_MAP(T01004002),  //IDE2
	//ITEM_MAP(T01015001),  //SATA1
	//ITEM_MAP(T01015002),  //SATA2
	//ITEM_MAP(T01015005),  //OnBoard Storage1
	//ITEM_MAP(T01005001),  //Audio Right
	//ITEM_MAP(T01005002),	//Audio Left
	//ITEM_MAP(T01005003),	//Audio Bass
	//ITEM_MAP(T01006001),	//LAN1
	//ITEM_MAP(T01006002),  //LAN2
	//ITEM_MAP(T01008001),  //HDMI1
	//ITEM_MAP(T01008002),  //HDMI2
	//ITEM_MAP(T01009001),  //Vcore
	//ITEM_MAP(T01009002),  //+12V
	//ITEM_MAP(T01009003),  //+5V
	//ITEM_MAP(T01009004),  //+3.3V
	//ITEM_MAP(T01009005),  //VccSRAM	
	//ITEM_MAP(T01010001),  //CPU Temp.
	//ITEM_MAP(T01010002),  //System Temp.
	//ITEM_MAP(T01011001),  //PS2 Mouse
	//ITEM_MAP(T01011002),  //PS2 Keyboard
	//ITEM_MAP(T01012001),  //USB1
	//ITEM_MAP(T01012002),  //USB2
	//ITEM_MAP(T01012003),  //USB3
	//ITEM_MAP(T01012004),  //USB4
	//ITEM_MAP(T01012005),  //USB5
	//ITEM_MAP(T01012006),  //USB6
	//ITEM_MAP(T01012007),  //USB7
	//ITEM_MAP(T01012008),  //USB8
	//ITEM_MAP(T01013001),  //COM1
	//ITEM_MAP(T01013002),  //COM2
	//ITEM_MAP(T01013003),  //COM3
	//ITEM_MAP(T01013004),  //COM4
	ITEM_MAP(T01013005),  //COM5
	ITEM_MAP(T01013006),  //COM6 
	// // //ITEM_MAP(T01014001),  //GPIO-A	
	// // //ITEM_MAP(T01014002),  //GPIO-B
	// // //ITEM_MAP(T01014003),  //GPIO-C
	// // //ITEM_MAP(T01014004),  //GPIO-D
	ITEM_MAP(T01020001),  //FAN1
	//ITEM_MAP(T01020002),  //FAN2 left gmb7055, manual test
	//ITEM_MAP(T01020002),  //FAN2
	//ITEM_MAP(T01020003),  //FAN3 
	//Gaming Feature
	//ITEM_MAP(T02002001),  //Meter1
	//ITEM_MAP(T02002002),  //Meter2
	//ITEM_MAP(T02002003),  //Meter3
	//ITEM_MAP(T02002004),  //Meter4
	//ITEM_MAP(T02002005),  //Meter5
	//ITEM_MAP(T02002006),  //Meter6
	//ITEM_MAP(T02002007),  //Meter7
	//ITEM_MAP(T02002008),  //Meter8
	//ITEM_MAP(T02003001),  //Coin Enable
	//ITEM_MAP(T02003002),  //Coin A
	//ITEM_MAP(T02003003),  //Coin B
	//ITEM_MAP(T02004001),  //Bill enable
	//ITEM_MAP(T02004002),  //Bill A
	//ITEM_MAP(T02004003),  //Bill B
	//ITEM_MAP(T02005001),  //Hopper Enable
	//ITEM_MAP(T02005002),  //Hopper
	ITEM_MAP(T01024001),	//hwaddr1
	ITEM_MAP(T01024002),	//hwaddr2
	//ITEM_MAP(T02006001),  //SRAM
	//ITEM_MAP(T02006001),  //SRAM
	//ITEM_MAP(T02007001),  //Timer A
	//ITEM_MAP(T02007002),  //Timer B
	//ITEM_MAP(T02007003),  //Timer C
	//ITEM_MAP(T02007004),  //Timer D
	//ITEM_MAP(T02008001),  //CCTalk COM2->COM3
	//ITEM_MAP(T02008002),  //CCTalk 2
	//ITEM_MAP(T02019001),  //SPI Flash1
	//ITEM_MAP(T02019002),  //SPI Flash2
	//ITEM_MAP(T02010001),  //IIC0
	//ITEM_MAP(T02010002),  //IIC1
	//ITEM_MAP(T02012001),  //Secure RTC
	//ITEM_MAP(T02012001),  //Secure RTC
	//ITEM_MAP(T02013003),  //Intrusion 0
	//ITEM_MAP(T02013004),  //Intrusion 1
	//ITEM_MAP(T02013005),  //Intrusion 2
	//ITEM_MAP(T02013006),  //Intrusion 3
	//ITEM_MAP(T02013007),  //Intrusion 4
	//ITEM_MAP(T02013008),  //Intrusion 5
	//ITEM_MAP(T02013009),  //Intrusion 6
	//ITEM_MAP(T02013010),  //Intrusion 7
	//ITEM_MAP(T02013001),  //Intrusion power
	//ITEM_MAP(T02013002),  //Intrusion alert
	ITEM_MAP(T02014001),  //Battery Voltage1
	//ITEM_MAP(T02014001),  //Battery Voltage1
	//ITEM_MAP(T02014002),  //Battery voltage 2
	//ITEM_MAP(T02015001),  //+5VNG
	//ITEM_MAP(T02015002),  //+12VNG
	//ITEM_MAP(T02016001),  //HCS300
	//ITEM_MAP(T02021001),  //ibutton
	//ITEM_MAP(T02017001),  //
	//ITEM_MAP(T02017002),  //
	//ITEM_MAP(T02017003),  //
	//ITEM_MAP(T02017004),  //
	//ITEM_MAP(T02017005),  //
	//ITEM_MAP(T02017006),  //
	//ITEM_MAP(T02017007),  //
	//ITEM_MAP(T02017008),  //
	//ITEM_MAP(T02017009),  //
	//ITEM_MAP(T02017010),  //
	//ITEM_MAP(T02017011),  //
	//ITEM_MAP(T02017012),  //
	//ITEM_MAP(T02017013),  //
	//ITEM_MAP(T02017014),  //
	//ITEM_MAP(T02017015),  //
	//ITEM_MAP(T02017016),  //
	//ITEM_MAP(T02017017),  //
	//ITEM_MAP(T02017018),  //
	//ITEM_MAP(T02017019),  //
	//ITEM_MAP(T02017020),  //
	//ITEM_MAP(T02017021),  //
	//ITEM_MAP(T02017022),  //
	//ITEM_MAP(T02017023),  //
	//ITEM_MAP(T02017024),  //
	//ITEM_MAP(T02017025),  //
	//ITEM_MAP(T02017026),  //
	//ITEM_MAP(T02017027),  //
	//ITEM_MAP(T02017028),  //
	//ITEM_MAP(T02017029),  //
	//ITEM_MAP(T02017030),  //
	//ITEM_MAP(T02017031),  //
	//ITEM_MAP(T02017032),  //
	//ITEM_MAP(T01022001),	//SIO
	//ITEM_MAP(T01019001),	//PCIe1x - gpc exist or not
	// ITEM_MAP(T02017001),  //
	// ITEM_MAP(T02017002),  //
	// ITEM_MAP(T02017003),  //
	// ITEM_MAP(T02017004),  //
	// ITEM_MAP(T02017005),  //
	// ITEM_MAP(T02017006),  //
	// ITEM_MAP(T02017007),  //
	// ITEM_MAP(T02017008),  //
	// ITEM_MAP(T02017009),  //
	// ITEM_MAP(T02017010),  //
	// ITEM_MAP(T02017011),  //
	// ITEM_MAP(T02017012),  //
	// ITEM_MAP(T02017013),  //
	// ITEM_MAP(T02017014),  //
	// ITEM_MAP(T02017015),  //
	// ITEM_MAP(T02017016),  //
	// ITEM_MAP(T02017017),  //
	// ITEM_MAP(T02017018),  //
	// ITEM_MAP(T02017019),  //
	// ITEM_MAP(T02017020),  //
	// ITEM_MAP(T02017021),  //
	// ITEM_MAP(T02017022),  //
	// ITEM_MAP(T02017023),  //
	// ITEM_MAP(T02017024),  //
	// ITEM_MAP(T02017025),  //
	// ITEM_MAP(T02017026),  //
	// ITEM_MAP(T02017027),  //
	// ITEM_MAP(T02017028),  //
	// ITEM_MAP(T02017029),  //
	// ITEM_MAP(T02017030),  //
	// ITEM_MAP(T02017031),  //
	// ITEM_MAP(T02017032),  //
	// ITEM_MAP(T02017033),  //DK 20160817 pci config table version check
	/*************************************************************************/
	
};

TEST_ACTION g_DiagManuTest[] =
{
	/********************************** T2 ***********************************/
	// ITEM_MAP(T01005001),    //Audio test Package
	// //ITEM_MAP(T01005001),    //Audio test Package
	// ITEM_MAP(T01005002),	//Audio 4 channel
	// ITEM_MAP(T01007001),	//VGA1
	// //ITEM_MAP(T01020002),  //FAN2 left
	// //ITEM_MAP(T02011001),  	//DIP SW
	// //ITEM_MAP(T02013003), 	//Intrusion 0
	// //ITEM_MAP(T02013004),  	//Intrusion 1
	// //ITEM_MAP(T02013005),  	//Intrusion 2
	// //ITEM_MAP(T02013006),  	//Intrusion 3	
	// ITEM_MAP(T02022001),	//fore led 
	// ITEM_MAP(T02022002),	//Fan LED gcb881c, need last test.
	/*************************************************************************/
	/********************************** T3 ***********************************/
	// ITEM_MAP(T01005001),    //Audio test Package
	ITEM_MAP(T01005001),    //Audio test Package
	// //ITEM_MAP(T01005002),	//Audio 4 channel
	ITEM_MAP(T01007001),	//VGA1
	// //ITEM_MAP(T01020002),  //FAN2 left
	// //ITEM_MAP(T02011001),  	//DIP SW
	// //ITEM_MAP(T02013003), 	//Intrusion 0
	// //ITEM_MAP(T02013004),  	//Intrusion 1
	// //ITEM_MAP(T02013005),  	//Intrusion 2
	// //ITEM_MAP(T02013006),  	//Intrusion 3	
	ITEM_MAP(T02022001),	//fore led 
	//ITEM_MAP(T02022002),	//Fan LED gcb881c, need last test.
	/*************************************************************************/


};


int getAutoTestNums()
{
	return ARRAYCNT(g_DiagAutoTest);
}

int getManuTestNums()
{
	return ARRAYCNT(g_DiagManuTest);
}

