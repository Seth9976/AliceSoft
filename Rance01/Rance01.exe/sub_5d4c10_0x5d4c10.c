// 函数: sub_5d4c10
// 地址: 0x5d4c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

CRITICAL_SECTION* lpCriticalSection_1 = arg1[0x17]
int32_t var_1c = 0
EnterCriticalSection(lpCriticalSection_1)
int32_t* eax = arg1[6]

if (eax != 0)
    (*(*eax + 0x18))(eax, &var_1c)

LeaveCriticalSection(arg1[0x17])
int32_t eax_2 = sub_70c710(float.t(var_1c) / fconvert.t(2000.0) * fconvert.t(-100.0))
int32_t ebx = 0x64 - eax_2
int32_t var_20 = ebx

if (0x64 - eax_2 s< 0)
    ebx = 0
    var_20 = ebx
else if (ebx s> 0x64)
    ebx = 0x64
    var_20 = ebx

int32_t edi = arg1[0xd]
int32_t* ecx_3 = data_797d98
int32_t edi_1 = edi - ebx
int32_t var_c = edi_1
int32_t* var_18

if (ecx_3 != 0)
    var_18 = (**ecx_3)()
    goto label_5d4ca6

var_18 = ecx_3

while (true)
    HANDLE hHandle = arg1[0x16]
    
    if (hHandle == 0)
        goto label_5d4cd0
    
    if (WaitForSingleObject(hHandle, 0) == WAIT_OBJECT_0)
    label_5d4e3b:
        EnterCriticalSection(arg1[0x17])
        CRITICAL_SECTION* lpCriticalSection
        
        if (arg1[6] != 0)
            int32_t* edi_5 = arg1[6]
            arg1[3] = edi
            (*(*edi_5 + 0x3c))(edi_5, sub_5d5350(edi))
            lpCriticalSection = arg1[0x17]
        else
            lpCriticalSection = arg1[0x17]
        
        LeaveCriticalSection(lpCriticalSection)
        
        if (arg1[0xe].b != 0)
            (*(*arg1 + 0x18))()
        
        int32_t result
        result.b = 1
        return result
    
    ecx_3 = data_797d98
label_5d4cd0:
    int32_t eax_6
    
    if (ecx_3 != 0)
        eax_6 = (**ecx_3)()
    else
        eax_6 = 0
    
    void* eax_8 = eax_6 - var_18
    int32_t ecx_4 = arg1[0xc]
    
    if (eax_8 u>= ecx_4)
        goto label_5d4e3b
    
    int32_t mxcsr
    int16_t x87control
    
    if (edi_1 == 0 || ecx_4 == 0)
        EnterCriticalSection(arg1[0x17])
        
        if (arg1[6] != 0)
            arg1[3] = ebx
            long double x87_r7_11
            
            if (ebx s< 0)
                x87_r7_11 = fconvert.t(-100.0)
            else
                long double st0_2
                
                if (ebx s> 0x64)
                    st0_2, x87control =
                        sub_70c800(mxcsr, x87control, float.t(0x64) / fconvert.t(100.0))
                    x87_r7_11 = st0_2 * fconvert.t(20.0)
                else if (ebx != 0)
                    st0_2, x87control =
                        sub_70c800(mxcsr, x87control, float.t(ebx) / fconvert.t(100.0))
                    x87_r7_11 = st0_2 * fconvert.t(20.0)
                else
                    x87_r7_11 = fconvert.t(-100.0)
            
            int32_t* edi_4 = arg1[6]
            (*(*edi_4 + 0x3c))(edi_4, sub_70c710(x87_r7_11 * fconvert.t(100.0)))
            LeaveCriticalSection(arg1[0x17])
            ebx = var_20
            Sleep(0x1e)
            edi_1 = var_c
        else
            LeaveCriticalSection(arg1[0x17])
            Sleep(0x1e)
            edi_1 = var_c
    else
        int32_t edi_2 = ebx + divs.dp.d(sx.q(eax_8 * edi_1), ecx_4)
        EnterCriticalSection(arg1[0x17])
        
        if (arg1[6] != 0)
            arg1[3] = edi_2
            long double x87_r7_6
            
            if (edi_2 s< 0)
                x87_r7_6 = fconvert.t(-100.0)
            else
                long double st0_1
                
                if (edi_2 s> 0x64)
                    st0_1, x87control =
                        sub_70c800(mxcsr, x87control, float.t(0x64) / fconvert.t(100.0))
                    x87_r7_6 = st0_1 * fconvert.t(20.0)
                else if (edi_2 != 0)
                    st0_1, x87control =
                        sub_70c800(mxcsr, x87control, float.t(edi_2) / fconvert.t(100.0))
                    x87_r7_6 = st0_1 * fconvert.t(20.0)
                else
                    x87_r7_6 = fconvert.t(-100.0)
            
            void* edi_3 = *arg1[6]
            int32_t eax_13 = sub_70c710(x87_r7_6 * fconvert.t(100.0))
            (*(edi_3 + 0x3c))(arg1[6], eax_13)
            LeaveCriticalSection(arg1[0x17])
            Sleep(0x1e)
            edi_1 = var_c
        else
            LeaveCriticalSection(arg1[0x17])
            Sleep(0x1e)
            edi_1 = var_c
label_5d4ca6:
    ecx_3 = data_797d98
