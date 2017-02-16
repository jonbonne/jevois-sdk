/*
 * Copyright (C) ST-Ericsson SA 2010
 *
 * License terms: GNU General Public License, version 2
 * Author: Rabin Vincent <rabin.vincent@stericsson.com>
 */

#ifndef __MACH_PINS_DB8500_H
#define __MACH_PINS_DB8500_H

/*
 * TODO: Eventually encode all non-board specific pull up/down configuration
 * here.
 */

#define GPIO0_GPIO    PIN_CFG(0, GPIO)
#define GPIO0_U0_CTSn   PIN_CFG(0, ALT_A)
#define GPIO0_TRIG_OUT    PIN_CFG(0, ALT_B)
#define GPIO0_IP_TDO    PIN_CFG(0, ALT_C)

#define GPIO1_GPIO    PIN_CFG(1, GPIO)
#define GPIO1_U0_RTSn   PIN_CFG(1, ALT_A)
#define GPIO1_TRIG_IN   PIN_CFG(1, ALT_B)
#define GPIO1_IP_TDI    PIN_CFG(1, ALT_C)

#define GPIO2_GPIO    PIN_CFG(2, GPIO)
#define GPIO2_U0_RXD    PIN_CFG(2, ALT_A)
#define GPIO2_NONE    PIN_CFG(2, ALT_B)
#define GPIO2_IP_TMS    PIN_CFG(2, ALT_C)

#define GPIO3_GPIO    PIN_CFG(3, GPIO)
#define GPIO3_U0_TXD    PIN_CFG(3, ALT_A)
#define GPIO3_NONE    PIN_CFG(3, ALT_B)
#define GPIO3_IP_TCK    PIN_CFG(3, ALT_C)

#define GPIO4_GPIO    PIN_CFG(4, GPIO)
#define GPIO4_U1_RXD    PIN_CFG(4, ALT_A)
#define GPIO4_I2C4_SCL    PIN_CFG_INPUT(4, ALT_B, PULLUP)
#define GPIO4_IP_TRSTn    PIN_CFG(4, ALT_C)

#define GPIO5_GPIO    PIN_CFG(5, GPIO)
#define GPIO5_U1_TXD    PIN_CFG(5, ALT_A)
#define GPIO5_I2C4_SDA    PIN_CFG_INPUT(5, ALT_B, PULLUP)
#define GPIO5_IP_GPIO6    PIN_CFG(5, ALT_C)

#define GPIO6_GPIO    PIN_CFG(6, GPIO)
#define GPIO6_U1_CTSn   PIN_CFG(6, ALT_A)
#define GPIO6_I2C1_SCL    PIN_CFG_INPUT(6, ALT_B, PULLUP)
#define GPIO6_IP_GPIO0    PIN_CFG(6, ALT_C)

#define GPIO7_GPIO    PIN_CFG(7, GPIO)
#define GPIO7_U1_RTSn   PIN_CFG(7, ALT_A)
#define GPIO7_I2C1_SDA    PIN_CFG_INPUT(7, ALT_B, PULLUP)
#define GPIO7_IP_GPIO1    PIN_CFG(7, ALT_C)

#define GPIO8_GPIO    PIN_CFG(8, GPIO)
#define GPIO8_IPI2C_SDA   PIN_CFG_INPUT(8, ALT_A, PULLUP)
#define GPIO8_I2C2_SDA    PIN_CFG_INPUT(8, ALT_B, PULLUP)

#define GPIO9_GPIO    PIN_CFG(9, GPIO)
#define GPIO9_IPI2C_SCL   PIN_CFG_INPUT(9, ALT_A, PULLUP)
#define GPIO9_I2C2_SCL    PIN_CFG_INPUT(9, ALT_B, PULLUP)

#define GPIO10_GPIO   PIN_CFG(10, GPIO)
#define GPIO10_IPI2C_SDA  PIN_CFG_INPUT(10, ALT_A, PULLUP)
#define GPIO10_I2C2_SDA   PIN_CFG_INPUT(10, ALT_B, PULLUP)
#define GPIO10_IP_GPIO3   PIN_CFG(10, ALT_C)

#define GPIO11_GPIO   PIN_CFG(11, GPIO)
#define GPIO11_IPI2C_SCL  PIN_CFG_INPUT(11, ALT_A, PULLUP)
#define GPIO11_I2C2_SCL   PIN_CFG_INPUT(11, ALT_B, PULLUP)
#define GPIO11_IP_GPIO2   PIN_CFG(11, ALT_C)

#define GPIO12_GPIO   PIN_CFG(12, GPIO)
#define GPIO12_MSP0_TXD   PIN_CFG(12, ALT_A)
#define GPIO12_MSP0_RXD   PIN_CFG(12, ALT_B)

#define GPIO13_GPIO   PIN_CFG(13, GPIO)
#define GPIO13_MSP0_TFS   PIN_CFG(13, ALT_A)

#define GPIO14_GPIO   PIN_CFG(14, GPIO)
#define GPIO14_MSP0_TCK   PIN_CFG(14, ALT_A)

#define GPIO15_GPIO   PIN_CFG(15, GPIO)
#define GPIO15_MSP0_RXD   PIN_CFG(15, ALT_A)
#define GPIO15_MSP0_TXD   PIN_CFG(15, ALT_B)

#define GPIO16_GPIO   PIN_CFG(16, GPIO)
#define GPIO16_MSP0_RFS   PIN_CFG(16, ALT_A)
#define GPIO16_I2C1_SCL   PIN_CFG_INPUT(16, ALT_B, PULLUP)
#define GPIO16_SLIM0_DAT  PIN_CFG(16, ALT_C)

#define GPIO17_GPIO   PIN_CFG(17, GPIO)
#define GPIO17_MSP0_RCK   PIN_CFG(17, ALT_A)
#define GPIO17_I2C1_SDA   PIN_CFG_INPUT(17, ALT_B, PULLUP)
#define GPIO17_SLIM0_CLK  PIN_CFG(17, ALT_C)

