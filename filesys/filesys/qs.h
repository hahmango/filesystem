#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
#define BLOCKSIZ  512  //ÿ���С
#define DINODEBLK  32  //���д���i�ڵ㹲ռ32�������
#define FILEBLK  512  //����512��Ŀ¼�ļ������

#pragma warning(disable:4996)
char *buf;

extern void write(int addr, string st);
extern string read(int addr);
#pragma once
