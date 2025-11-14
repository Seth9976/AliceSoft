// 函数: sub_4bf430
// 地址: 0x4bf430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ecx = arg2

while (ecx != arg3)
    if (arg1 != 0)
        *arg1 = fconvert.s(fconvert.t(*ecx))
    
    ecx = &ecx[1]
    arg1 = &arg1[1]
    arg2 = ecx