#define GPIO18_GPIO   PIN_CFG(18, GPIO)
#define GPIO18_MC0_CMDDIR PIN_CFG_INPUT(18, ALT_A, PULLUP)
#define GPIO18_U2_RXD   PIN_CFG(18, ALT_B)
#define GPIO18_MS_IEP   PIN_CFG(18, ALT_C)

#define GPIO19_GPIO   PIN_CFG(19, GPIO)
#define GPIO19_MC0_DAT0DIR  PIN_CFG_INPUT(19, ALT_A, PULLUP)
#define GPIO19_U2_TXD   PIN_CFG(19, ALT_B)
#define GPIO19_MS_DAT0DIR PIN_CFG(19, ALT_C)

#define GPIO20_GPIO   PIN_CFG(20, GPIO)
#define GPIO20_MC0_DAT2DIR  PIN_CFG_INPUT(20, ALT_A, PULLUP)
#define GPIO20_UARTMOD_TXD  PIN_CFG(20, ALT_B)
#define GPIO20_IP_TRIGOUT PIN_CFG(20, ALT_C)

#define GPIO21_GPIO   PIN_CFG(21, GPIO)
#define GPIO21_MC0_DAT31DIR PIN_CFG_INPUT(21, ALT_A, PULLUP)
#define GPIO21_MSP0_SCK   PIN_CFG(21, ALT_B)
#define GPIO21_MS_DAT31DIR  PIN_CFG(21, ALT_C)

#define GPIO22_GPIO   PIN_CFG(22, GPIO)
#define GPIO22_MC0_FBCLK  PIN_CFG_INPUT(22, ALT_A, PULLUP)
#define GPIO22_UARTMOD_RXD  PIN_CFG(22, ALT_B)
#define GPIO22_MS_FBCLK   PIN_CFG(22, ALT_C)

#define GPIO23_GPIO   PIN_CFG(23, GPIO)
#define GPIO23_MC0_CLK    PIN_CFG_INPUT(23, ALT_A, PULLUP)
#define GPIO23_STMMOD_CLK PIN_CFG(23, ALT_B)
#define GPIO23_MS_CLK   PIN_CFG(23, ALT_C)

#define GPIO24_GPIO   PIN_CFG(24, GPIO)
#define GPIO24_MC0_CMD    PIN_CFG_INPUT(24, ALT_A, PULLUP)
#define GPIO24_UARTMOD_RXD  PIN_CFG(24, ALT_B)
#define GPIO24_MS_BS    PIN_CFG(24, ALT_C)

#define GPIO25_GPIO   PIN_CFG(25, GPIO)
#define GPIO25_MC0_DAT0   PIN_CFG_INPUT(25, ALT_A, PULLUP)
#define GPIO25_STMMOD_DAT0  PIN_CFG(25, ALT_B)
#define GPIO25_MS_DAT0    PIN_CFG(25, ALT_C)

#define GPIO26_GPIO   PIN_CFG(26, GPIO)
#define GPIO26_MC0_DAT1   PIN_CFG_INPUT(26, ALT_A, PULLUP)
#define GPIO26_STMMOD_DAT1  PIN_CFG(26, ALT_B)
#define GPIO26_MS_DAT1    PIN_CFG(26, ALT_C)

#define GPIO27_GPIO   PIN_CFG(27, GPIO)
#define GPIO27_MC0_DAT2   PIN_CFG_INPUT(27, ALT_A, PULLUP)
#define GPIO27_STMMOD_DAT2  PIN_CFG(27, ALT_B)
#define GPIO27_MS_DAT2    PIN_CFG(27, ALT_C)

#define GPIO28_GPIO   PIN_CFG(28, GPIO)
#define GPIO28_MC0_DAT3   PIN_CFG_INPUT(28, ALT_A, PULLUP)
#define GPIO28_STMMOD_DAT3  PIN_CFG(28, ALT_B)
#define GPIO28_MS_DAT3    PIN_CFG(28, ALT_C)

#define GPIO29_GPIO   PIN_CFG(29, GPIO)
#define GPIO29_MC0_DAT4   PIN_CFG(29, ALT_A)
#define GPIO29_SPI3_CLK   PIN_CFG(29, ALT_B)
#define GPIO29_U2_RXD   PIN_CFG(29, ALT_C)

#define GPIO30_GPIO   PIN_CFG(30, GPIO)
#define GPIO30_MC0_DAT5   PIN_CFG(30, ALT_A)
#define GPIO30_SPI3_RXD   PIN_CFG(30, ALT_B)
#define GPIO30_U2_TXD   PIN_CFG(30, ALT_C)

#define GPIO31_GPIO   PIN_CFG(31, GPIO)
#define GPIO31_MC0_DAT6   PIN_CFG(31, ALT_A)
#define GPIO31_SPI3_FRM   PIN_CFG(31, ALT_B)
#define GPIO31_U2_CTSn    PIN_CFG(31, ALT_C)

#define GPIO32_GPIO   PIN_CFG(32, GPIO)
#define GPIO32_MC0_DAT7   PIN_CFG(32, ALT_A)
#define GPIO32_SPI3_TXD   PIN_CFG(32, ALT_B)
#define GPIO32_U2_RTSn    PIN_CFG(32, ALT_C)

#define GPIO33_GPIO   PIN_CFG(33, GPIO)
#define GPIO33_MSP1_TXD   PIN_CFG(33, ALT_A)
#define GPIO33_MSP1_RXD   PIN_CFG(33, ALT_B)
#define GPIO33_U0_DTRn    PIN_CFG(33, ALT_C)

#define GPIO34_GPIO   PIN_CFG(34, GPIO)
#define GPIO34_MSP1_TFS   PIN_CFG(34, ALT_A)
#define GPIO34_NONE   PIN_CFG(34, ALT_B)
#define GPIO34_U0_DCDn    PIN_CFG(34, ALT_C)

