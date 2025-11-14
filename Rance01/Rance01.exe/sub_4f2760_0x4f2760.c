// 函数: sub_4f2760
// 地址: 0x4f2760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (arg1 != arg3)
    arg3 -= 0xc
    
    if (arg1 == arg3)
        break
    
    int32_t edx = *arg1
    int32_t esi_1 = arg1[1]
    int32_t edi_1 = arg1[2]
    *arg1 = *arg3
    arg1[1] = arg3[1]
    arg1[2] = arg3[2]
    *arg3 = edx
    arg1 = &arg1[3]
    arg3[1] = esi_1
    arg3[2] = edi_1
