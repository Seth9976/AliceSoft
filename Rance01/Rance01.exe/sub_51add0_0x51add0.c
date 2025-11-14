// 函数: sub_51add0
// 地址: 0x51add0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_712ad3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_38 = edi
int32_t eax_2 = data_78c474 ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* i = *ebx
int32_t* i_1 = i

while (i != ebx[1])
    int32_t* esi_1 = *i
    
    if (esi_1 != 0)
        void* var_1c_1 = &esi_1[1]
        EnterCriticalSection(esi_1[1])
        int32_t var_c_1 = 0
        *esi_1 -= 1
        char var_20_1 = 0
        
        if (*esi_1 != 0)
            LeaveCriticalSection(esi_1[1])
        else
            LeaveCriticalSection(esi_1[1])
            int32_t* var_24_1 = esi_1
            var_c_1.b = 1
            int32_t* ecx_1 = esi_1[2]
            
            if (ecx_1 != 0)
                (*(*ecx_1 + 4))(eax_2)
                esi_1[2] = 0
            
            CRITICAL_SECTION* lpCriticalSection = esi_1[1]
            
            if (lpCriticalSection != 0)
                DeleteCriticalSection(lpCriticalSection)
                CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
                sub_6b4d5b()
            
            int32_t* var_40_4 = esi_1
            sub_6b4d5b()
        
        i = i_1
        ebx = arg1
        int32_t var_c_2 = 0xffffffff
    
    i = &i[1]
    i_1 = i

int128_t* ecx_2 = ebx[1]
int128_t* esi_2 = *ebx

if (esi_2 != ecx_2)
    int32_t edi_4 = 0 s>> 2 << 2
    i = sub_6b49d0(esi_2, ecx_2, edi_4, eax_2)
    ebx[1] = edi_4 + esi_2

fsbase->NtTib.ExceptionList = ExceptionList
return i
