// 函数: sub_61b000
// 地址: 0x61b000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
LRESULT result = ebx[0xb] - ebx[0xa]
int32_t* esi = arg2
int32_t i = 0
int32_t* var_8 = ebx

if ((result & 0xfffffffc) s> 0)
    do
        *(ebx[0xa] + (i << 2))
        result = sub_61b000(esi)
        void* edi_1 = *(ebx[0xa] + (i << 2))
        
        if (edi_1 != 0)
            int32_t eax_1 = *(edi_1 + 0x38)
            
            if (eax_1 != 0)
                int32_t var_1c_2 = eax_1
                sub_6b4d5b()
            
            *(edi_1 + 0x38) = 0
            *(edi_1 + 0x3c) = 0
            *(edi_1 + 0x40) = 0
            int32_t eax_2 = *(edi_1 + 0x28)
            
            if (eax_2 != 0)
                int32_t var_1c_3 = eax_2
                sub_6b4d5b()
            
            *(edi_1 + 0x28) = 0
            *(edi_1 + 0x2c) = 0
            *(edi_1 + 0x30) = 0
            
            if (*(edi_1 + 0x20) u>= 0x10)
                int32_t var_1c_4 = *(edi_1 + 0xc)
                sub_6b4d5b()
            
            *(edi_1 + 0x20) = 0xf
            *(edi_1 + 0x1c) = 0
            void* var_1c_5 = edi_1
            *(edi_1 + 0xc) = 0
            result = sub_6b4d5b()
        
        i += 1
    while (i s< (ebx[0xb] - ebx[0xa]) s>> 2)

int32_t* i_1 = nullptr
arg2 = nullptr

if (((ebx[0xf] - ebx[0xe]) & 0xfffffffc) s> 0)
    do
        int32_t* ebp = *(ebx[0xe] + (i_1 << 2))
        
        if (ebp[1] != 0)
            int32_t eax_5 = esi[1]
            int32_t edx_4
            
            if (&ebp[1] u< eax_5)
                edx_4 = *esi
            
            if (&ebp[1] u>= eax_5 || edx_4 u> &ebp[1])
                int32_t ecx_10 = esi[2]
                
                if (eax_5 == ecx_10)
                    int32_t edx_8 = *esi
                    int32_t eax_11 = (eax_5 - edx_8) s>> 2
                    
                    if (eax_11 u> 0x3ffffffe)
                        goto label_61b228
                    
                    int32_t ecx_12 = (ecx_10 - edx_8) s>> 2
                    
                    if (eax_11 + 1 u> ecx_12)
                        uint32_t edx_10 = ecx_12 u>> 1
                        int32_t ecx_13
                        
                        if (0x3fffffff - edx_10 u>= ecx_12)
                            ecx_13 = ecx_12 + edx_10
                        else
                            ecx_13 = 0
                        
                        if (ecx_13 u< eax_11 + 1)
                            ecx_13 = eax_11 + 1
                        
                        sub_6b0560(esi, ecx_13)
                        i_1 = arg2
                
                int32_t* eax_13 = esi[1]
                
                if (eax_13 != 0)
                    *eax_13 = ebp[1]
            else
                int32_t ecx_5 = esi[2]
                
                if (eax_5 == ecx_5)
                    int32_t eax_7 = (eax_5 - edx_4) s>> 2
                    
                    if (eax_7 u> 0x3ffffffe)
                        goto label_61b228
                    
                    int32_t ecx_7 = (ecx_5 - edx_4) s>> 2
                    
                    if (eax_7 + 1 u> ecx_7)
                        uint32_t edx_6 = ecx_7 u>> 1
                        int32_t ecx_8
                        
                        if (0x3fffffff - edx_6 u>= ecx_7)
                            ecx_8 = ecx_7 + edx_6
                        else
                            ecx_8 = 0
                        
                        if (ecx_8 u< eax_7 + 1)
                            ecx_8 = eax_7 + 1
                        
                        sub_6b0560(esi, ecx_8)
                        ebx = var_8
                
                int32_t* eax_9 = esi[1]
                
                if (eax_9 != 0)
                    *eax_9 = *(*esi + ((&ebp[1] - edx_4) s>> 2 << 2))
                
                i_1 = arg2
            
            esi[1] += 4
            SendMessageA(*ebp, 0x1101, 0, ebp[1])
            ebp[1] = 0
        
        int32_t var_1c_9 = *(ebx[0xe] + (i_1 << 2))
        result = sub_6b4d5b()
        i_1 += 1
        arg2 = i_1
    while (i_1 s< (ebx[0xf] - ebx[0xe]) s>> 2)

if (ebx[1] != 0)
    int32_t eax_16 = esi[1]
    int32_t edx_13
    
    if (&ebx[1] u< eax_16)
        edx_13 = *esi
    
    if (&ebx[1] u>= eax_16 || edx_13 u> &ebx[1])
        int32_t ecx_24 = esi[2]
        
        if (eax_16 == ecx_24)
            int32_t edx_17 = *esi
            int32_t eax_22 = (eax_16 - edx_17) s>> 2
            
            if (eax_22 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_26 = (ecx_24 - edx_17) s>> 2
            
            if (eax_22 + 1 u> ecx_26)
                uint32_t edx_19 = ecx_26 u>> 1
                int32_t ecx_27
                
                if (0x3fffffff - edx_19 u>= ecx_26)
                    ecx_27 = ecx_26 + edx_19
                else
                    ecx_27 = 0
                
                if (ecx_27 u< eax_22 + 1)
                    ecx_27 = eax_22 + 1
                
                sub_6b0560(esi, ecx_27)
        
        int32_t* eax_24 = esi[1]
        
        if (eax_24 != 0)
            *eax_24 = ebx[1]
    else
        int32_t ecx_19 = esi[2]
        
        if (eax_16 == ecx_19)
            int32_t eax_18 = (eax_16 - edx_13) s>> 2
            
            if (eax_18 u> 0x3ffffffe)
            label_61b228:
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_21 = (ecx_19 - edx_13) s>> 2
            
            if (eax_18 + 1 u> ecx_21)
                uint32_t edx_15 = ecx_21 u>> 1
                int32_t ecx_22
                
                if (0x3fffffff - edx_15 u>= ecx_21)
                    ecx_22 = ecx_21 + edx_15
                else
                    ecx_22 = 0
                
                if (ecx_22 u< eax_18 + 1)
                    ecx_22 = eax_18 + 1
                
                sub_6b0560(esi, ecx_22)
        
        int32_t* eax_20 = esi[1]
        
        if (eax_20 != 0)
            *eax_20 = *(*esi + ((&ebx[1] - edx_13) s>> 2 << 2))
    
    esi[1] += 4
    result = SendMessageA(*ebx, 0x1101, 0, ebx[1])
    ebx[1] = 0

int128_t* ecx_29 = ebx[0xb]
int128_t* esi_1 = ebx[0xa]

if (esi_1 != ecx_29)
    int32_t edi_9 = 0 s>> 2 << 2
    result = sub_6b49d0(esi_1, ecx_29, edi_9)
    ebx[0xb] = edi_9 + esi_1

int128_t* ecx_30 = ebx[0xf]
int128_t* esi_2 = ebx[0xe]

if (esi_2 != ecx_30)
    void* edi_11 = 0 s>> 2 << 2
    result = sub_6b49d0(esi_2, ecx_30, edi_11)
    ebx[0xf] = edi_11 + esi_2

return result