#define GPIO35_GPIO   PIN_CFG(35, GPIO)
#define GPIO35_MSP1_TCK   PIN_CFG(35, ALT_A)
#define GPIO35_NONE   PIN_CFG(35, ALT_B)
#define GPIO35_U0_DSRn    PIN_CFG(35, ALT_C)

#define GPIO36_GPIO   PIN_CFG(36, GPIO)
#define GPIO36_MSP1_RXD   PIN_CFG(36, ALT_A)
#define GPIO36_MSP1_TXD   PIN_CFG(36, ALT_B)
#define GPIO36_U0_RIn   PIN_CFG(36, ALT_C)

#define GPIO64_GPIO   PIN_CFG(64, GPIO)
#define GPIO64_LCDB_DE    PIN_CFG(64, ALT_A)
#define GPIO64_KP_O1    PIN_CFG(64, ALT_B)
#define GPIO64_IP_GPIO4   PIN_CFG(64, ALT_C)

#define GPIO65_GPIO   PIN_CFG(65, GPIO)
#define GPIO65_LCDB_HSO   PIN_CFG(65, ALT_A)
#define GPIO65_KP_O0    PIN_CFG(65, ALT_B)
#define GPIO65_IP_GPIO5   PIN_CFG(65, ALT_C)

#define GPIO66_GPIO   PIN_CFG(66, GPIO)
#define GPIO66_LCDB_VSO   PIN_CFG(66, ALT_A)
#define GPIO66_KP_I1    PIN_CFG(66, ALT_B)
#define GPIO66_IP_GPIO6   PIN_CFG(66, ALT_C)

#define GPIO67_GPIO   PIN_CFG(67, GPIO)
#define GPIO67_LCDB_CLK   PIN_CFG(67, ALT_A)
#define GPIO67_KP_I0    PIN_CFG(67, ALT_B)
#define GPIO67_IP_GPIO7   PIN_CFG(67, ALT_C)

#define GPIO68_GPIO   PIN_CFG(68, GPIO)
#define GPIO68_LCD_VSI0   PIN_CFG(68, ALT_A)
#define GPIO68_KP_O7    PIN_CFG(68, ALT_B)
#define GPIO68_SM_CLE   PIN_CFG(68, ALT_C)

#define GPIO69_GPIO   PIN_CFG(69, GPIO)
#define GPIO69_LCD_VSI1   PIN_CFG(69, ALT_A)
#define GPIO69_KP_I7    PIN_CFG(69, ALT_B)
#define GPIO69_SM_ALE   PIN_CFG(69, ALT_C)

#define GPIO70_GPIO   PIN_CFG(70, GPIO)
#define GPIO70_LCD_D0   PIN_CFG(70, ALT_A)
#define GPIO70_KP_O5    PIN_CFG(70, ALT_B)
#define GPIO70_STMAPE_CLK PIN_CFG(70, ALT_C)

#define GPIO71_GPIO   PIN_CFG(71, GPIO)
#define GPIO71_LCD_D1   PIN_CFG(71, ALT_A)
#define GPIO71_KP_O4    PIN_CFG(71, ALT_B)
#define GPIO71_STMAPE_DAT3  PIN_CFG(71, ALT_C)

#define GPIO72_GPIO   PIN_CFG(72, GPIO)
#define GPIO72_LCD_D2   PIN_CFG(72, ALT_A)
#define GPIO72_KP_O3    PIN_CFG(72, ALT_B)
#define GPIO72_STMAPE_DAT2  PIN_CFG(72, ALT_C)

#define GPIO73_GPIO   PIN_CFG(73, GPIO)
#define GPIO73_LCD_D3   PIN_CFG(73, ALT_A)
#define GPIO73_KP_O2    PIN_CFG(73, ALT_B)
#define GPIO73_STMAPE_DAT1  PIN_CFG(73, ALT_C)

#define GPIO74_GPIO   PIN_CFG(74, GPIO)
#define GPIO74_LCD_D4   PIN_CFG(74, ALT_A)
#define GPIO74_KP_I5    PIN_CFG(74, ALT_B)
#define GPIO74_STMAPE_DAT0  PIN_CFG(74, ALT_C)

#define GPIO75_GPIO   PIN_CFG(75, GPIO)
#define GPIO75_LCD_D5   PIN_CFG(75, ALT_A)
#define GPIO75_KP_I4    PIN_CFG(75, ALT_B)
#define GPIO75_U2_RXD   PIN_CFG(75, ALT_C)

#define GPIO76_GPIO   PIN_CFG(76, GPIO)
#define GPIO76_LCD_D6   PIN_CFG(76, ALT_A)
#define GPIO76_KP_I3    PIN_CFG(76, ALT_B)
#define GPIO76_U2_TXD   PIN_CFG(76, ALT_C)

#define GPIO77_GPIO   PIN_CFG(77, GPIO)
#define GPIO77_LCD_D7   PIN_CFG(77, ALT_A)
#define GPIO77_KP_I2    PIN_CFG(77, ALT_B)
#define GPIO77_NONE   PIN_CFG(77, ALT_C)

#define GPIO78_GPIO   PIN_CFG(78, GPIO)
#define GPIO78_LCD_D8   PIN_CFG(78, ALT_A)
#define GPIO78_KP_O6    PIN_CFG(78, ALT_B)
#define GPIO78_IP_GPIO2   PIN_CFG(78, ALT_C)

#define GPIO79_GPIO   PIN_CFG(79, GPIO)
#define GPIO79_LCD_D9   PIN_CFG(79, ALT_A)
#define GPIO79_KP_I6    PIN_CFG(79, ALT_B)
#define GPIO79_IP_GPIO3   PIN_CFG(79, ALT_C)

#define GPIO80_GPIO   PIN_CFG(80, GPIO)
#define GPIO80_LCD_D10    PIN_CFG(80, ALT_A)
#define GPIO80_KP_SKA0    PIN_CFG(80, ALT_B)
#define GPIO80_IP_GPIO4   PIN_CFG(80, ALT_C)

