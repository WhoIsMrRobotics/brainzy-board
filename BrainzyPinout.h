/************************************************************************
 * File : config.h                                                      *
 *  Configuration file for Kbots main shield.                           *
 *                                                                      *
 ************************************************************************/

#ifndef __CONFIG_ROBOT_H
#define __CONFIG_ROBOT_H

/* ---------------- 
  Teensy 3.2
---------------- */

//Motors Drivers
#define MOT1_1 23
#define MOT1_2 22
#define COD1_A 15
#define COD1_B  14

#define MOT2_1 21
#define MOT2_2 20
#define COD2_A 17
#define COD2_B 16

//UART
#define USB Serial
#define Bluetooth Serial1

//SPI
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_CS1 8
#define SPI_CS2 9
#define SPI_CS3 10

//I2C
#define I2C_SDA 18
#define I2C_SCL 19

//User Interface
#define UI_BTN_DOWN 6
#define UI_BTN_LEFT 3
#define UI_BTN_CENTER 4
#define UI_BTN_RIGHT 5
#define UI_BTN_UP 2

#define BUZZER 7

/* ---------------- 
  Teensy 3.5
---------------- */

//Motor Driver
#define MOT3_1 30
#define MOT3_2 29
#define COD3_A 28
#define COD3_B 27

//Power Monitoring
#define CELL1 A22
#define CELL2 A21
#define CELL3 A20 

//IR Range Sensors
#define SHARP1 A14
#define SHARP2 A15
#define SHARP3 A16
#define SHARP4 A17
#define SHARP5 A13
#define SHARP6 A12

//Radio Comunications
#define RF_CE 37
#define RF_CS 38

//Extensions for touch screen
#define T_IRQ 24
#define T_CS1 25
#define T_CS2 26

#endif



