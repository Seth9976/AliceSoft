// 函数: sub_5aeb10
// 地址: 0x5aeb10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t ebp = arg3
int32_t eax = *(arg1 + 0x288)

if (eax != 0)
    if (eax == 1)
        return sub_5ab650(arg1, ebp)
    
    *(arg1 + 0x288) = eax - 1
    
    if (eax == 2)
        sub_5a5de0("No space in chunk cache for unknown chunk", arg1)
        return sub_5ab650(arg1, ebp)

int32_t eax_3 = *(arg1 + 0x6c)

if ((eax_3.b & 4) != 0 && arg1[0x10].d != 0x49444154)
    eax_3 |= 8
    *(arg1 + 0x6c) = eax_3

int32_t __saved_ebx_4 = arg1[0x10].d

if ((__saved_ebx_4 & 0x20000000) == 0)
    int32_t __saved_ebx_2 = __saved_ebx_4
    uint32_t eax_4
    void* edx_2
    eax_4, edx_2 = sub_5a48b0(eax_3, arg1, ecx)
    
    if (eax_4 != 3 && *(arg1 + 0x244) == 0)
        int128_t* __saved_ebx_3 = arg1
        sub_5a60e0("unknown critical chunk", edx_2)
        noreturn

if ((arg1[7].d & 0x8000) != 0 || *(arg1 + 0x244) != 0)
    arg1[0x29].b = (__saved_ebx_4 u>> 0x18).b
    uint8_t eax_6 = arg1[0x10].b
    uint32_t ecx_3 = __saved_ebx_4 u>> 0x10
    *(arg1 + 0x291) = ecx_3.b
    *(arg1 + 0x292) = (__saved_ebx_4 u>> 8).b
    *(arg1 + 0x293) = eax_6
    *(arg1 + 0x294) = 0
    *(arg1 + 0x29c) = ebp
    
    if (ebp != 0)
        int32_t eax_7 = sub_5a62f0(ebp, arg1)
        int32_t eax_8 = *(arg1 + 0x54)
        *(arg1 + 0x298) = eax_7
        
        if (eax_8 == 0)
            sub_5a5c60(arg1, "Call to NULL read function")
            noreturn
        
        char* ecx_5
        void* edx_5
        edx_5, ecx_5 = eax_8(arg1, eax_7, ebp)
        int32_t var_24_1 = eax_7
        int128_t* var_28_1 = arg1
        ecx_3 = sub_5a3fe0(ebp, edx_5, ecx_5)
    else
        *(arg1 + 0x298) = ebp
    
    int32_t eax_10 = *(arg1 + 0x244)
    
    if (eax_10 == 0)
        uint32_t var_1c_4 = arg2
        sub_5b0b00(arg1, arg2, ecx_3)
    else
        int32_t eax_11
        int32_t ecx_6
        uint32_t edx_6
        eax_11, edx_6, ecx_6 = eax_10(arg1, &arg1[0x29])
        
        if (eax_11 s< 0)
            int128_t* var_18_3 = arg1
            sub_5a60e0("error in user chunk", edx_6)
            noreturn
        
        if (eax_11 == 0)
            int32_t eax_12 = arg1[0x10].d
            
            if ((eax_12 & 0x20000000) == 0)
                int32_t var_18_4 = eax_12
                uint32_t eax_13
                eax_13, edx_6 = sub_5a48b0(eax_12, arg1, ecx_6)
                
                if (eax_13 != 3)
                    int128_t* var_18_5 = arg1
                    sub_5a60e0("unknown critical chunk", edx_6)
                    noreturn
            
            void* var_18_6 = &arg1[0x29]
            uint32_t var_1c_3 = arg2
            sub_5b0b00(arg1, edx_6, arg2)
    
    int32_t ecx_7 = *(arg1 + 0x298)
    
    if (ecx_7 != 0)
        int32_t eax_15 = *(arg1 + 0x268)
        
        if (eax_15 == 0)
            __free_base(ecx_7)
        else
            eax_15(arg1, ecx_7)
    
    ebp = 0
    *(arg1 + 0x298) = 0

return sub_5ab650(arg1, ebp)
