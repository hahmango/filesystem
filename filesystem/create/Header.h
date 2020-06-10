//
//  Header.h
//  filesystem
//
//  Created by 谈修泽 on 2020/6/10.
//  Copyright © 2020 谈修泽. All rights reserved.
//

#ifndef Header_h
#define Header_h


#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//#define BLOCKSIZ  512  每块大小
//#define SYSOPENFILE 40  系统打开文件表最大项数
//#define DIRNUM  128  每个目录所包含的最大目录项数（文件数）
//#define DIRSIZ  14  每个目录项名字部分所占字节数，另加i节点号2个字节
//#define PWDSIZ   12  口令字
//#define PWDNUM   32  最多可设32个口令登录
//#define NOFILE  20  每个用户最多可打开20个文件，即用户打开文件最大次数
//#define NADDR 10  每个i节点最多指向10块，addr[0]~addr[9]
//#define NHINO  128  共128个Hash链表，提供索引i节点（必须为2的幂）
//#define USERNUM  10  最多允许10个用户登录
//#define DINODESIZ  32 每个磁盘i节点所占字节
//#define DINODEBLK  32  所有磁盘i节点共占32个物理块
//#define FILEBLK  512  共有512个目录文件物理块
//#define NICFREE  50  超级块中空闲块数组的最大块数
//#define NICINOD  50  超级块中空闲节点的最大块数
//#define DINODESTART 2*BLOCKSIZ  i节点起始地址
//#define DATASTART (2+DINODEBLK)*BLOCKSIZ 目录、文件区起始地址
#define FILE_NAME_SIZE 80  //文件名称最大占用80个字符/40个汉字
#define USER_NAME_SIZE 20   //用户名的最大长度


using namespace std;

void f()
{
    int a;
}

enum Privilege { SEE, READ, WRITE };    //权限：可见/可读/可写

typedef struct file{
    int id;                                 //文件的i节点编号。ps：暂定这个形式
    char file_name[FILE_NAME_SIZE];         //文件名，占用空间：80字节
    int first_block_in_disk;                //文件在磁盘中存储的第一个块的块号，占用空间 4 字节
    int all_file_block_number;              //文件总共占磁盘的块数，至少为1，占用空间 4 字节
    char create_file_date[20];              //创建文件的日期，占用空间 20 字节
    char modify_file_date[20];              //文件的修改日期，占用空间 20 字节
    char create_user_name[USER_NAME_SIZE];  //创建文件的用户名，占用空间 USER_NAME_SIZE * 1 字节
    Privilege permision;                    //文件的访问权限
    
}file;

typedef struct inode{
    file current_file;
} inode;

int code;
/*
 * 101:空间不足以创建一个空白文件
 *
*/
#endif /* Header_h */
