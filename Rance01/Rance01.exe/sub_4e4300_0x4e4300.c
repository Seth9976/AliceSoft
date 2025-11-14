// 函数: sub_4e4300
// 地址: 0x4e4300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** edi = arg1
int32_t* ecx

if (edi[5] u< 0x10)
    ecx = edi
else
    ecx = *edi

int32_t* esi

if (sub_51bc80(ecx, esi) != 0)
    return 1

if (edi[5] u>= 0x10)
    edi = *edi

void** var_8 = edi
sub_4e4340(0x75561c)
enum MESSAGEBOX_RESULT result
result.b = 0
return result
