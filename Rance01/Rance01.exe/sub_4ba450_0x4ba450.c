// 函数: sub_4ba450
// 地址: 0x4ba450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7205e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1fc
int32_t eax_2 = data_78c474 ^ &var_1fc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg3
void* i = *(ebx + 0x94)
void* var_1ec = ebx

while (i != *(ebx + 0x98))
    bool cond:0_1 = *(i + 0x14) u< 0x10
    *(i + 0x10) = 0
    void* i_1
    
    if (cond:0_1)
        i_1 = i
    else
        i_1 = *i
    
    i += 0x1c
    *i_1 = 0

sub_401180(*(ebx + 0x94), 0xffffffff, arg2, 0)
struct _EXCEPTION_REGISTRATION_RECORD** var_1e4 = nullptr
int32_t var_1e0 = 0
int32_t var_1dc = 0
int32_t var_c_1 = 0
int32_t var_1c0 = 0
int32_t var_1bc = 0xf
char var_1d0 = 0
sub_401270(&var_1d0, 3, 0x756450)
var_c_1.b = 1
sub_405220(&var_1d0, &var_1e4)
var_c_1.b = 0

if (var_1bc u>= 0x10)
    int32_t var_210_1 = var_1d0.d
    sub_6b4d5b()

int32_t var_1bc_1 = 0xf
int32_t var_1c0_1 = 0
var_1d0 = 0
sub_401270(&var_1d0, 3, 0x756454)
var_c_1.b = 2
sub_405220(&var_1d0, &var_1e4)
var_c_1.b = 0

if (var_1bc_1 u>= 0x10)
    int32_t var_210_2 = var_1d0.d
    sub_6b4d5b()

int32_t var_1bc_2 = 0xf
int32_t var_1c0_2 = 0
var_1d0 = 0
sub_401270(&var_1d0, 3, 0x756458)
var_c_1.b = 3
sub_405220(&var_1d0, &var_1e4)
var_c_1.b = 0

if (var_1bc_2 u>= 0x10)
    int32_t var_210_3 = var_1d0.d
    sub_6b4d5b()

int32_t ecx_6 = *(ebx + 0x98) - *(ebx + 0x94)
int32_t result
int32_t edx_1
edx_1:result = muls.dp.d(0x92492493, ecx_6)
int32_t var_1f8 = 1
struct _EXCEPTION_REGISTRATION_RECORD** edi_5

if (ecx_6 s/ 0x1c s<= 1)
    edi_5 = var_1e4
