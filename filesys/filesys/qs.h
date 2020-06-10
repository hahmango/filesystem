#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
#define BLOCKSIZ  512  //每块大小
#define DINODEBLK  32  //所有磁盘i节点共占32个物理块
#define FILEBLK  512  //共有512个目录文件物理块

#pragma warning(disable:4996)
char *buf;

extern void write(int addr, string st);
extern string read(int addr);
#pragma once
