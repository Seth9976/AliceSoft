// 函数: sub_4ff190
// 地址: 0x4ff190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg3

while (ecx != arg2)
    if (arg1 != 0)
        *arg1 = *ecx
        arg1[1] = ecx[1]
        arg1[2] = ecx[2]
        arg1[3] = ecx[3]
        arg1[4] = ecx[4]
        arg1[5] = ecx[5]
    
    ecx = &ecx[6]
    arg1 = &arg1[6]
