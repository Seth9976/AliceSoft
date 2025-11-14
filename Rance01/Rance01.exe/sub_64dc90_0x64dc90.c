// 函数: sub_64dc90
// 地址: 0x64dc90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg3

while (ecx != arg2)
    if (arg1 != 0)
        *arg1 = *ecx
        arg1[1] = ecx[1]
        arg1[2] = ecx[2]
    
    ecx = &ecx[3]
    arg1 = &arg1[3]
