#ifndef __UPGRADE_H
#define __UPGRADE_H

#include "sys.h"

#define BATA_SIZE    5120		//���а���Ч���ݴ�С
#define Flash_ADDR   0x1000		//����flash��ʼλ��

extern u32 Crc_file;
u8 connect_server(void);
u8 send_server(u8 *buffer);
u32 Get_Upgrade_size(void);
void *Get_Upgrade_package(u8 package,u16 size_num);
void Upgrade(void);
void SoftReset(void);
#endif


