// 函数: sub_570c50
// 地址: 0x570c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 =
    sub_6b4ef0(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.s(fconvert.t(*(arg4 + 0xc))))))
int32_t eax = sub_70c710(fconvert.t(fconvert.s(st0)))
int16_t x87control_2
long double st0_1
st0_1, x87control_2 =
    sub_6b4ef0(mxcsr, x87control_1, fconvert.d(fconvert.t(fconvert.s(fconvert.t(*(arg4 + 0x10))))))
int32_t eax_1 = sub_70c710(fconvert.t(fconvert.s(st0_1)))

if (eax s> eax_1)
    eax_1 = eax

int32_t* esi_1 = arg1
int32_t eax_2 = eax_1 * 2
int32_t ebx_1 = arg3 - eax_2
double var_88_1
var_88_1:4.d = ebx_1
int32_t edi_2 = arg2 - eax_2
var_88_1.d = edi_2

if (sub_570df0(esi_1, var_88_1) != 0 && sub_570f80(esi_1) != 0)
    double var_88_2
    var_88_2:4.d = sub_70c710(fconvert.t(fconvert.s(sub_6b4ef0(mxcsr, x87control_2, 
        fconvert.d(fconvert.t(fconvert.s(fconvert.t(*(arg4 + 0xc)))))))))
    var_88_2.d = ebx_1
    
    if (sub_572b40(&esi_1[0x12], edi_2, &esi_1[0x12], var_88_2) != 0)
        if (sub_5713e0(arg4) s<= 0)
            goto label_570d5c
        
        float var_48_6 = fconvert.s(fconvert.t(*(arg4 + 0xc)))
        var_88_2:4.d = sub_5713e0(arg4)
        var_88_2:4.d = fconvert.s(fconvert.t(var_48_6))
        var_88_2.d = &esi_1[2]
        char eax_13
        eax_13, edi_2 = sub_572c00(&esi_1[0x12], edi_2, var_88_2)
        
        if (eax_13 != 0)
            esi_1 = arg1
        label_570d5c:
            int32_t eax_15
            int32_t ecx_3
            eax_15, ecx_3 = sub_571420(arg4)
            var_88_2:4.d = eax_15
            var_88_2.d = ebx_1
            
            if (sub_572b40(ecx_3, edi_2, &esi_1[0x25], var_88_2) != 0)
                if (sub_571420(arg4) s<= 0)
                    goto label_570db6
                
                float var_44_2 = fconvert.s(fconvert.t(*(arg4 + 0x10)))
                var_88_2:4.d = sub_571420(arg4)
                var_88_2:4.d = fconvert.s(fconvert.t(var_44_2))
                var_88_2.d = &esi_1[2]
                
                if (sub_572c00(&esi_1[0x25], &esi_1[0x25], var_88_2) != 0)
                    esi_1 = arg1
                label_570db6:
                    var_88_2:4.d = 0x20
                    var_88_2.d = arg3
                    int32_t* result = (*(**esi_1 + 8))(arg2, var_88_2)
                    
                    if (result != 0)
                        var_88_2:4.d = arg4
                        var_88_2.d = result
                        
                        if (sub_571010(esi_1, var_88_2) != 0)
                            return result
                        
                        (*(*result + 4))()

return 0