#define GPIO81_GPIO   PIN_CFG(81, GPIO)
#define GPIO81_LCD_D11    PIN_CFG(81, ALT_A)
#define GPIO81_KP_SKB0    PIN_CFG(81, ALT_B)
#define GPIO81_IP_GPIO5   PIN_CFG(81, ALT_C)

#define GPIO82_GPIO   PIN_CFG(82, GPIO)
#define GPIO82_LCD_D12    PIN_CFG(82, ALT_A)
#define GPIO82_KP_O5    PIN_CFG(82, ALT_B)

#define GPIO83_GPIO   PIN_CFG(83, GPIO)
#define GPIO83_LCD_D13    PIN_CFG(83, ALT_A)
#define GPIO83_KP_O4    PIN_CFG(83, ALT_B)

#define GPIO84_GPIO   PIN_CFG(84, GPIO)
#define GPIO84_LCD_D14    PIN_CFG(84, ALT_A)
#define GPIO84_KP_I5    PIN_CFG(84, ALT_B)

#define GPIO85_GPIO   PIN_CFG(85, GPIO)
#define GPIO85_LCD_D15    PIN_CFG(85, ALT_A)
#define GPIO85_KP_I4    PIN_CFG(85, ALT_B)

#define GPIO86_GPIO   PIN_CFG(86, GPIO)
#define GPIO86_LCD_D16    PIN_CFG(86, ALT_A)
#define GPIO86_SM_ADQ0    PIN_CFG(86, ALT_B)
#define GPIO86_MC5_DAT0   PIN_CFG(86, ALT_C)

#define GPIO87_GPIO   PIN_CFG(87, GPIO)
#define GPIO87_LCD_D17    PIN_CFG(87, ALT_A)
#define GPIO87_SM_ADQ1    PIN_CFG(87, ALT_B)
#define GPIO87_MC5_DAT1   PIN_CFG(87, ALT_C)

#define GPIO88_GPIO   PIN_CFG(88, GPIO)
#define GPIO88_LCD_D18    PIN_CFG(88, ALT_A)
#define GPIO88_SM_ADQ2    PIN_CFG(88, ALT_B)
#define GPIO88_MC5_DAT2   PIN_CFG(88, ALT_C)

#define GPIO89_GPIO   PIN_CFG(89, GPIO)
#define GPIO89_LCD_D19    PIN_CFG(89, ALT_A)
#define GPIO89_SM_ADQ3    PIN_CFG(89, ALT_B)
#define GPIO89_MC5_DAT3   PIN_CFG(89, ALT_C)

#define GPIO90_GPIO   PIN_CFG(90, GPIO)
#define GPIO90_LCD_D20    PIN_CFG(90, ALT_A)
#define GPIO90_SM_ADQ4    PIN_CFG(90, ALT_B)
#define GPIO90_MC5_CMD    PIN_CFG(90, ALT_C)

#define GPIO91_GPIO   PIN_CFG(91, GPIO)
#define GPIO91_LCD_D21    PIN_CFG(91, ALT_A)
#define GPIO91_SM_ADQ5    PIN_CFG(91, ALT_B)
#define GPIO91_MC5_FBCLK  PIN_CFG(91, ALT_C)

#define GPIO92_GPIO   PIN_CFG(92, GPIO)
#define GPIO92_LCD_D22    PIN_CFG(92, ALT_A)
#define GPIO92_SM_ADQ6    PIN_CFG(92, ALT_B)
#define GPIO92_MC5_CLK    PIN_CFG(92, ALT_C)

#define GPIO93_GPIO   PIN_CFG(93, GPIO)
#define GPIO93_LCD_D23    PIN_CFG(93, ALT_A)
#define GPIO93_SM_ADQ7    PIN_CFG(93, ALT_B)
#define GPIO93_MC5_DAT4   PIN_CFG(93, ALT_C)

#define GPIO94_GPIO   PIN_CFG(94, GPIO)
#define GPIO94_KP_O7    PIN_CFG(94, ALT_A)
#define GPIO94_SM_ADVn    PIN_CFG(94, ALT_B)
#define GPIO94_MC5_DAT5   PIN_CFG(94, ALT_C)

#define GPIO95_GPIO   PIN_CFG(95, GPIO)
#define GPIO95_KP_I7    PIN_CFG(95, ALT_A)
#define GPIO95_SM_CS0n    PIN_CFG(95, ALT_B)
#define GPIO95_SM_PS0n    PIN_CFG(95, ALT_C)

#define GPIO96_GPIO   PIN_CFG(96, GPIO)
#define GPIO96_KP_O6    PIN_CFG(96, ALT_A)
#define GPIO96_SM_OEn   PIN_CFG(96, ALT_B)
#define GPIO96_MC5_DAT6   PIN_CFG(96, ALT_C)

#define GPIO97_GPIO   PIN_CFG(97, GPIO)
#define GPIO97_KP_I6    PIN_CFG(97, ALT_A)
#define GPIO97_SM_WEn   PIN_CFG(97, ALT_B)
#define GPIO97_MC5_DAT7   PIN_CFG(97, ALT_C)

#define GPIO128_GPIO    PIN_CFG(128, GPIO)
#define GPIO128_MC2_CLK   PIN_CFG_INPUT(128, ALT_A, PULLUP)
#define GPIO128_SM_CKO    PIN_CFG(128, ALT_B)

#define GPIO129_GPIO    PIN_CFG(129, GPIO)
#define GPIO129_MC2_CMD   PIN_CFG_INPUT(129, ALT_A, PULLUP)
#define GPIO129_SM_WAIT0n PIN_CFG(129, ALT_B)

#define GPIO130_GPIO    PIN_CFG(130, GPIO)
#define GPIO130_MC2_FBCLK PIN_CFG_INPUT(130, ALT_A, PULLUP)
#define GPIO130_SM_FBCLK  PIN_CFG(130, ALT_B)
#define GPIO130_MC2_RSTN  PIN_CFG(130, ALT_C)

