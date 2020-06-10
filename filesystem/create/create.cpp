#include "Header.h"

bool isHaveOneBlock()
{
    return true;
}

void getNowTime( char* s )
{
    time_t now;
    int unixTime = (int)time(&now);
    time_t tick = (time_t)unixTime;
    struct tm tm;
    tm = *localtime(&tick);
    strftime(s, 20, "%Y-%m-%d %H:%M", &tm);
}

char* getUserName()
{
    char* s = (char*)malloc(20);
    strcpy(s, "user1");
    return s;
}

int create()
{
    file temp;  //创建一个临时文件
    //判断是否至少有一块的空间来容纳一个空文件
    int flag = isHaveOneBlock();        //判断是否有空闲磁盘块可以容纳一个空白文件，若有则返回空闲磁盘的第一块号
    if( flag != -1 ){     //可以正常创建一个空文件
        getNowTime(temp.create_file_date);      //填写文件创建时间
        getNowTime(temp.modify_file_date);      //填写文件修改时间
        printf("请输入创建文件的名称：");
        scanf("%s",temp.file_name);             //填写文件的名称
        temp.all_file_block_number = 1;     //刚创建的空文件占用磁盘的一个块
        strcpy( temp.create_user_name, getUserName() );     //填写创建文件的用户名
        temp.first_block_in_disk = flag;    //该空闲文件存储的第一个块的块号
        
        //文件权限
        temp.permision = WRITE;             //
    }
    else{       //没有足够的空间容纳一个空文件
        return 101;
    }
    
    return 0;
}

int main()
{
    create();
}
