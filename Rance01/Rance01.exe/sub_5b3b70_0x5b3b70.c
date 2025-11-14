// 函数: sub_5b3b70
// 地址: 0x5b3b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_30c
int32_t eax_1 = data_78c474 ^ &var_30c
var_30c = arg4
int32_t var_2ec = arg1
int32_t var_2e4 = arg1
int32_t (* var_320)() = sub_678ab0
int32_t (* var_31c)(int32_t* arg1) = sub_5b3e90
int32_t var_2e8 = arg2
void var_2e0
int32_t edx

if (sub_5c5bb0(&var_2e0, edx, arg4, &var_2ec, sub_5b3da0, sub_5b3e10) == 0)
    int32_t var_288
    int32_t esi_1
    
    if (var_288 s>= 2)
        esi_1 = 0
    
    int32_t var_2dc
    int32_t var_2ac
    int32_t esi_2
    int32_t edi_2
    
    if (var_288 s< 2 || var_2dc == 0 || var_2ac s<= 0xffffffff)
        edi_2 = 0xffffffff
        esi_2 = 0xffffff7d
    else
        int32_t edi_1 = 0
        int32_t var_304_1 = 0
        
        if (var_2ac s> 0)
            do
                int32_t eax_6
                int32_t edx_1
                eax_6, edx_1 = sub_5c5c40(&var_2e0, esi_1)
                int32_t temp2_1 = edi_1
                edi_1 += eax_6
                var_304_1 = adc.d(var_304_1, edx_1, temp2_1 + eax_6 u< temp2_1)
                esi_1 += 1
            while (esi_1 s< var_2ac)
        
        esi_2 = edi_1
        edi_2 = var_304_1
    
    void* ecx_3
    void* var_298
    int32_t var_280
    
    if (var_2dc == 0 || var_288 s< 3)
        ecx_3 = var_298
    else
        ecx_3 = (var_280 << 5) + var_298
    int32_t eax_7 = *(ecx_3 + 4)
    int32_t edx_2 = *(ecx_3 + 8)
    uint32_t ecx_6 = eax_7 << 4 u>> 3
    uint32_t var_2f0_1 = ecx_6
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(eax_7)
    int32_t var_308_1 = ecx_6 * edx_2
    int32_t eax_9
    int32_t edx_4
    eax_9, edx_4 = __allmul(eax_8, edx_3, esi_2, edi_2)
    int32_t edx_5 = edx_4 << 1 | eax_9 u>> 0xffffffe1
    int32_t esi_4 = eax_9 * 2
    
    if (edx_5 s> 0)
    label_5b3cc5:
        int32_t* edi_4 = var_30c
        
        if ((*(*edi_4 + 8))(esi_4) != 0)
            int16_t* eax_13 = (*(*edi_4 + 0x18))()
            int32_t i = sub_5c6cd0(&var_2e0, eax_13, esi_4, &var_30c)
            
            if (i s> 0)
                void* edi_5 = nullptr
                
                do
                    edi_5 += i
                    i = sub_5c6cd0(&var_2e0, edi_5 + eax_13, esi_4 - edi_5, &var_30c)
                while (i s> 0)
            
            sub_5c5a90(&var_2e0)
            (*(*arg3 + 0x20))(1)
            (*(*arg3 + 0x24))(eax_7)
            (*(*arg3 + 0x28))(edx_2)
            (*(*arg3 + 0x34))(0x10)
            (*(*arg3 + 0x30))(eax_13)
            int32_t ebx
            int32_t var_324_4 = ebx
            (*(*arg3 + 0x2c))()
            int32_t eax_21
            eax_21.b = 1
            int32_t __saved_edi
            int32_t var_18
            sub_6b4885(var_18 ^ &__saved_edi)
            return eax_21
    else if (edx_5 s>= 0 && esi_4 != 0)
        goto label_5b3cc5
    
    sub_5c5a90(&var_2e0)

int32_t eax_4
eax_4.b = 0
sub_6b4885(eax_1 ^ &var_30c)
return eax_4
