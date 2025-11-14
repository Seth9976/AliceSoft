// 函数: sub_589110
// 地址: 0x589110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_8 = arg2
int32_t __saved_esi
int32_t* esp = &__saved_esi
int32_t* eax_2
int32_t* esi_1

if (eax_8 == 1)
    esi_1 = 0x15
label_58912f:
    eax_2 = *(arg1 + 0x1c)
    
    if (*eax_2 != 0)
        arg2 = nullptr
        int32_t* eax_3 = *eax_2
        void* ecx = *eax_3
        int32_t* var_8 = &arg2
        esp = &__saved_esi
        
        if ((*(ecx + 0x18))(eax_3, var_8) s>= 0)
            eax_2 = arg2
            
            if (eax_2 != 0)
                int32_t edx_1 = *(*eax_2 + 0x28)
                var_8 = esi_1
                bool cond:1_1 = edx_1(eax_2, 0, 1, 0x16, 1, 3, var_8) == 0
                int32_t* eax_6 = arg2
                int32_t edx_2 = *(*eax_6 + 8)
                var_8 = eax_6
                esp = &var_8
                
                if (cond:1_1)
                    edx_2()
                    int32_t eax_7
                    eax_7.b = 1
                    return eax_7
                
                edx_2()
else
    if (eax_8 == 2)
        esi_1 = 0x71
        goto label_58912f
    
    if (eax_8 == 3)
        esi_1 = eax_8 + 0x6f
        goto label_58912f
eax_2.b = 0
*esp
return eax_2
