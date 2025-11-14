// 函数: sub_5638f0
// 地址: 0x5638f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71ebf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HIMC param0
sub_405410(arg1 + 0x20, &param0, *(arg1 + 0x20), *(arg1 + 0x24))
HIMC param0_1 = ImmGetContext(*(arg1 + 0x78))
param0 = param0_1
uint32_t dwBufLen = ImmGetCandidateListA(param0_1, 0, nullptr, 0)

if (dwBufLen != 0)
    CANDIDATELIST* lpCandList_2 = nullptr
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    sub_404f60(dwBufLen, &lpCandList_2)
    int32_t var_c_1 = 0
    CANDIDATELIST* lpCandList = lpCandList_2
    ImmGetCandidateListA(param0, 0, lpCandList, dwBufLen)
    param0 = nullptr
    
    if (lpCandList->dwCount s> 0)
        DWORD (* var_4c_1)[0x1] = &lpCandList->dwOffset
        void* __offset(HIMC__, 0x1) i
        CANDIDATELIST* lpCandList_3
        
        do
            void* ecx_4 = (var_4c_1 - 0x18)->dwOffset + lpCandList
            void* eax_7 = ecx_4
            int32_t var_28_1 = 0
            int32_t var_24_1 = 0xf
            char var_38 = 0
            void* esi_2 = eax_7 + 1
            char j
            
            do
                j = *eax_7
                eax_7 += 1
            while (j != 0)
            sub_401270(&var_38, eax_7 - esi_2, ecx_4)
            var_c_1.b = 1
            sub_405150(&var_38, arg1 + 0x20)
            var_c_1.b = 0
            
            if (var_24_1 u>= 0x10)
                int32_t var_68_5 = var_38.d
                sub_6b4d5b()
            
            lpCandList_3 = lpCandList_2
            var_4c_1 = &var_4c_1[1]
            i = &param0->unused + 1
            param0 = i
            lpCandList = lpCandList_3
        while (i s< lpCandList_3->dwCount)
    
    CANDIDATELIST* lpCandList_1 = lpCandList
    sub_6b4d5b()

int32_t result
result.b = *(arg1 + 0x20) != *(arg1 + 0x24)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
