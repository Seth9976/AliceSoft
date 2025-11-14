// 函数: sub_4c35a0
// 地址: 0x4c35a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3
int32_t* esi = arg1

if (esi != arg2)
    int32_t* edi_1 = result + 0x20
    
    do
        sub_4adaf0(result, esi)
        sub_4adaf0(&edi_1[-4], &esi[4])
        *edi_1 = esi[8]
        edi_1[1] = esi[9]
        edi_1[2] = esi[0xa]
        edi_1[3] = esi[0xb]
        esi = &esi[0xc]
        result += 0x30
        edi_1 = &edi_1[0xc]
    while (esi != arg2)

return result
