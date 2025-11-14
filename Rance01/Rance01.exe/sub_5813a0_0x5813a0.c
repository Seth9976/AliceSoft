// 函数: sub_5813a0
// 地址: 0x5813a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg3

while (ecx != arg2)
    if (arg1 != 0)
        *arg1 = *ecx
        arg1[1] = ecx[1]
    
    ecx = &ecx[2]
    arg1 = &arg1[2]
