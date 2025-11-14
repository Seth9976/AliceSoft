// 函数: sub_427690
// 地址: 0x427690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx

if (arg2 u> 0x18)
    int32_t eax
    eax.b = 0
    return eax

uint32_t eax_23
int32_t mxcsr
int16_t x87control

switch (arg2)
    case 0
        int32_t var_14 = ecx
        int32_t eax_2
        long double st0
        st0, eax_2 = sub_5956c0(fconvert.s(fconvert.t(*arg3)))
        *arg4 = fconvert.s(st0)
        eax_2.b = 1
        return eax_2
    case 1
        int32_t var_14_2 = ecx
        *arg4 = fconvert.s(sub_5956f0(fconvert.s(fconvert.t(*arg3))))
        uint32_t* eax_3
        eax_3.b = 1
        return eax_3
    case 2
        int32_t var_14_4 = ecx
        int32_t eax_4
        long double st0_2
        st0_2, eax_4 = sub_595720(fconvert.s(fconvert.t(*arg3)))
        *arg4 = fconvert.s(st0_2)
        eax_4.b = 1
        return eax_4
    case 3
        int32_t var_14_6 = ecx
        int32_t eax_6
        long double st0_3
        st0_3, eax_6 = sub_4d9250(fconvert.s(fconvert.t(*arg3)))
        *arg4 = fconvert.s(st0_3)
        eax_6.b = 1
        return eax_6
    case 4
        *arg4 = fconvert.s(fconvert.t(fconvert.s(sub_70d330(mxcsr, x87control, fconvert.t(*arg3)))))
        uint32_t* eax_7
        eax_7.b = 1
        return eax_7
    case 5
        int32_t eax_8
        long double st0_5
        st0_5, eax_8 = sub_70d5b0(mxcsr, x87control, fconvert.t(*arg3))
        *arg4 = fconvert.s(fconvert.t(fconvert.s(st0_5)))
        eax_8.b = 1
        return eax_8
    case 6
        int32_t eax_10
        long double st0_6
        st0_6, eax_10 = sub_70d210(mxcsr, x87control, fconvert.t(*arg3))
        *arg4 = fconvert.s(fconvert.t(fconvert.s(st0_6)))
        eax_10.b = 1
        return eax_10
    case 7
        *arg3
        long double x87_r6 = fconvert.t(arg3[1])
        sub_70d6ca()
        *arg4 = fconvert.s(fconvert.t(fconvert.s(x87_r6)))
        int32_t eax_12
        eax_12.b = 1
        return eax_12
    case 8
        float eax_14 = *arg3
        
        if (eax_14 s< 0)
            eax_14 = neg.d(eax_14)
        
        *arg4 = eax_14
        eax_14.b = 1
        return eax_14
    case 9
        int32_t var_14_8 = ecx
        *arg4 = fconvert.s(sub_595780(fconvert.s(fconvert.t(*arg3))))
        uint32_t* eax_15
        eax_15.b = 1
        return eax_15
    case 0xa
        sub_70cce0(mxcsr, x87control, fconvert.t(arg3[1]), fconvert.t(*arg3))
        *arg4 = fconvert.s(fconvert.t(fconvert.s(arg1)))
        int32_t eax_17
        eax_17.b = 1
        return eax_17
    case 0xb
        sub_5952a0(*arg3, data_797d58)
        void* eax_19
        eax_19.b = 1
        return eax_19
    case 0xc
        sub_595850()
        void* eax_20
        eax_20.b = 1
        return eax_20
    case 0xd
        *arg4 = sub_595870()
        uint32_t eax_21
        eax_21.b = 1
        return eax_21
    case 0xe
        int32_t eax_22
        long double st0_8
        st0_8, eax_22 = sub_5958a0()
        *arg4 = fconvert.s(st0_8)
        eax_22.b = 1
        return eax_22
    case 0xf
        eax_23 = arg3[1]
        float ecx_11 = *arg3
        
        if (ecx_11 s< eax_23)
            eax_23 = ecx_11
        
    label_427846:
        *arg4 = eax_23
        eax_23.b = 1
        return eax_23
    case 0x10
        int32_t eax_25
        long double st0_9
        st0_9, eax_25 = sub_595900(fconvert.s(fconvert.t(*arg3)), fconvert.s(fconvert.t(arg3[1])))
        *arg4 = fconvert.s(st0_9)
        eax_25.b = 1
        return eax_25
    case 0x11
        eax_23 = arg3[1]
        float ecx_14 = *arg3
        
        if (ecx_14 s<= eax_23)
            goto label_427846
        
        *arg4 = ecx_14
        uint32_t eax_26
        eax_26.b = 1
        return eax_26
    case 0x12
        int32_t eax_28
        long double st0_10
        st0_10, eax_28 = sub_595940(fconvert.s(fconvert.t(*arg3)), fconvert.s(fconvert.t(arg3[1])))
        *arg4 = fconvert.s(st0_10)
        eax_28.b = 1
        return eax_28
    case 0x13
        int32_t* eax_29 = arg3[1]
        float ecx_17 = *arg3
        int32_t edx_10 = *ecx_17
        *ecx_17 = *eax_29
        *eax_29 = edx_10
        eax_29.b = 1
        return eax_29
    case 0x14
        float* eax_30 = arg3[1]
        float ecx_19 = *arg3
        float var_c_6 = fconvert.s(fconvert.t(*ecx_19))
        *ecx_19 = fconvert.s(fconvert.t(*eax_30))
        *eax_30 = fconvert.s(fconvert.t(var_c_6))
        eax_30.b = 1
        return eax_30
    case 0x15
        int32_t eax_32
        long double st0_11
        st0_11, eax_32 = sub_70cf70(mxcsr, x87control, fconvert.t(*arg3))
        *arg4 = fconvert.s(fconvert.t(fconvert.s(st0_11)))
        eax_32.b = 1
        return eax_32
    case 0x16
        *arg4 = fconvert.s(fconvert.t(fconvert.s(sub_70c800(mxcsr, x87control, fconvert.t(*arg3)))))
        uint32_t* eax_33
        eax_33.b = 1
        return eax_33
    case 0x17
        int32_t var_14_13 = ecx
        *arg4 = sub_5959f0(fconvert.s(fconvert.t(*arg3)))
        int32_t eax_34
        eax_34.b = 1
        return eax_34
    case 0x18
        int32_t* eax_35 = arg3
        int32_t* ecx_22 = eax_35[5]
        int32_t* var_1c = ecx_22
        *arg4 = zx.d(sub_595b30(*eax_35, eax_35[1], eax_35[2], fconvert.s(fconvert.t(eax_35[3])), 
            eax_35[4], ecx_22))
        return 1
