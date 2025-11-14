// 函数: sub_4ed1a0
// 地址: 0x4ed1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == arg2)
    return 

float* ecx = arg3 + 0x10

do
    *(arg1 + 4) = ecx[-3]
    *(arg1 + 8) = ecx[-2]
    *(arg1 + 0xc) = ecx[-1]
    *(arg1 + 0x10) = fconvert.s(fconvert.t(*ecx))
    ecx = &ecx[6]
    *(arg1 + 0x14) = fconvert.s(fconvert.t(ecx[-5]))
    arg1 += 0x18
while (&ecx[-4] != arg2)
