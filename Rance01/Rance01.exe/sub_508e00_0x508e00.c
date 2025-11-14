// 函数: sub_508e00
// 地址: 0x508e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1
int32_t eax

if (esi[0x49].b != 0)
    int32_t* ecx_1 = esi[0x88]
    
    if (ecx_1 == 0)
    label_509027:
        eax.b = 0
        return 
    
    eax = (*(*ecx_1 + 0x14))()
    
    if (eax.b == 0)
        goto label_509027
    
    int32_t* ecx_2 = esi[1]
    int32_t* var_1c8_1 = ecx_2
    (*(*ecx_2 + 0x44))(0, fconvert.s(float.t(1)))
    void* ebp_1 = &esi[0x4b]
    esi[0x2c] = (esi[0x4c] - esi[0x4b]) s>> 2
    int32_t i = 0
    
    if (((*(ebp_1 + 4) - *ebp_1) & 0xfffffffc) s> 0)
        do
            (*(*esi[1] + 0x7c))(i + 2, 0, 0)
            (*(*esi[1] + 0x80))(i + 2, 1)
            
            if (i s< 0)
                goto label_509027
            
            eax = *ebp_1
            
            if (i s>= (*(ebp_1 + 4) - eax) s>> 2)
                goto label_509027
            
            eax = *(eax + (i << 2))
            
            if (eax == 0)
                goto label_509027
            
            eax = (*(**(eax + 8) + 0x24))(i + 2)
            
            if (eax.b == 0)
                goto label_509027
            
            void* esi_1 = *esi
            int32_t eax_11 = (*(esi_1 + 0xac) - *(esi_1 + 0xa8)) s>> 2
            long double x87_r7_2
            
            if (i s< eax_11)
                x87_r7_2 = fconvert.t(*(*(esi_1 + 0xa8) + (i << 2)))
            else
                x87_r7_2 = fconvert.t(*(*(esi_1 + 0xa8) + (eax_11 << 2) - 4))
            
            float var_1ac_1 = fconvert.s(fconvert.t(*(esi_1 + 0x80)))
            float var_1a8
            float* eax_12
            int32_t ecx_12
            eax_12, ecx_12 = sub_51e2a0(esi_1 + 0x58, &var_1a8)
            float var_19c[0x10]
            float var_15c[0x10]
            float var_11c[0x10]
            void var_dc
            sub_50a800(
                sub_519dc0(sub_519e30(sub_519ea0(ecx_12, i, &var_19c, ebp_1), i, &var_11c, ebp_1), 
                    i, &var_15c, ebp_1), 
                eax_12, &var_dc, &var_15c, &var_11c, &var_19c, fconvert.s(fconvert.t(var_1ac_1)), 
                fconvert.s(fconvert.t(fconvert.s(x87_r7_2))))
            sub_50a310(&arg1[2], i, &var_dc)
            esi = arg1
            i += 1
        while (i s< (*(ebp_1 + 4) - *ebp_1) s>> 2)
    
    int32_t* edi_3 = *arg2
    int32_t ebx_1 = esi[1]
    
    if (edi_3 != arg2[1])
        while (true)
            eax = (***edi_3)(5, &esi[2], ebx_1)
            
            if (eax.b == 0)
                sub_51ddc0(0x7545d4)
                break
            
            edi_3 = &edi_3[1]
            
            if (edi_3 == arg2[1])
                goto label_508fc1
        
        goto label_509027
    
label_508fc1:
    int32_t* ecx_19 = esi[0x88]
    int32_t* edi_4 = esi[1]
    
    if (ecx_19 != 0)
        eax = (*(*ecx_19 + 0x18))()
    
    if (ecx_19 != 0 && eax.b == 0)
        goto label_509027
    
    if (esi[0xb0] s> 0)
        int80_t st0_1
        st0_1, eax = sub_4b4150(edi_4, &esi[0x97], esi[0x88], esi[0x89], esi[0x8a])
        
        if (eax.b == 0)
            goto label_509027

eax.b = 1
