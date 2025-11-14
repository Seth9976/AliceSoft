// 函数: sub_56a290
// 地址: 0x56a290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edi = *(arg1 + 0x1ec)

if (edi != 0)
    sub_4258c0(arg2, edi)

if (*(arg1 + 0x2a1) != 0 && GetForegroundWindow() == arg2)
    uint32_t ebx_1 = arg3 u>> 0x10
    
    if (ebx_1 != 0)
        *(arg1 + 0x384) = 0
    else
        if (*(arg1 + 0x384) == ebx_1.b)
            *(arg1 + 0x384) = 1
            uint32_t eax_7 = timeGetTime()
            uint32_t ecx_4 = data_797e3c
            
            if (eax_7 u< ecx_4)
                eax_7 = ecx_4
            
            *(arg1 + 0x388) = eax_7
            data_797e3c = eax_7
            return 0
        
        uint32_t eax_2 = timeGetTime()
        uint32_t ecx_1 = data_797e3c
        
        if (eax_2 u< ecx_1)
            eax_2 = ecx_1
        
        data_797e3c = eax_2
        
        if (eax_2 - *(arg1 + 0x388) u>= *(arg1 + 0x38c))
            HICON eax_5 = LoadIconA(*(arg1 + 0x98), 0x66)
            sub_562ec0(arg2, arg1 + 0x2a4, arg1, *(arg1 + 0x394), eax_5)

return 0
