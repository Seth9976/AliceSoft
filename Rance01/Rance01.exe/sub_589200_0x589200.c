// 函数: sub_589200
// 地址: 0x589200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_esi
int32_t* esp = &__saved_esi
int32_t* eax
int32_t esi_1

switch (arg2)
    case nullptr
        eax.b = 1
        return eax
    case 1
        esi_1 = 2
    label_589231:
        eax = *(arg1 + 0x1c)
        
        if (*eax != 0)
            arg2 = nullptr
            int32_t* eax_1 = *eax
            void* ecx = *eax_1
            int32_t* var_8 = &arg2
            esp = &__saved_esi
            
            if ((*(ecx + 0x18))(eax_1, var_8) s>= 0)
                int32_t* eax_3 = arg2
                int32_t edx_1 = *(*eax_3 + 0x2c)
                var_8 = nullptr
                bool cond:0_1 = edx_1(eax_3, 0, 1, 0x16, 1, esi_1, var_8) s>= 0
                int32_t* eax_5 = arg2
                int32_t edx_2 = *(*eax_5 + 8)
                var_8 = eax_5
                esp = &var_8
                
                if (cond:0_1)
                    edx_2()
                    int32_t eax_6
                    eax_6.b = 1
                    return eax_6
                
                edx_2()
    case 2
        esi_1 = 4
        goto label_589231
    case 3
        esi_1 = 8
        goto label_589231
    case 4
        esi_1 = 0x10
        goto label_589231

eax.b = 0
*esp
return eax
