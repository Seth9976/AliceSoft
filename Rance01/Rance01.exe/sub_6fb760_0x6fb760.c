// 函数: sub_6fb760
// 地址: 0x6fb760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = *arg2
*arg2 = &eax[1]
*eax = 0xff
char* result = *arg2
*arg2 = &result[1]
int32_t* edx
edx.b = arg1
*result = edx.b
return result
