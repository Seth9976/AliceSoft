// 函数: sub_53b170
// 地址: 0x53b170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, *(arg1 + 0xbc) - *(arg1 + 0xb8))
int32_t edx_1 = edx s>> 5
int32_t esi = *(arg1 + 0x1a0)
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1

if (esi u< eax_3)
    int32_t ebp_2 = esi * 0x4c
    int32_t* ebp_3 = ebp_2 + *(arg1 + 0xb8)
    
    if (ebp_2 != neg.d(*(arg1 + 0xb8)))
        int32_t ebx = ebp_3[0xa]
        
        if (ebx s> 0)
            int32_t* var_14 = nullptr
            int32_t var_10_1 = 0
            int32_t var_c_1 = 0
            sub_65a090(&var_14, ebx)
            int32_t* esi_2 = var_14
            void* edx_2 = &esi_2[ebx]
            int32_t* eax_5 = esi_2
            
            if (esi_2 u< edx_2)
                do
                    *(arg1 + 0x2b0) -= 4
                    *eax_5 = **(arg1 + 0x2b0)
                    eax_5 = &eax_5[1]
                while (eax_5 u< edx_2)
            
            if (esi_2 != 0)
                int32_t* var_28_3 = esi_2
                sub_6b4d5b()
        
        int32_t var_18
        void* eax_8
        int32_t edx_3
        eax_8, edx_3 = sub_552a10(ebp_3, arg1 + 0x1dc, &var_18)
        
        if (eax_8 == 0)
            return sub_53d1c0(eax_8, edx_3, arg1, 0x74ce34)
        
        bool eax_10 = sub_53ada0(arg1, var_18)
        
        if (eax_10 == 0)
            return eax_10
        
        int32_t ebp_4 = *ebp_3
        **(arg1 + 0xebc) = 0
        *(arg1 + 0xebc) += 4
        **(arg1 + 0x6b4) = 0xffffffff
        *(arg1 + 0x6b4) += 4
        *(arg1 + 0x28c) = *(arg1 + 0x290) + ebp_4
        int32_t eax_12
        eax_12.b = 1
        return eax_12

int32_t var_28_1 = esi
return sub_53d1c0(eax_3, edx_1, arg1, 0x74cf34)
