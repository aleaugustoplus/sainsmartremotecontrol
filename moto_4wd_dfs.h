/*
  moto_4wd_dfs.h
  2012 Copyright (c) Seeed Technology Inc.  All right reserved.
 
  Author: Loovee
  
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifndef _MOTO_4WD_DFS_H_
#define _MOTO_4WD_DFS_H_

#define FREQPWM         1000       // 10khZ

// order READ 
#define SETM1SPEED      0x01
#define SETM2SPEED      0x02
#define SETM1DIR        0x03
#define SETM2DIR        0x04
#define SETM1SPEEDIR    0x05
#define SETM2SPEEDIR    0x06
#define SETM1RUN        0x07
#define SETM2RUN        0x08
#define SETM1M2RUN      0x09
#define SETM1STOP       0x0a
#define SETM2STOP       0x0b
#define SETM1M2STOP     0x0c
#define READM1SPEED     0x0d
#define READM2SPEED     0x0e    

// order SEND
#define RETM1SPEED      0x87
#define RETM2SPEED      0x88
#define RETM1STATE      0x90
#define RETM2STATE      0x91

// motor state
#define STOP            0x00        // motor stop
#define RUN             0x01        // motor run

#define DIRF            0x00        // Forward
#define DIRR            0x01        // Reversion

// pin ctrl
#define PINCS           6           // all mos cs
#define PINM1F          8
#define PINM1R          9
#define PINM2F          10
#define PINM2R          11

//ctrl
#define ALLMOSON        digitalWrite(PINCS, HIGH)
#define ALLMOSOFF       digitalWrite(PINCS, LOW)




#endif
/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
