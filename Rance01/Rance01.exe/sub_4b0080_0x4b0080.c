// 函数: sub_4b0080
// 地址: 0x4b0080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = data_797d4c

if (arg1 s>= 0 && arg1 s< (*(edi + 0x44) - *(edi + 0x40)) s>> 2)
    void* ebx_1 = *(*(edi + 0x40) + (arg1 << 2))
    
    if (ebx_1 != 0)
        int32_t ebp = *(ebx_1 + 0x158)
        
        if (arg2 s<= 0)
            sub_504fa0(ebx_1 + 0x10, arg2)
            sub_4b0160(edi)
        else
            if (sub_4aff30(edi) == 0)
                sub_51ddc0(0x7568a0)
                enum MESSAGEBOX_RESULT eax_2
                eax_2.b = 1
                return eax_2
            
            sub_504fa0(ebx_1 + 0x10, arg2)
            
            if (ebp s<= 0)
                sub_4b0120(edi)
                void* eax_5
                eax_5.b = 1
                return eax_5
        
        void* eax_4
        eax_4.b = 1
        return eax_4

arg1.b = 0
return arg1