else
    int32_t var_1f4_1 = 0x1c
    int32_t esi_8
    
    do
        edi_5 = var_1e4
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = edi_5
        struct _EXCEPTION_REGISTRATION_RECORD** var_1f0_1 = eax_7
        
        if (edi_5 != var_1e0)
            while (true)
                if (eax_7[5] u>= 0x10)
                    eax_7 = *eax_7
                
                struct _EXCEPTION_REGISTRATION_RECORD** var_210_4 = eax_7
                int32_t var_214_1 = var_1f8
                int32_t var_218_1 = sub_401170(arg2)
                char* eax_10
                int32_t ecx_10
                eax_10, ecx_10 = sub_4104a0("%s_%02d.%s")
                var_c_1.b = 4
                int32_t* eax_11
                int32_t edx_6
                eax_11, edx_6 = sub_401800(ecx_10, arg4, &var_1d0)
                var_c_1.b = 5
                int32_t* lpFileName_1
                sub_4b3c20(eax_11, edx_6, eax_10, &lpFileName_1)
                
                if (var_1bc_2 u>= 0x10)
                    int32_t var_210_5 = var_1d0.d
                    sub_6b4d5b()
                
                int32_t* esi_4 = nullptr
                var_1bc_2 = 0xf
                int32_t var_1c0_3 = 0
                var_1d0 = 0
                var_c_1.b = 8
                char var_198
                int32_t var_184
                
                if (var_184 u>= 0x10)
                    int32_t var_210_6 = var_198.d
                    sub_6b4d5b()
                
                var_184 = 0xf
                int32_t var_188_1 = 0
                var_198 = 0
                int32_t* eax_13 = operator new(0x144)
                
                if (eax_13 != 0)
                    *eax_13 = 0xffffffff
                    esi_4 = eax_13
                
                int32_t* lpFileName = lpFileName_1
                int32_t var_1a0
                
                if (var_1a0 u< 0x10)
                    lpFileName = &lpFileName_1
                
                WIN32_FIND_DATAA findFileData
                HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
                uint8_t ebx_1
                
                if (hFindFile != 0xffffffff)
                    FindClose(hFindFile)
                    ebx_1 = not.b(findFileData.dwFileAttributes.b u>> 4) & 1
                else
                    ebx_1 = 0
                
                HANDLE hFindFile_1 = *esi_4
                
                if (hFindFile_1 != 0xffffffff && FindClose(hFindFile_1) != 0)
                    *esi_4 = 0xffffffff
                
                HANDLE hFindFile_2 = *esi_4
                
                if (hFindFile_2 != 0xffffffff && FindClose(hFindFile_2) != 0)
                    *esi_4 = 0xffffffff
                
                int32_t* var_210_11 = esi_4
                sub_6b4d5b()
                
                if (ebx_1 != 0)
                    int32_t var_210_12 = var_1f8
                    int32_t var_214_3 = sub_401170(arg2)
                    char* eax_18 = sub_4104a0("%s_%02d")
                    int32_t* esi_6 = *(var_1ec + 0x94) + var_1f4_1
                    
                    if (esi_6 != eax_18)
                        if (esi_6[5] u>= 0x10)
                            int32_t var_210_13 = *esi_6
                            sub_6b4d5b()
                        
                        esi_6[5] = 0xf
                        esi_6[4] = 0
                        *esi_6 = 0
                        
                        if (*(eax_18 + 0x14) u>= 0x10)
                            *esi_6 = *eax_18
                            *eax_18 = 0
                        else
                            sub_6b49d0(esi_6, eax_18, *(eax_18 + 0x10) + 1, eax_4)
                        
                        esi_6[4] = *(eax_18 + 0x10)
                        esi_6[5] = *(eax_18 + 0x14)
                        *(eax_18 + 0x14) = 0xf
                        *(eax_18 + 0x10) = 0
                        *eax_18 = 0
                    
                    int32_t var_168
                    
                    if (var_168 u>= 0x10)
                        int32_t var_17c
                        int32_t var_210_15 = var_17c
                        sub_6b4d5b()
                
                var_c_1.b = 0
                
                if (var_1a0 u>= 0x10)
                    int32_t* lpFileName_2 = lpFileName_1
                    sub_6b4d5b()
                
                void* eax_25 = &var_1f0_1[7]
                var_1f0_1 = eax_25
                
                if (eax_25 == var_1e0)
                    break
                
                eax_7 = var_1f0_1
            
            edi_5 = var_1e4
            ebx = var_1ec
        
        result = *(ebx + 0x94)
        
        if (*(var_1f4_1 + result + 0x10) == 0)
            break
        
        var_1f4_1 += 0x1c
        esi_8 = var_1f8 + 1
        result = (*(ebx + 0x98) - result) s/ 0x1c
        var_1f8 = esi_8
    while (esi_8 s< result)

if (edi_5 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_9 = edi_5
    
    if (edi_5 != var_1e0)
        do
            if (esi_9[5] u>= 0x10)
                struct _EXCEPTION_REGISTRATION_RECORD* var_210_16 = *esi_9
                sub_6b4d5b()
            
            esi_9[5] = 0xf
            esi_9[4] = 0
            *esi_9 = nullptr
            esi_9 = &esi_9[7]
        while (esi_9 != var_1e0)
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_210_17 = edi_5
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1fc)
return result
