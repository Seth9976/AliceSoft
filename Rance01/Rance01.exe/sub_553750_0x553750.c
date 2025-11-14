// 函数: sub_553750
// 地址: 0x553750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sub_5527e0(arg1)
*(*(arg1 + 8) + (eax << 2)) = sub_552550(arg1 + 0x20)
int32_t* eax_3

if (eax != 0xffffffff)
    eax_3 = *(arg1 + 8)
    
    if (eax u< (*(arg1 + 0xc) - eax_3) s>> 2)
        eax_3 = eax_3[eax]
        int32_t* var_c_1 = eax_3
        
        if (eax_3 != 0)
            void* ecx_3 = *(arg1 + 4)
            int32_t eax_4
            int32_t edx_4
            edx_4:eax_4 = muls.dp.d(0x78787879, *(ecx_3 + 0xec) - *(ecx_3 + 0xe8))
            int32_t edx_5 = edx_4 s>> 5
            
            if (arg2 u< (edx_5 u>> 0x1f) + edx_5)
                void* edx_9 = &(*(ecx_3 + 0xe8))[arg2 * 0x11]
                
                if (edx_9 != 0)
                    int32_t ebx_1 = *(edx_9 + 0x2c)
                    
                    if (sub_54fda0(var_c_1, edx_9 + 0x34, *(ecx_3 + 0x1b0) + arg2, arg4).b != 0)
                        if (arg4.b == 0 || ebx_1 == 0xffffffff)
                        label_55383d:
                            *arg3 = eax
                            int32_t* eax_9
                            eax_9.b = 1
                            return eax_9
                        
                        if (sub_53fda0(*(arg1 + 4), arg1, var_c_1, eax, ebx_1, nullptr).b != 0)
                            goto label_55383d

eax_3.b = 0
return eax_3