#define GPIO131_GPIO    PIN_CFG(131, GPIO)
#define GPIO131_MC2_DAT0  PIN_CFG_INPUT(131, ALT_A, PULLUP)
#define GPIO131_SM_ADQ8   PIN_CFG(131, ALT_B)

#define GPIO132_GPIO    PIN_CFG(132, GPIO)
#define GPIO132_MC2_DAT1  PIN_CFG_INPUT(132, ALT_A, PULLUP)
#define GPIO132_SM_ADQ9   PIN_CFG(132, ALT_B)

#define GPIO133_GPIO    PIN_CFG(133, GPIO)
#define GPIO133_MC2_DAT2  PIN_CFG_INPUT(133, ALT_A, PULLUP)
#define GPIO133_SM_ADQ10  PIN_CFG(133, ALT_B)

#define GPIO134_GPIO    PIN_CFG(134, GPIO)
#define GPIO134_MC2_DAT3  PIN_CFG_INPUT(134, ALT_A, PULLUP)
#define GPIO134_SM_ADQ11  PIN_CFG(134, ALT_B)

#define GPIO135_GPIO    PIN_CFG(135, GPIO)
#define GPIO135_MC2_DAT4  PIN_CFG_INPUT(135, ALT_A, PULLUP)
#define GPIO135_SM_ADQ12  PIN_CFG(135, ALT_B)

#define GPIO136_GPIO    PIN_CFG(136, GPIO)
#define GPIO136_MC2_DAT5  PIN_CFG_INPUT(136, ALT_A, PULLUP)
#define GPIO136_SM_ADQ13  PIN_CFG(136, ALT_B)

#define GPIO137_GPIO    PIN_CFG(137, GPIO)
#define GPIO137_MC2_DAT6  PIN_CFG_INPUT(137, ALT_A, PULLUP)
#define GPIO137_SM_ADQ14  PIN_CFG(137, ALT_B)

#define GPIO138_GPIO    PIN_CFG(138, GPIO)
#define GPIO138_MC2_DAT7  PIN_CFG_INPUT(138, ALT_A, PULLUP)
#define GPIO138_SM_ADQ15  PIN_CFG(138, ALT_B)

#define GPIO139_GPIO    PIN_CFG(139, GPIO)
#define GPIO139_SSP1_RXD  PIN_CFG(139, ALT_A)
#define GPIO139_SM_WAIT1n PIN_CFG(139, ALT_B)
#define GPIO139_KP_O8   PIN_CFG(139, ALT_C)

#define GPIO140_GPIO    PIN_CFG(140, GPIO)
#define GPIO140_SSP1_TXD  PIN_CFG(140, ALT_A)
#define GPIO140_IP_GPIO7  PIN_CFG(140, ALT_B)
#define GPIO140_KP_SKA1   PIN_CFG(140, ALT_C)

#define GPIO141_GPIO    PIN_CFG(141, GPIO)
#define GPIO141_SSP1_CLK  PIN_CFG(141, ALT_A)
#define GPIO141_IP_GPIO2  PIN_CFG(141, ALT_B)
#define GPIO141_KP_O9   PIN_CFG(141, ALT_C)

#define GPIO142_GPIO    PIN_CFG(142, GPIO)
#define GPIO142_SSP1_FRM  PIN_CFG(142, ALT_A)
#define GPIO142_IP_GPIO3  PIN_CFG(142, ALT_B)
#define GPIO142_KP_SKB1   PIN_CFG(142, ALT_C)

#define GPIO143_GPIO    PIN_CFG(143, GPIO)
#define GPIO143_SSP0_CLK  PIN_CFG(143, ALT_A)

#define GPIO144_GPIO    PIN_CFG(144, GPIO)
#define GPIO144_SSP0_FRM  PIN_CFG(144, ALT_A)

#define GPIO145_GPIO    PIN_CFG(145, GPIO)
#define GPIO145_SSP0_RXD  PIN_CFG(145, ALT_A)

#define GPIO146_GPIO    PIN_CFG(146, GPIO)
#define GPIO146_SSP0_TXD  PIN_CFG(146, ALT_A)

#define GPIO147_GPIO    PIN_CFG(147, GPIO)
#define GPIO147_I2C0_SCL  PIN_CFG_INPUT(147, ALT_A, PULLUP)

#define GPIO148_GPIO    PIN_CFG(148, GPIO)
#define GPIO148_I2C0_SDA  PIN_CFG_INPUT(148, ALT_A, PULLUP)

#define GPIO149_GPIO    PIN_CFG(149, GPIO)
#define GPIO149_IP_GPIO0  PIN_CFG(149, ALT_A)
#define GPIO149_SM_CS1n   PIN_CFG(149, ALT_B)
#define GPIO149_SM_PS1n   PIN_CFG(149, ALT_C)

#define GPIO150_GPIO    PIN_CFG(150, GPIO)
#define GPIO150_IP_GPIO1  PIN_CFG(150, ALT_A)
#define GPIO150_LCDA_CLK  PIN_CFG(150, ALT_B)

#define GPIO151_GPIO    PIN_CFG(151, GPIO)
#define GPIO151_KP_SKA0   PIN_CFG(151, ALT_A)
#define GPIO151_LCD_VSI0  PIN_CFG(151, ALT_B)
#define GPIO151_KP_O8   PIN_CFG(151, ALT_C)

#define GPIO152_GPIO    PIN_CFG(152, GPIO)
#define GPIO152_KP_SKB0   PIN_CFG(152, ALT_A)
#define GPIO152_LCD_VSI1  PIN_CFG(152, ALT_B)
#define GPIO152_KP_O9   PIN_CFG(152, ALT_C)

#define GPIO153_GPIO    PIN_CFG(153, GPIO)
#define GPIO153_KP_I7   PIN_CFG_INPUT(153, ALT_A, PULLDOWN)
#define GPIO153_LCD_D24   PIN_CFG(153, ALT_B)
#define GPIO153_U2_RXD    PIN_CFG(153, ALT_C)

