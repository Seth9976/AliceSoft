// 函数: sub_6ce5aa
// 地址: 0x6ce5aa
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esp = arg1[-6]
arg1[-0x66] = 0xffffffff
arg1[-1] = 0xffffffff

if (*(arg1[2] + 0x37e0) != 0)
    arg1[-0x65] = 0
    
    if (arg1[-0x6a] s> 0)
        bool cond:0_1
        
        do
            int32_t esi_1 = *(arg1[-0x65] * 0x38 + *(arg1[2] + 0x37e0) + 0x34)
            *(esp - 4) = esp
            *(esp - 8) = esi_1
            sub_6b4d5b()
            int32_t esi_3 = arg1[-0x65] + 1
            *(arg1[-0x65] * 0x38 + *(arg1[2] + 0x37e0) + 0x34) = 0
            cond:0_1 = esi_3 s< arg1[-0x6a]
            arg1[-0x65] = esi_3
        while (cond:0_1)
    
    int32_t edx_3 = *(arg1[2] + 0x37e0)
    *(esp - 4) = esp
    *(esp - 8) = edx_3
    sub_6b4d5b()
    *(arg1[2] + 0x37e0) = 0

arg1[-0xf]
arg1[-0x10]
arg1[-0xe]
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
return arg1[-0x66]
