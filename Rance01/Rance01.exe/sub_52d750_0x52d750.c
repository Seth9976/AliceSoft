// 函数: sub_52d750
// 地址: 0x52d750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t* esi = arg1

while (edi != arg4)
    if (esi != edi)
        int32_t* eax = *esi
        
        if (eax != 0)
            int32_t var_14_1 = arg4
            sub_52d7c0(eax, esi[1])
            int32_t var_20_1 = *esi
            sub_6b4d5b()
        
        *esi = 0
        esi[1] = 0
        esi[2] = 0
        *esi = *edi
        esi[1] = edi[1]
        esi[2] = edi[2]
        *edi = 0
        edi[1] = 0
        edi[2] = 0
    
    edi = &edi[4]
    esi = &esi[4]
