// 函数: sub_602e20
// 地址: 0x602e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71db57
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1e4
int32_t eax_2 = data_78c474 ^ &var_1e4
int32_t __saved_edi
int32_t var_1f4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1e0
sub_405410(arg2, &var_1e0, *arg2, arg2[1])
int32_t* eax_6 = operator new(0x144)
int32_t* ebx

if (eax_6 == 0)
    var_1e0 = nullptr
    ebx = nullptr
else
    ebx = eax_6
    *eax_6 = 0xffffffff
    var_1e0 = ebx

int32_t* var_1d4 = ebx
int32_t var_c_1 = 0
uint32_t var_1bc = 0xf
int32_t var_1c0 = 0
char var_1d0 = 0
var_c_1.b = 1
int32_t* var_1b4
sub_405c90(&var_1b4, arg1, "\*")
var_c_1.b = 2
int32_t* edx = var_1b4
int32_t var_1a0

if (var_1a0 u< 0x10)
    edx = &var_1b4

int32_t* eax_7 = edx
int32_t var_184 = 0xf
int32_t var_188 = 0
char var_198 = 0
void* esi_1 = eax_7 + 1
char i

do
    i = *eax_7
    eax_7 += 1
while (i != 0)
sub_401270(&var_198, eax_7 - esi_1, edx)
var_c_1.b = 3
ebx.b = sub_602770(ebx, &var_198, &var_1d0) == 0
var_c_1.b = 2

if (var_184 u>= 0x10)
    int32_t var_1f8_3 = var_198.d
    sub_6b4d5b()

if (ebx.b == 0)
    int32_t* ebx_3
    
    while (true)
        int32_t eax_14 = var_1c0
        
        if (var_1c0 u>= 1)
            eax_14 = 1
        
        char* edi_1 = var_1d0.d
        char* edx_2 = edi_1
        
        if (var_1bc u< 0x10)
            edx_2 = &var_1d0
        
        int32_t eax_15 = sub_402320(eax_14, edx_2, 0x735544, eax_14)
        bool cond:2_1 = eax_15 == 0
        
        if (eax_15 == 0)
            if (var_1c0 u>= 1)
                eax_15.b = var_1c0 != 1
            else
                eax_15 = 0xffffffff
            
            cond:2_1 = eax_15 == 0
        
        eax_15.b = cond:2_1
        eax_15.b = eax_15.b == 0
        
        if (eax_15.b != 0)
            int32_t eax_16 = var_1c0
            
            if (var_1c0 u>= 2)
                eax_16 = 2
            
            char* edx_3 = edi_1
            
            if (var_1bc u< 0x10)
                edx_3 = &var_1d0
            
            int32_t eax_17 = sub_402320(eax_16, edx_3, 0x735548, eax_16)
            bool cond:3_1 = eax_17 == 0
            
            if (eax_17 == 0)
                if (var_1c0 u>= 2)
                    eax_17.b = var_1c0 != 2
                else
                    eax_17 = 0xffffffff
                
                cond:3_1 = eax_17 == 0
            
            eax_17.b = cond:3_1
            eax_17.b = eax_17.b == 0
            
            if (eax_17.b != 0)
                var_c_1.b = 4
                int32_t var_17c
                char* lpFileName =
                    sub_4c1d70(&var_1d0, &var_198, sub_405c90(&var_17c, arg1, \\n\n\n\n\n\n\n\n"), 
                    &var_198)
                
                if (*(lpFileName + 0x14) u>= 0x10)
                    lpFileName = *lpFileName
                
                WIN32_FIND_DATAA findFileData
                HANDLE hFindFile_2 = FindFirstFileA(lpFileName, &findFileData)
                uint32_t ebx_1
                
                if (hFindFile_2 != 0xffffffff)
                    FindClose(hFindFile_2)
                    ebx_1.b = (findFileData.dwFileAttributes u>> 4).b & 1
                else
                    ebx_1.b = 0
                
                if (var_184 u>= 0x10)
                    int32_t var_1f8_14 = var_198.d
                    sub_6b4d5b()
                
                var_c_1.b = 2
                var_184 = 0xf
                int32_t var_188_1 = 0
                var_198 = 0
                int32_t var_168
                
                if (var_168 u>= 0x10)
                    int32_t var_1f8_15 = var_17c
                    sub_6b4d5b()
                
                if (ebx_1.b != 0)
                    sub_405220(&var_1d0, arg2)
        
        ebx_3 = var_1e0
        HANDLE hFindFile_3 = *ebx_3
        
        if (hFindFile_3 == 0xffffffff)
            break
        
        BOOL eax_22
        char ecx_6
        eax_22, ecx_6 = FindNextFileA(hFindFile_3, &ebx_3[1])
        
        if (eax_22 == 0)
            break
        
        void* eax_23 = &ebx_3[0xc]
        void* esi_5 = eax_23 + 1
        char i_1
        
        do
            i_1 = *eax_23
            eax_23 += 1
        while (i_1 != 0)
        sub_401270(&var_1d0, eax_23 - esi_5, &ebx_3[0xc])
    
    void* esi_7 = arg2[1]
    int32_t* edi_4 = *arg2
    sub_603270(edi_4, esi_7, (esi_7 - edi_4) s/ 0x1c)
    
    if (var_1a0 u>= 0x10)
        int32_t* var_1f8_19 = var_1b4
        sub_6b4d5b()
    
    int32_t var_1a0_2 = 0xf
    int32_t var_1a4_1 = 0
    var_1b4.b = 0
    
    if (var_1bc u>= 0x10)
        int32_t var_1f8_20 = var_1d0.d
        sub_6b4d5b()
    
    int32_t var_1bc_2 = 0xf
    int32_t var_1c0_2 = 0
    var_1d0 = 0
    HANDLE hFindFile_4 = *ebx_3
    
    if (hFindFile_4 != 0xffffffff && FindClose(hFindFile_4) != 0)
        *ebx_3 = 0xffffffff
    
    HANDLE hFindFile_5 = *ebx_3
    
    if (hFindFile_5 != 0xffffffff && FindClose(hFindFile_5) != 0)
        *ebx_3 = 0xffffffff
    
    int32_t* var_1f8_23 = ebx_3
else
    if (var_1a0 u>= 0x10)
        int32_t* var_1f8_4 = var_1b4
        sub_6b4d5b()
    
    int32_t var_1a0_1 = 0xf
    int32_t var_1a4 = 0
    var_1b4.b = 0
    
    if (var_1bc u>= 0x10)
        int32_t var_1f8_5 = var_1d0.d
        sub_6b4d5b()
    
    int32_t var_1bc_1 = 0xf
    int32_t* esi_3 = var_1e0
    int32_t var_1c0_1 = 0
    var_1d0 = 0
    HANDLE hFindFile = *esi_3
    
    if (hFindFile != 0xffffffff && FindClose(hFindFile) != 0)
        *esi_3 = 0xffffffff
    
    HANDLE hFindFile_1 = *esi_3
    
    if (hFindFile_1 != 0xffffffff && FindClose(hFindFile_1) != 0)
        *esi_3 = 0xffffffff
    
    int32_t* var_1f8_8 = esi_3

int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1e4)
return result
