// 函数: sub_5fbbd0
// 地址: 0x5fbbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
ebx.b = arg2
enum MESSAGEBOX_RESULT edi = arg1

for (enum MESSAGEBOX_RESULT* i = *(edi + 0x50); i != *(edi + 0x54); i = &i[1])
    arg1 = *i
    
    if (*(arg1 + 4) != 0)
        arg1 = *arg1
        
        if (arg1 != 0xffffffff)
            sub_409760(arg1, ebx.b != 0)

if (*(edi + 0x78) == 0)
    return 

int32_t edi_1 = *(edi + 0x74)

if (edi_1 != 0xffffffff)
    arg1.b = ebx.b != 0
    sub_409760(edi_1, arg1.b)