#define GPIO154_GPIO    PIN_CFG(154, GPIO)
#define GPIO154_KP_I6   PIN_CFG_INPUT(154, ALT_A, PULLDOWN)
#define GPIO154_LCD_D25   PIN_CFG(154, ALT_B)
#define GPIO154_U2_TXD    PIN_CFG(154, ALT_C)

#define GPIO155_GPIO    PIN_CFG(155, GPIO)
#define GPIO155_KP_I5   PIN_CFG_INPUT(155, ALT_A, PULLDOWN)
#define GPIO155_LCD_D26   PIN_CFG(155, ALT_B)
#define GPIO155_STMAPE_CLK  PIN_CFG(155, ALT_C)

#define GPIO156_GPIO    PIN_CFG(156, GPIO)
#define GPIO156_KP_I4   PIN_CFG_INPUT(156, ALT_A, PULLDOWN)
#define GPIO156_LCD_D27   PIN_CFG(156, ALT_B)
#define GPIO156_STMAPE_DAT3 PIN_CFG(156, ALT_C)

#define GPIO157_GPIO    PIN_CFG(157, GPIO)
#define GPIO157_KP_O7   PIN_CFG_INPUT(157, ALT_A, PULLUP)
#define GPIO157_LCD_D28   PIN_CFG(157, ALT_B)
#define GPIO157_STMAPE_DAT2 PIN_CFG(157, ALT_C)

#define GPIO158_GPIO    PIN_CFG(158, GPIO)
#define GPIO158_KP_O6   PIN_CFG_INPUT(158, ALT_A, PULLUP)
#define GPIO158_LCD_D29   PIN_CFG(158, ALT_B)
#define GPIO158_STMAPE_DAT1 PIN_CFG(158, ALT_C)

#define GPIO159_GPIO    PIN_CFG(159, GPIO)
#define GPIO159_KP_O5   PIN_CFG_INPUT(159, ALT_A, PULLUP)
#define GPIO159_LCD_D30   PIN_CFG(159, ALT_B)
#define GPIO159_STMAPE_DAT0 PIN_CFG(159, ALT_C)

#define GPIO160_GPIO    PIN_CFG(160, GPIO)
#define GPIO160_KP_O4   PIN_CFG_INPUT(160, ALT_A, PULLUP)
#define GPIO160_LCD_D31   PIN_CFG(160, ALT_B)
#define GPIO160_NONE    PIN_CFG(160, ALT_C)

#define GPIO161_GPIO    PIN_CFG(161, GPIO)
#define GPIO161_KP_I3   PIN_CFG_INPUT(161, ALT_A, PULLDOWN)
#define GPIO161_LCD_D32   PIN_CFG(161, ALT_B)
#define GPIO161_UARTMOD_RXD PIN_CFG(161, ALT_C)

#define GPIO162_GPIO    PIN_CFG(162, GPIO)
#define GPIO162_KP_I2   PIN_CFG_INPUT(162, ALT_A, PULLDOWN)
#define GPIO162_LCD_D33   PIN_CFG(162, ALT_B)
#define GPIO162_UARTMOD_TXD PIN_CFG(162, ALT_C)

#define GPIO163_GPIO    PIN_CFG(163, GPIO)
#define GPIO163_KP_I1   PIN_CFG_INPUT(163, ALT_A, PULLDOWN)
#define GPIO163_LCD_D34   PIN_CFG(163, ALT_B)
#define GPIO163_STMMOD_CLK  PIN_CFG(163, ALT_C)

#define GPIO164_GPIO    PIN_CFG(164, GPIO)
#define GPIO164_KP_I0   PIN_CFG_INPUT(164, ALT_A, PULLUP)
#define GPIO164_LCD_D35   PIN_CFG(164, ALT_B)
#define GPIO164_STMMOD_DAT3 PIN_CFG(164, ALT_C)

#define GPIO165_GPIO    PIN_CFG(165, GPIO)
#define GPIO165_KP_O3   PIN_CFG_INPUT(165, ALT_A, PULLUP)
#define GPIO165_LCD_D36   PIN_CFG(165, ALT_B)
#define GPIO165_STMMOD_DAT2 PIN_CFG(165, ALT_C)

#define GPIO166_GPIO    PIN_CFG(166, GPIO)
#define GPIO166_KP_O2   PIN_CFG_INPUT(166, ALT_A, PULLUP)
#define GPIO166_LCD_D37   PIN_CFG(166, ALT_B)
#define GPIO166_STMMOD_DAT1 PIN_CFG(166, ALT_C)

#define GPIO167_GPIO    PIN_CFG(167, GPIO)
#define GPIO167_KP_O1   PIN_CFG_INPUT(167, ALT_A, PULLUP)
#define GPIO167_LCD_D38   PIN_CFG(167, ALT_B)
#define GPIO167_STMMOD_DAT0 PIN_CFG(167, ALT_C)

#define GPIO168_GPIO    PIN_CFG(168, GPIO)
#define GPIO168_KP_O0   PIN_CFG_INPUT(168, ALT_A, PULLUP)
#define GPIO168_LCD_D39   PIN_CFG(168, ALT_B)
#define GPIO168_NONE    PIN_CFG(168, ALT_C)

#define GPIO169_GPIO    PIN_CFG(169, GPIO)
#define GPIO169_RF_PURn   PIN_CFG(169, ALT_A)
#define GPIO169_LCDA_DE   PIN_CFG(169, ALT_B)
#define GPIO169_USBSIM_PDC  PIN_CFG(169, ALT_C)

#define GPIO170_GPIO    PIN_CFG(170, GPIO)
#define GPIO170_MODEM_STATE PIN_CFG(170, ALT_A)
#define GPIO170_LCDA_VSO  PIN_CFG(170, ALT_B)
#define GPIO170_KP_SKA1   PIN_CFG(170, ALT_C)

