// 函数: sub_573cc0
// 地址: 0x573cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
bool cond:0 = arg1[1] != 0
int32_t ebx
int32_t var_7c = ebx
int32_t edi
int32_t var_80 = edi
int32_t* esp = &var_80
int32_t* eax

if (cond:0)
    double var_88 = fconvert.d(fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0xc)))))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0_1
    st0_1, x87control_1 = sub_6b4ef0(mxcsr, x87control, var_88)
    int32_t eax_1 = sub_70c710(fconvert.t(fconvert.s(st0_1)))
    int32_t ecx_1 = *(arg3 + 4)
    int32_t var_50_1
    int32_t edi_2
    
    if (eax_1 s>= ecx_1)
        var_50_1 = ecx_1
        edi_2 = ecx_1
    else
        edi_2 = eax_1
        var_50_1 = edi_2
    
    var_88 = fconvert.d(fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x10)))))
    int32_t eax_2 = sub_70c710(fconvert.t(fconvert.s(sub_6b4ef0(mxcsr, x87control_1, var_88))))
    int32_t ecx_2 = *(arg3 + 4)
    
    if (eax_2 s>= ecx_2)
        eax_2 = ecx_2
        int32_t var_48_6 = ecx_2
    else
        int32_t var_48_5 = eax_2
    
    int32_t var_4c_1 = edi_2
    
    if (edi_2 s<= eax_2)
        int32_t var_4c_2 = eax_2
    
    if (eax_2 s<= 0 || eax_2 s<= edi_2)
        void* edi_8 = *arg1[1]
        var_88:4.d = 0
        var_88.d = zx.d(*(arg3 + 0xa))
        var_88:4.d = (*(*arg2 + 0x14))(zx.d(*(arg3 + 8)), zx.d(*(arg3 + 9)), var_88)
        int32_t eax_51 = (*(*arg2 + 0x10))()
        arg1[1]
        var_88:4.d = eax_51
        var_88.d = 0
        int32_t var_8c_10 = 0
        (*(edi_8 + 0x60))(arg2, 0)
        int32_t* eax_52 = &arg1[0x12]
        int32_t var_58
        
        if (var_58 s<= 0)
            eax_52 = &arg1[2]
        
        sub_571270(arg2, eax_52, arg1)
        int32_t eax_53
        eax_53.b = 1
        return eax_53
    
    var_88:4.d = 0
    int32_t var_44_1 = *arg1[1]
    var_88.d = zx.d(*(arg3 + 0x16))
    var_88:4.d = (*(*arg2 + 0x14))(zx.d(*(arg3 + 0x14)), zx.d(*(arg3 + 0x15)), var_88)
    int32_t eax_8 = (*(*arg2 + 0x10))()
    arg1[1]
    var_88:4.d = eax_8
    var_88.d = 0
    int32_t var_8c_2 = 0
    void* var_30
    (*(var_30 + 0x60))(arg2, 0, var_88)
    int32_t ecx_8 = arg1[0x10]
    var_88:4.d = 0x20
    int32_t* var_a0
    int32_t var_9c
    int32_t var_98
    int32_t* var_94
    void* var_40
    void* eax_26
    int32_t* edi_5
    
    if (var_50_1 s<= 0)
        var_88.d = divs.dp.d(sx.q(arg1[0xf]), ecx_8)
        *arg1
        eax = (*(**arg1 + 8))(divs.dp.d(sx.q(arg1[0xe]), ecx_8), var_88)
        esp = &var_88:4
        edi_5 = eax
        
        if (edi_5 != 0)
            var_88.d = arg1
            sub_571270(edi_5, &arg1[2], var_88.d)
            int32_t* eax_36 = arg1[1]
            var_88.d = zx.d(*(arg3 + 0xa))
            int32_t* var_48_8 = eax_36
            int32_t var_50_3 = *eax_36
            var_88.d = (*(*edi_5 + 0x14))(zx.d(*(arg3 + 8)), zx.d(*(arg3 + 9)), var_88)
            var_88.d = (*(*edi_5 + 0x10))(var_88)
            int32_t var_8c_8 = 0
            int32_t var_90_6 = 0
            var_94 = edi_5
            int32_t var_3c
            var_98 = var_3c
            var_9c = var_3c
            var_a0 = arg2
            eax_26 = var_40
        label_573ebb:
            (*(eax_26 + 0x24))(var_a0, var_9c, var_98, var_94, 0)
            (*(*edi_5 + 4))(0)
            sub_571270(arg2, &arg1[0x25], arg1)
            int32_t eax_45
            eax_45.b = 1
            return eax_45
    else
        var_88.d = divs.dp.d(sx.q(arg1[0x1d]), ecx_8)
        *arg1
        eax = (*(**arg1 + 8))(divs.dp.d(sx.q(arg1[0x1c]), ecx_8), var_88)
        esp = &var_88:4
        edi_5 = eax
        
        if (edi_5 != 0)
            var_88.d = arg1
            sub_571270(edi_5, &arg1[0x12], var_88.d)
            var_88.d = zx.d(*(arg3 + 0xa))
            int32_t var_54
            int32_t var_48_7 = var_50_1 - var_54
            int32_t* eax_19 = arg1[1]
            int32_t* var_4c_3 = eax_19
            int32_t var_50_2 = *eax_19
            var_88.d = (*(*edi_5 + 0x14))(zx.d(*(arg3 + 8)), zx.d(*(arg3 + 9)), var_88)
            var_88.d = (*(*edi_5 + 0x10))(var_88)
            int32_t var_8c_5 = 0
            int32_t var_90_4 = 0
            var_94 = edi_5
            int32_t var_38
            var_98 = var_38
            var_9c = var_38
            var_a0 = arg2
            eax_26 = var_40
            goto label_573ebb

eax.b = 0
*esp
esp[1]
return eax
