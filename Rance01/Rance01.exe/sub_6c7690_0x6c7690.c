// 函数: sub_6c7690
// 地址: 0x6c7690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79a024
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t* var_1c = &result
result = 0
int32_t var_8_1 = 0
void* eax_1 = arg1 + 0x58
void* var_38 = eax_1
HANDLE edx_1 = *(arg1 + 0x387c)

if (edx_1 == 0)
    goto label_6c7706

int32_t* var_40_1 = &result

if (sub_6ca7c0(edx_1) != 0)
    eax_1 = var_38
    *(eax_1 + 0x3824) = 0
label_6c7706:
    *(eax_1 + 0x36e4) = 0
    *(eax_1 + 0x36e8) = 0
    *(eax_1 + 0x36ec) = 0
    *(eax_1 + 0x36f0) = 0
    int32_t var_34_1 = 4
    
    if (*(eax_1 + 0x37c0) s<= 0xff)
        int32_t edx_2 = *(eax_1 + 0x37cc)
        
        if (edx_2 != 0)
            int32_t* var_40_2 = &result
            int32_t var_44_2 = edx_2
            sub_6b4d5b()
            eax_1 = var_38
            *(eax_1 + 0x37cc) = 0
            *(eax_1 + 0x37c0) = 0
        
        int32_t edx_3 = *(eax_1 + 0x4de4)
        
        if (edx_3 != 0)
            int32_t* var_40_3 = &result
            int32_t var_44_3 = edx_3
            sub_6b4d5b()
            eax_1 = var_38
            *(eax_1 + 0x4de4) = 0
        
        if (*(eax_1 + 0x4de8) == 1)
            int32_t* ecx_3 = *(eax_1 + 0x4dec)
            
            if (ecx_3 != 0)
                int32_t edx_11 = ecx_3[1]
                int32_t ebx_1 = *ecx_3
                
                if (ebx_1 s> edx_11)
                    *ecx_3 = edx_11
                    ecx_3 = *(eax_1 + 0x4dec)
                    ebx_1 = *ecx_3
                
                int32_t edx_12 = ecx_3[2]
                
                if (ebx_1 s> edx_12)
                    *ecx_3 = edx_12
                    ecx_3 = *(eax_1 + 0x4dec)
                    ebx_1 = *ecx_3
                
                int32_t edx_13 = ecx_3[3]
                
                if (ebx_1 s> edx_13)
                    *ecx_3 = edx_13
                    ebx_1 = **(eax_1 + 0x4dec)
                
                int32_t* var_40_9 = &result
                int32_t var_44_11 = ebx_1
                sub_6b4d5b()
                int32_t* var_40_10 = &result
                int32_t var_44_12 = *(var_38 + 0x4dec)
                sub_6b4d5b()
                eax_1 = var_38
                *(eax_1 + 0x4dec) = 0
        
        int32_t edx_5 = *(eax_1 + 0x4830)
        
        if (edx_5 != 0)
            int32_t* var_40_4 = &result
            int32_t var_44_4 = edx_5
            sub_6b4d5b()
            eax_1 = var_38
            *(eax_1 + 0x4830) = 0
        
        void* edx_7 = *(eax_1 + 0x37e0)
        
        if (edx_7 != 0)
            int32_t eax_3 = *(edx_7 + 0x34)
            
            if (eax_3 != 0)
                int32_t* var_40_5 = &result
                int32_t var_44_5 = eax_3
                sub_6b4d5b()
                *(*(var_38 + 0x37e0) + 0x34) = 0
                edx_7 = *(var_38 + 0x37e0)
            
            int32_t* var_40_6 = &result
            void* var_44_6 = edx_7
            sub_6b4d5b()
            eax_1 = var_38
            *(eax_1 + 0x37e0) = 0
        
        data_797c44(eax_1 + 0x371c, 0x20)
        data_797c44(var_38 + 0x373c, 0x60)
        __builtin_memset(var_38 + 0x80, 0, 0x14)
        *(var_38 + 0x3714) = 0
        *(var_38 + 0x3718) = 0
        int32_t var_8_2 = 0xffffffff
    else
        result = 0xfffffff8
else
    result = 0xfffffff7

int32_t* var_40_7 = &result
sub_6ca4e0(*(arg1 + 0x3848))
int32_t edx_10 = *(arg1 + 0x3848)

if (edx_10 != 0)
    int32_t* var_40_8 = &result
    int32_t var_44_10 = edx_10
    sub_6b4d5b()
    *(arg1 + 0x3848) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
