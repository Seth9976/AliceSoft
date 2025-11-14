// 函数: sub_508540
// 地址: 0x508540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(*arg1 + 0x148)

if (ecx != 3)
    if (ecx == 2)
        goto label_508562
else if (*(arg1 + 0x103) == 0)
    ecx = 2
label_508562:
    
    if (*(arg1 + 0x102) == 0)
        ecx = 1

arg1[0x3f] = ecx
