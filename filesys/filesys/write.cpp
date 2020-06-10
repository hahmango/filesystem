#include"qs.h"
int main() {
	string a = "hello!";
	string c = "dsadada";
	string b;
	buf = (char*)malloc((DINODEBLK + FILEBLK + 2)*BLOCKSIZ * sizeof(char));
	write(1,a);
	write(2, c);
	b=read(2);
	cout << b<<endl;
}

extern void write(int addr,string st) {
	int r_addr;
	r_addr = addr * BLOCKSIZ;
	const char *p = st.data();
	strncpy(buf+r_addr, p+0,BLOCKSIZ);
	//for(int i=0;i<512;i++)
	//	printf("%c",*(buf+i+512));
}
 
extern string read(int addr) {
	int r_addr;
	string st;
	r_addr = addr * BLOCKSIZ;
	char p[512];
	strncpy(p, buf + r_addr, BLOCKSIZ);
	st = p;
	return st;
}