#define GPIO171_GPIO    PIN_CFG(171, GPIO)
#define GPIO171_MODEM_PWREN PIN_CFG(171, ALT_A)
#define GPIO171_LCDA_HSO  PIN_CFG(171, ALT_B)
#define GPIO171_KP_SKB1   PIN_CFG(171, ALT_C)

#define GPIO192_GPIO    PIN_CFG(192, GPIO)
#define GPIO192_MSP2_SCK  PIN_CFG(192, ALT_A)

#define GPIO193_GPIO    PIN_CFG(193, GPIO)
#define GPIO193_MSP2_TXD  PIN_CFG(193, ALT_A)

#define GPIO194_GPIO    PIN_CFG(194, GPIO)
#define GPIO194_MSP2_TCK  PIN_CFG(194, ALT_A)

#define GPIO195_GPIO    PIN_CFG(195, GPIO)
#define GPIO195_MSP2_TFS  PIN_CFG(195, ALT_A)

#define GPIO196_GPIO    PIN_CFG(196, GPIO)
#define GPIO196_MSP2_RXD  PIN_CFG(196, ALT_A)

#define GPIO197_GPIO    PIN_CFG(197, GPIO)
#define GPIO197_MC4_DAT3  PIN_CFG_INPUT(197, ALT_A, PULLUP)

#define GPIO198_GPIO    PIN_CFG(198, GPIO)
#define GPIO198_MC4_DAT2  PIN_CFG_INPUT(198, ALT_A, PULLUP)

#define GPIO199_GPIO    PIN_CFG(199, GPIO)
#define GPIO199_MC4_DAT1  PIN_CFG_INPUT(199, ALT_A, PULLUP)

#define GPIO200_GPIO    PIN_CFG(200, GPIO)
#define GPIO200_MC4_DAT0  PIN_CFG_INPUT(200, ALT_A, PULLUP)

#define GPIO201_GPIO    PIN_CFG(201, GPIO)
#define GPIO201_MC4_CMD   PIN_CFG_INPUT(201, ALT_A, PULLUP)

#define GPIO202_GPIO    PIN_CFG(202, GPIO)
#define GPIO202_MC4_FBCLK PIN_CFG_INPUT(202, ALT_A, PULLUP)
#define GPIO202_PWL   PIN_CFG(202, ALT_B)
#define GPIO202_MC4_RSTN  PIN_CFG(202, ALT_C)

#define GPIO203_GPIO    PIN_CFG(203, GPIO)
#define GPIO203_MC4_CLK   PIN_CFG_INPUT(203, ALT_A, PULLUP)

#define GPIO204_GPIO    PIN_CFG(204, GPIO)
#define GPIO204_MC4_DAT7  PIN_CFG_INPUT(204, ALT_A, PULLUP)

#define GPIO205_GPIO    PIN_CFG(205, GPIO)
#define GPIO205_MC4_DAT6  PIN_CFG_INPUT(205, ALT_A, PULLUP)

#define GPIO206_GPIO    PIN_CFG(206, GPIO)
#define GPIO206_MC4_DAT5  PIN_CFG_INPUT(206, ALT_A, PULLUP)

#define GPIO207_GPIO    PIN_CFG(207, GPIO)
#define GPIO207_MC4_DAT4  PIN_CFG_INPUT(207, ALT_A, PULLUP)

#define GPIO208_GPIO    PIN_CFG(208, GPIO)
#define GPIO208_MC1_CLK   PIN_CFG(208, ALT_A)

#define GPIO209_GPIO    PIN_CFG(209, GPIO)
#define GPIO209_MC1_FBCLK PIN_CFG(209, ALT_A)
#define GPIO209_SPI1_CLK  PIN_CFG(209, ALT_B)

#define GPIO210_GPIO    PIN_CFG(210, GPIO)
#define GPIO210_MC1_CMD   PIN_CFG(210, ALT_A)

#define GPIO211_GPIO    PIN_CFG(211, GPIO)
#define GPIO211_MC1_DAT0  PIN_CFG(211, ALT_A)

#define GPIO212_GPIO    PIN_CFG(212, GPIO)
#define GPIO212_MC1_DAT1  PIN_CFG(212, ALT_A)
#define GPIO212_SPI1_FRM  PIN_CFG(212, ALT_B)

#define GPIO213_GPIO    PIN_CFG(213, GPIO)
#define GPIO213_MC1_DAT2  PIN_CFG(213, ALT_A)
#define GPIO213_SPI1_TXD  PIN_CFG(213, ALT_B)

#define GPIO214_GPIO    PIN_CFG(214, GPIO)
#define GPIO214_MC1_DAT3  PIN_CFG(214, ALT_A)
#define GPIO214_SPI1_RXD  PIN_CFG(214, ALT_B)

#define GPIO215_GPIO    PIN_CFG(215, GPIO)
#define GPIO215_MC1_CMDDIR  PIN_CFG(215, ALT_A)
#define GPIO215_MC3_DAT2DIR PIN_CFG(215, ALT_B)
#define GPIO215_CLKOUT1   PIN_CFG(215, ALT_C)
#define GPIO215_SPI2_TXD  PIN_CFG(215, ALT_C)

#define GPIO216_GPIO    PIN_CFG(216, GPIO)
#define GPIO216_MC1_DAT2DIR PIN_CFG(216, ALT_A)
#define GPIO216_MC3_CMDDIR  PIN_CFG(216, ALT_B)
#define GPIO216_I2C3_SDA  PIN_CFG_INPUT(216, ALT_C, PULLUP)
#define GPIO216_SPI2_FRM  PIN_CFG(216, ALT_C)

#define GPIO217_GPIO    PIN_CFG(217, GPIO)
#define GPIO217_MC1_DAT0DIR PIN_CFG(217, ALT_A)
#define GPIO217_MC3_DAT31DIR  PIN_CFG(217, ALT_B)
#define GPIO217_CLKOUT2   PIN_CFG(217, ALT_C)
#define GPIO217_SPI2_CLK  PIN_CFG(217, ALT_C)

