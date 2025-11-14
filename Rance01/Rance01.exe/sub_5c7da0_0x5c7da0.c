// 函数: sub_5c7da0
// 地址: 0x5c7da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &aldloader::CALDFile::`vftable'{for `IALDFile2'}
int32_t __saved_edi_2 = arg1[5]

if (__saved_edi_2 != 0)
    int32_t __saved_edi_1 = __saved_edi_2
    sub_6b4d5b()

arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
void* result = arg1[1]

if (result != 0)
    int32_t ecx
    int32_t var_10_1 = ecx
    sub_5c9310(result, arg1[2])
    int32_t var_14_1 = arg1[1]
    result = sub_6b4d5b()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
return result
