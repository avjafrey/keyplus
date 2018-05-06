//------------------------------------------------------------------------------
// Copyright 2014 Silicon Laboratories, Inc.
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Silicon Laboratories End User
// License Agreement which accompanies this distribution, and is available at
// http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
// Original content and implementation provided by Silicon Laboratories.
//------------------------------------------------------------------------------
//Supported Devices:
//  EFM8LB10F16E_QFN24
//  EFM8LB10F16E_QFN32
//  EFM8LB10F16E_QFP32
//  EFM8LB10F16E_QSOP24
//  EFM8LB10F16ES0_QFN24
//  EFM8LB10F16ES0_QFN32
//  EFM8LB10F16ES1_QFN24
//  EFM8LB10F16ES1_QFN32
//  EFM8LB11F16E_QFN24
//  EFM8LB11F16E_QFN32
//  EFM8LB11F16E_QFP32
//  EFM8LB11F16E_QSOP24
//  EFM8LB11F16ES0_QFN24
//  EFM8LB11F16ES0_QFN32
//  EFM8LB11F16ES1_QFN24
//  EFM8LB11F16ES1_QFN32
//  EFM8LB11F32E_QFN24
//  EFM8LB11F32E_QFN32
//  EFM8LB11F32E_QFP32
//  EFM8LB11F32E_QSOP24
//  EFM8LB11F32ES0_QFN24
//  EFM8LB11F32ES0_QFN32
//  EFM8LB11F32ES1_QFN24
//  EFM8LB11F32ES1_QFN32
//  EFM8LB12F32E_QFN24
//  EFM8LB12F32E_QFN32
//  EFM8LB12F32E_QFP32
//  EFM8LB12F32E_QSOP24
//  EFM8LB12F32ES0_QFN24
//  EFM8LB12F32ES0_QFN32
//  EFM8LB12F32ES1_QFN24
//  EFM8LB12F32ES1_QFN32
//  EFM8LB12F64E_QFN24
//  EFM8LB12F64E_QFN32
//  EFM8LB12F64E_QFP32
//  EFM8LB12F64E_QSOP24
//  EFM8LB12F64ES0_QFN24
//  EFM8LB12F64ES0_QFN32
//  EFM8LB12F64ES1_QFN24
//  EFM8LB12F64ES1_QFN32

#ifndef SI_EFM8LB1_DEVICES_H
#define SI_EFM8LB1_DEVICES_H

#define EFM8LB10F16E_QFN24 0x54
#define EFM8LB10F16E_QFN32 0x51
#define EFM8LB10F16E_QFP32 0x52
#define EFM8LB10F16E_QSOP24 0x53
#define EFM8LB10F16ES0_QFN24 0x74
#define EFM8LB10F16ES0_QFN32 0x71
#define EFM8LB10F16ES1_QFN24 0x94
#define EFM8LB10F16ES1_QFN32 0x91
#define EFM8LB11F16E_QFN24 0x50
#define EFM8LB11F16E_QFN32 0x4D
#define EFM8LB11F16E_QFP32 0x4E
#define EFM8LB11F16E_QSOP24 0x4F
#define EFM8LB11F16ES0_QFN24 0x70
#define EFM8LB11F16ES0_QFN32 0x6D
#define EFM8LB11F16ES1_QFN24 0x90
#define EFM8LB11F16ES1_QFN32 0x8D
#define EFM8LB11F32E_QFN24 0x4C
#define EFM8LB11F32E_QFN32 0x49
#define EFM8LB11F32E_QFP32 0x4A
#define EFM8LB11F32E_QSOP24 0x4B
#define EFM8LB11F32ES0_QFN24 0x6C
#define EFM8LB11F32ES0_QFN32 0x69
#define EFM8LB11F32ES1_QFN24 0x8C
#define EFM8LB11F32ES1_QFN32 0x89
#define EFM8LB12F32E_QFN24 0x48
#define EFM8LB12F32E_QFN32 0x45
#define EFM8LB12F32E_QFP32 0x46
#define EFM8LB12F32E_QSOP24 0x47
#define EFM8LB12F32ES0_QFN24 0x68
#define EFM8LB12F32ES0_QFN32 0x65
#define EFM8LB12F32ES1_QFN24 0x88
#define EFM8LB12F32ES1_QFN32 0x85
#define EFM8LB12F64E_QFN24 0x44
#define EFM8LB12F64E_QFN32 0x41
#define EFM8LB12F64E_QFP32 0x42
#define EFM8LB12F64E_QSOP24 0x43
#define EFM8LB12F64ES0_QFN24 0x64
#define EFM8LB12F64ES0_QFN32 0x61
#define EFM8LB12F64ES1_QFN24 0x84
#define EFM8LB12F64ES1_QFN32 0x81