#define GPIO218_GPIO    PIN_CFG(218, GPIO)
#define GPIO218_MC1_DAT31DIR  PIN_CFG(218, ALT_A)
#define GPIO218_MC3_DAT0DIR PIN_CFG(218, ALT_B)
#define GPIO218_I2C3_SCL  PIN_CFG_INPUT(218, ALT_C, PULLUP)
#define GPIO218_SPI2_RXD  PIN_CFG(218, ALT_C)

#define GPIO219_GPIO    PIN_CFG(219, GPIO)
#define GPIO219_HSIR_FLA0 PIN_CFG(219, ALT_A)
#define GPIO219_MC3_CLK   PIN_CFG(219, ALT_B)

#define GPIO220_GPIO    PIN_CFG(220, GPIO)
#define GPIO220_HSIR_DAT0 PIN_CFG(220, ALT_A)
#define GPIO220_MC3_FBCLK PIN_CFG(220, ALT_B)
#define GPIO220_SPI0_CLK  PIN_CFG(220, ALT_C)

#define GPIO221_GPIO    PIN_CFG(221, GPIO)
#define GPIO221_HSIR_RDY0 PIN_CFG(221, ALT_A)
#define GPIO221_MC3_CMD   PIN_CFG(221, ALT_B)

#define GPIO222_GPIO    PIN_CFG(222, GPIO)
#define GPIO222_HSIT_FLA0 PIN_CFG(222, ALT_A)
#define GPIO222_MC3_DAT0  PIN_CFG(222, ALT_B)

#define GPIO223_GPIO    PIN_CFG(223, GPIO)
#define GPIO223_HSIT_DAT0 PIN_CFG(223, ALT_A)
#define GPIO223_MC3_DAT1  PIN_CFG(223, ALT_B)
#define GPIO223_SPI0_FRM  PIN_CFG(223, ALT_C)

#define GPIO224_GPIO    PIN_CFG(224, GPIO)
#define GPIO224_HSIT_RDY0 PIN_CFG(224, ALT_A)
#define GPIO224_MC3_DAT2  PIN_CFG(224, ALT_B)
#define GPIO224_SPI0_TXD  PIN_CFG(224, ALT_C)

#define GPIO225_GPIO    PIN_CFG(225, GPIO)
#define GPIO225_HSIT_CAWAKE0  PIN_CFG(225, ALT_A)
#define GPIO225_MC3_DAT3  PIN_CFG(225, ALT_B)
#define GPIO225_SPI0_RXD  PIN_CFG(225, ALT_C)

#define GPIO226_GPIO    PIN_CFG(226, GPIO)
#define GPIO226_HSIT_ACWAKE0  PIN_CFG(226, ALT_A)
#define GPIO226_PWL   PIN_CFG(226, ALT_B)
#define GPIO226_USBSIM_PDC  PIN_CFG(226, ALT_C)

#define GPIO227_GPIO    PIN_CFG(227, GPIO)
#define GPIO227_CLKOUT1   PIN_CFG(227, ALT_A)

#define GPIO228_GPIO    PIN_CFG(228, GPIO)
#define GPIO228_CLKOUT2   PIN_CFG(228, ALT_A)

#define GPIO229_GPIO    PIN_CFG(229, GPIO)
#define GPIO229_CLKOUT1   PIN_CFG(229, ALT_A)
#define GPIO229_PWL   PIN_CFG(229, ALT_B)
#define GPIO229_I2C3_SDA  PIN_CFG_INPUT(229, ALT_C, PULLUP)

#define GPIO230_GPIO    PIN_CFG(230, GPIO)
#define GPIO230_CLKOUT2   PIN_CFG(230, ALT_A)
#define GPIO230_PWL   PIN_CFG(230, ALT_B)
#define GPIO230_I2C3_SCL  PIN_CFG_INPUT(230, ALT_C, PULLUP)

#define GPIO256_GPIO    PIN_CFG(256, GPIO)
#define GPIO256_USB_NXT   PIN_CFG(256, ALT_A)

#define GPIO257_GPIO    PIN_CFG(257, GPIO)
#define GPIO257_USB_STP   PIN_CFG(257, ALT_A)

#define GPIO258_GPIO    PIN_CFG(258, GPIO)
#define GPIO258_USB_XCLK  PIN_CFG(258, ALT_A)
#define GPIO258_NONE    PIN_CFG(258, ALT_B)
#define GPIO258_DDR_TRIG  PIN_CFG(258, ALT_C)

#define GPIO259_GPIO    PIN_CFG(259, GPIO)
#define GPIO259_USB_DIR   PIN_CFG(259, ALT_A)

#define GPIO260_GPIO    PIN_CFG(260, GPIO)
#define GPIO260_USB_DAT7  PIN_CFG(260, ALT_A)

#define GPIO261_GPIO    PIN_CFG(261, GPIO)
#define GPIO261_USB_DAT6  PIN_CFG(261, ALT_A)

#define GPIO262_GPIO    PIN_CFG(262, GPIO)
#define GPIO262_USB_DAT5  PIN_CFG(262, ALT_A)

#define GPIO263_GPIO    PIN_CFG(263, GPIO)
#define GPIO263_USB_DAT4  PIN_CFG(263, ALT_A)

#define GPIO264_GPIO    PIN_CFG(264, GPIO)
#define GPIO264_USB_DAT3  PIN_CFG(264, ALT_A)

#define GPIO265_GPIO    PIN_CFG(265, GPIO)
#define GPIO265_USB_DAT2  PIN_CFG(265, ALT_A)

#define GPIO266_GPIO    PIN_CFG(266, GPIO)
#define GPIO266_USB_DAT1  PIN_CFG(266, ALT_A)

#define GPIO267_GPIO    PIN_CFG(267, GPIO)
#define GPIO267_USB_DAT0  PIN_CFG(267, ALT_A)

#endif