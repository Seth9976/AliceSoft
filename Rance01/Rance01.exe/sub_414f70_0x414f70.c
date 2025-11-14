// 函数: sub_414f70
// 地址: 0x414f70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t* esi = arg2
int128_t* ecx = esi[1]
int128_t* edi = *esi

if (edi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx, ebx_1)
    esi[1] = ebx_1 + edi

for (int32_t* i = *(arg3 + 0x18); i != *(arg3 + 0x1c); i = &i[1])
    int32_t edi_2 = *(*i + 0x10)
    int32_t eax_4 = esi[1]
    var_4 = edi_2
    int32_t edx_1
    
    if (&var_4 u< eax_4)
        edx_1 = *esi
    
    if (&var_4 u>= eax_4 || edx_1 u> &var_4)
        int32_t ecx_6 = esi[2]
        
        if (eax_4 == ecx_6)
            int32_t edx_5 = *esi
            int32_t eax_9 = (eax_4 - edx_5) s>> 2
            
            if (eax_9 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_8 = (ecx_6 - edx_5) s>> 2
            
            if (eax_9 + 1 u> ecx_8)
                uint32_t edx_7 = ecx_8 u>> 1
                int32_t ecx_9
                
                if (0x3fffffff - edx_7 u>= ecx_8)
                    ecx_9 = ecx_8 + edx_7
                else
                    ecx_9 = 0
                
                if (ecx_9 u< eax_9 + 1)
                    ecx_9 = eax_9 + 1
                
                sub_6b0560(esi, ecx_9)
        
        arg2 = esi[1]
        
        if (arg2 != 0)
            *arg2 = edi_2
    else
        int32_t ecx_1 = esi[2]
        
        if (eax_4 == ecx_1)
            int32_t eax_6 = (eax_4 - edx_1) s>> 2
            
            if (eax_6 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_3 = (ecx_1 - edx_1) s>> 2
            
            if (eax_6 + 1 u> ecx_3)
                uint32_t edx_3 = ecx_3 u>> 1
                int32_t ecx_4
                
                if (0x3fffffff - edx_3 u>= ecx_3)
                    ecx_4 = ecx_3 + edx_3
                else
                    ecx_4 = 0
                
                if (ecx_4 u< eax_6 + 1)
                    ecx_4 = eax_6 + 1
                
                sub_6b0560(esi, ecx_4)
        
        arg2 = esi[1]
        
        if (arg2 != 0)
            *arg2 = *(*esi + ((&var_4 - edx_1) s>> 2 << 2))
    
    esi[1] += 4
