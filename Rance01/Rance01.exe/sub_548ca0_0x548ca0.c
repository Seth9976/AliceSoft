// 函数: sub_548ca0
// 地址: 0x548ca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg1[0xa3]
int32_t eax = *ecx
arg1[0xa3] = &ecx[1]

if (eax u> 0x1c)
    int32_t var_8_14 = eax
    int32_t edx
    return sub_53d1c0(eax, edx, arg1, 0x7504dc)

int32_t* dwMilliseconds

switch (eax)
    case 0
        sub_54b7c0(arg1)
        int32_t eax_1
        eax_1.b = 1
        return eax_1
    case 1
        sub_54b800(arg1)
        int32_t eax_2
        eax_2.b = 1
        return eax_2
    case 2
        sub_54bc20(arg1)
        int32_t eax_3
        eax_3.b = 1
        return eax_3
    case 3
        int32_t eax_5 = arg1[0x8f] + 1
        arg1[0x8f] = eax_5
        *arg1[0xac] = eax_5
        arg1[0xac] += 4
        eax_5.b = 1
        return eax_5
    case 4
        int32_t temp0 = arg1[0x8f]
        arg1[0x8f] -= 1
        
        if (temp0 - 1 s< 0)
            arg1[0x8f] = 0
        
        *arg1[0xac] = arg1[0x8f]
        arg1[0xac] += 4
        int32_t eax_6
        eax_6.b = 1
        return eax_6
    case 5
        sub_548f10(arg1)
        int32_t eax_7
        eax_7.b = 1
        return eax_7
    case 6
        sub_548f60(arg1)
        int32_t eax_8
        eax_8.b = 1
        return eax_8
    case 7
        sub_548fe0(arg1)
        int32_t* eax_9
        eax_9.b = 1
        return eax_9
    case 8
        sub_549120(arg1)
        int32_t eax_10
        eax_10.b = 1
        return eax_10
    case 9
        sub_5494a0(arg1)
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    case 0xa
        sub_5497e0(arg1)
        HANDLE eax_12
        eax_12.b = 1
        return eax_12
    case 0xb
        sub_549ec0(arg1)
        int32_t* eax_13
        eax_13.b = 1
        return eax_13
    case 0xc
        sub_549fa0(arg1)
        void** eax_14
        eax_14.b = 1
        return eax_14
    case 0xd
        *arg1[0xac] = (**arg1[0xf])()
        arg1[0xac] += 4
        int32_t eax_16
        eax_16.b = 1
        return eax_16
    case 0xe
        sub_54a190(arg1)
        int32_t* eax_17
        eax_17.b = 1
        return eax_17
    case 0xf
        sub_54a290(arg1)
        int32_t* eax_18
        eax_18.b = 1
        return eax_18
    case 0x10
        sub_5498f0(arg1)
        int32_t eax_19
        eax_19.b = 1
        return eax_19
    case 0x11
        int32_t ecx_7
        ecx_7.b = (*arg1[1])() != 0
        *arg1[0xac] = ecx_7
        arg1[0xac] += 4
        int32_t eax_22
        eax_22.b = 1
        return eax_22
    case 0x12
        sub_549050(arg1)
        int32_t* eax_23
        eax_23.b = 1
        return eax_23
    case 0x13
        sub_54a840(arg1)
        int32_t* eax_24
        eax_24.b = 1
        return eax_24
    case 0x14
        sub_54a920(arg1)
        int32_t eax_26
        eax_26.b = 1
        return eax_26
    case 0x15
        arg1[0xac] -= 4
        dwMilliseconds = *arg1[0xac]
        
        if (dwMilliseconds s< 0)
            dwMilliseconds.b = 1
            return dwMilliseconds
        
        Sleep(dwMilliseconds)
        int32_t eax_27
        eax_27.b = 1
        return eax_27
    case 0x16
        int32_t edx_5
        dwMilliseconds, edx_5 = sub_54aa00(arg1)
        
        if (dwMilliseconds.b == 0)
            return sub_53d1c0(dwMilliseconds, edx_5, arg1, "system.ResumeWriteComment")
        
        dwMilliseconds.b = 1
        return dwMilliseconds
    case 0x17
        int32_t edx_6
        dwMilliseconds, edx_6 = sub_54afb0(arg1)
        
        if (dwMilliseconds.b == 0)
            return sub_53d1c0(dwMilliseconds, edx_6, arg1, "system.ResumeReadComment")
        
        dwMilliseconds.b = 1
        return dwMilliseconds
    case 0x18
        int32_t edi
        sub_54bfd0(arg1, arg1, edi)
        int32_t eax_30
        eax_30.b = 1
        return eax_30
    case 0x19
        sub_54c460(arg1)
        int32_t eax_31
        eax_31.b = 1
        return eax_31
    case 0x1a
        sub_549a50(arg1)
        int32_t eax_32
        eax_32.b = 1
        return eax_32
    case 0x1b
        sub_549bb0(arg1)
        int32_t eax_33
        eax_33.b = 1
        return eax_33
    case 0x1c
        sub_549ca0(arg1)
        dwMilliseconds.b = 1
        return dwMilliseconds
