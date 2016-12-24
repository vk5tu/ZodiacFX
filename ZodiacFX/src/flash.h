/**
 * @file
 * flash.h
 *
 * This file contains the function declarations for the Flashing functions
 *
 */

/*
 * This file is part of the Zodiac FX firmware.
 * Copyright (c) 2016 Northbound Networks.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Paul Zanna <paul@northboundnetworks.com>
 *		 & Kristopher Chen <Kristopher@northboundnetworks.com>
 *
 */


#ifndef FLASH_H_
#define FLASH_H_

void get_serial(uint32_t *uid_buf);
void cli_update(void);
int flash_write_page(uint8_t *flash_page);
void firmware_update_init(void);
__no_inline RAMFUNC void firmware_update(void);
int xmodem_xfer(void);
void xmodem_clear_padding(uint8_t *buff);

#define X_EOT 0x04
#define X_ACK 0x06
#define X_NAK 0x15

#define ERASE_SECTOR_SIZE	65536
#define NEW_FW_BASE			(IFLASH_ADDR + (5*IFLASH_NB_OF_PAGES/8)*IFLASH_PAGE_SIZE)
#define NEW_FW_MAX_SIZE		196608


#endif /* FLASH_H_ */