#if (EFM8LB1_DEVICE == EFM8LB10F16E_QFN24)
#define DEVICE_DERIVID EFM8LB10F16E_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB10F16E_QFN32)
#define DEVICE_DERIVID EFM8LB10F16E_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB10F16E_QFP32)
#define DEVICE_DERIVID EFM8LB10F16E_QFP32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFP32 1

#elif (EFM8LB1_DEVICE == EFM8LB10F16E_QSOP24)
#define DEVICE_DERIVID EFM8LB10F16E_QSOP24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QSOP24 1

#elif (EFM8LB1_DEVICE == EFM8LB10F16ES0_QFN24)
#define DEVICE_DERIVID EFM8LB10F16ES0_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB10F16ES0_QFN32)
#define DEVICE_DERIVID EFM8LB10F16ES0_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB10F16ES1_QFN24)
#define DEVICE_DERIVID EFM8LB10F16ES1_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB10F16ES1_QFN32)
#define DEVICE_DERIVID EFM8LB10F16ES1_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16E_QFN24)
#define DEVICE_DERIVID EFM8LB11F16E_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16E_QFN32)
#define DEVICE_DERIVID EFM8LB11F16E_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16E_QFP32)
#define DEVICE_DERIVID EFM8LB11F16E_QFP32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFP32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16E_QSOP24)
#define DEVICE_DERIVID EFM8LB11F16E_QSOP24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QSOP24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16ES0_QFN24)
#define DEVICE_DERIVID EFM8LB11F16ES0_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16ES0_QFN32)
#define DEVICE_DERIVID EFM8LB11F16ES0_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16ES1_QFN24)
#define DEVICE_DERIVID EFM8LB11F16ES1_QFN24
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F16ES1_QFN32)
#define DEVICE_DERIVID EFM8LB11F16ES1_QFN32
#define DEVICE_FLASH_SIZE 0x4000
#define DEVICE_XRAM_SIZE 0x0400
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32E_QFN24)
#define DEVICE_DERIVID EFM8LB11F32E_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32E_QFN32)
#define DEVICE_DERIVID EFM8LB11F32E_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32E_QFP32)
#define DEVICE_DERIVID EFM8LB11F32E_QFP32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFP32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32E_QSOP24)
#define DEVICE_DERIVID EFM8LB11F32E_QSOP24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QSOP24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32ES0_QFN24)
#define DEVICE_DERIVID EFM8LB11F32ES0_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32ES0_QFN32)
#define DEVICE_DERIVID EFM8LB11F32ES0_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32ES1_QFN24)
#define DEVICE_DERIVID EFM8LB11F32ES1_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB11F32ES1_QFN32)
#define DEVICE_DERIVID EFM8LB11F32ES1_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32E_QFN24)
#define DEVICE_DERIVID EFM8LB12F32E_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32E_QFN32)
#define DEVICE_DERIVID EFM8LB12F32E_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32E_QFP32)
#define DEVICE_DERIVID EFM8LB12F32E_QFP32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFP32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32E_QSOP24)
#define DEVICE_DERIVID EFM8LB12F32E_QSOP24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QSOP24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32ES0_QFN24)
#define DEVICE_DERIVID EFM8LB12F32ES0_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32ES0_QFN32)
#define DEVICE_DERIVID EFM8LB12F32ES0_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32ES1_QFN24)
#define DEVICE_DERIVID EFM8LB12F32ES1_QFN24
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F32ES1_QFN32)
#define DEVICE_DERIVID EFM8LB12F32ES1_QFN32
#define DEVICE_FLASH_SIZE 0x8000
#define DEVICE_XRAM_SIZE 0x0800
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64E_QFN24)
#define DEVICE_DERIVID EFM8LB12F64E_QFN24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64E_QFN32)
#define DEVICE_DERIVID EFM8LB12F64E_QFN32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64E_QFP32)
#define DEVICE_DERIVID EFM8LB12F64E_QFP32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFP32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64E_QSOP24)
#define DEVICE_DERIVID EFM8LB12F64E_QSOP24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QSOP24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64ES0_QFN24)
#define DEVICE_DERIVID EFM8LB12F64ES0_QFN24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64ES0_QFN32)
#define DEVICE_DERIVID EFM8LB12F64ES0_QFN32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN32 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64ES1_QFN24)
#define DEVICE_DERIVID EFM8LB12F64ES1_QFN24
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN24 1

#elif (EFM8LB1_DEVICE == EFM8LB12F64ES1_QFN32)
#define DEVICE_DERIVID EFM8LB12F64ES1_QFN32
#define DEVICE_FLASH_SIZE 0xFC00
#define DEVICE_XRAM_SIZE 0x1000
#define DEVICE_PKG_QFN32 1

#endif

#endif // SI_EFM8LB1_DEVICES_H

//-eof--------------------------------------------------------------------------
