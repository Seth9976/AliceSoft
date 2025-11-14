// 函数: sub_5c9460
// 地址: 0x5c9460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_721d82
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_224
int32_t eax_2 = data_78c474 ^ &var_224
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = *(arg1 + 8)
void* ecx = *(arg1 + 4)

if (ecx != eax_5)
    void* var_238_1 = arg1 + 4
    void* eax_6
    int32_t edx_2
    eax_6, edx_2 = sub_5c9be0(eax_5, arg1 + 4, ecx, eax_5)
    void* var_240_1 = arg1 + 4
    int32_t var_244_1 = *(arg1 + 8)
    sub_5c9c30(eax_6, edx_2)
    *(arg1 + 8) = eax_6

sub_5c9870(arg1 + 4)
void* ebx = data_797d60
void** eax_9 = *(ebx + 4)
void** esi_2 = eax_9[1]
void** edi_2 = eax_9

while (*(esi_2 + 0x21) == 0)
    if (sub_40f4a0(&esi_2[3], 0x7379f4) == 0)
        edi_2 = esi_2
        esi_2 = *esi_2
    else
        esi_2 = esi_2[2]

void** esi_3 = *(ebx + 4)
void** var_21c = edi_2
char eax_11

if (edi_2 != esi_3)
    eax_11 = sub_40f4a0(0x7379f4, &edi_2[3])

void** var_220
void*** eax_12

if (edi_2 == esi_3 || eax_11 != 0)
    var_220 = esi_3
    eax_12 = &var_220
else
    eax_12 = &var_21c

void** hFindFile = *eax_12

if (hFindFile == esi_3)
    hFindFile.b = 0
else
    int32_t* ecx_3 = hFindFile[7]
    int32_t ebx_1 = 0
    
    if (ecx_3 != 0)
        hFindFile = (**ecx_3)(0x737a04)
        
        if (hFindFile == 0)
            hFindFile.b = 0
        else
            int128_t* eax_15 = (*(*hFindFile + 0x14))(eax_4)
            int32_t var_1e0_1 = 0xf
            int32_t var_1e4_1 = 0
            char var_1f4 = 0
            char* ecx_6 = eax_15
            char i
            
            do
                i = *ecx_6
                ecx_6 = &ecx_6[1]
            while (i != 0)
            sub_401270(&var_1f4, ecx_6 - (eax_15 + 1), eax_15)
            int32_t var_c_1 = 0
            int32_t var_24
            __builtin_strncpy(&var_24, "GWDRB", 5)
            int32_t var_214_1 = 0
            var_220 = nullptr
            
            while (true)
                char edx_6 = *(&var_24 + var_214_1)
                var_21c = nullptr
                void** esi_10
                
                do
                    int32_t var_1fc_1 = 0xf
                    int32_t var_200_1 = 0
                    char var_210 = 0
                    var_c_1.b = 1
                    sub_401180(&var_210, 0xffffffff, &data_79341c, 0)
                    var_c_1.b = 2
                    var_c_1.b = 3
                    char var_1d8
                    char var_1bc
                    int32_t var_184
                    char* eax_20
                    int32_t* ecx_14
                    eax_20, ecx_14 = sub_5c9ac0(ebx_1.b + 0x41, &var_1d8, 
                        sub_5c9ac0(edx_6, sub_401940(&var_184, sub_587150(&var_210), &var_1f4), 
                            &var_184, &var_1bc), 
                        &var_1d8)
                    char* var_240_2 = eax_20
                    var_c_1.b = 4
                    char var_1a0
                    sub_402c60(&var_1a0, ".ALD", ecx_14)
                    var_c_1.b = 5
                    sub_5870d0(&var_210)
                    sub_402000(&var_210, &var_1a0, 0, 0xffffffff)
                    int32_t var_18c
                    
                    if (var_18c u>= 0x10)
                        int32_t var_238_4 = var_1a0.d
                        sub_6b4d5b()
                    
                    var_18c = 0xf
                    int32_t var_190_1 = 0
                    var_1a0 = 0
                    int32_t var_1c4
                    
                    if (var_1c4 u>= 0x10)
                        int32_t var_238_5 = var_1d8.d
                        sub_6b4d5b()
                    
                    var_1c4 = 0xf
                    int32_t var_1c8_1 = 0
                    var_1d8 = 0
                    int32_t var_1a8
                    
                    if (var_1a8 u>= 0x10)
                        int32_t var_238_6 = var_1bc.d
                        sub_6b4d5b()
                    
                    var_c_1.b = 1
                    var_1a8 = 0xf
                    int32_t var_1ac_1 = 0
                    var_1bc = 0
                    int32_t var_170
                    
                    if (var_170 u>= 0x10)
                        int32_t var_238_7 = var_184
                        sub_6b4d5b()
                    
                    void* esi_8 = *(arg1 + 4) + var_220
                    int32_t ecx_18 = *(esi_8 + 8) - *(esi_8 + 4)
                    int32_t eax_25
                    int32_t edx_11
                    edx_11:eax_25 = muls.dp.d(0x2aaaaaab, ecx_18)
                    
                    if (ebx_1 s>= ecx_18 s/ 0x30)
                        sub_5c8ce0(ebx_1 + 1, edx_11 s>> 3, ecx_18, esi_8 + 4)
                    
                    esi_10 = var_21c
                    sub_401180(esi_10 + *(esi_8 + 4) + 4, 0xffffffff, &var_210, 0)
                    var_c_1.b = 0
                    
                    if (var_1fc_1 u>= 0x10)
                        int32_t var_238_8 = var_210.d
                        sub_6b4d5b()
                    
                    ebx_1 += 1
                    var_21c = &esi_10[0xc]
                while (&esi_10[0xc] s< 0x4e0)
                var_214_1 += 1
                void* eax_32 = &var_220[0xb]
                var_220 = eax_32
                
                if (eax_32 s>= 0xdc)
                    break
                
                ebx_1 = 0
            
            for (int32_t i_1 = 0; i_1 s< 0xdc; i_1 += 0x2c)
                void* esi_12 = *(arg1 + 4)
                void* esi_13 = esi_12 + i_1
                PSTR lpFileName = *(esi_12 + i_1 + 4) + 4
                
                if (*(lpFileName + 0x14) u>= 0x10)
                    lpFileName = *lpFileName
                
                WIN32_FIND_DATAA findFileData
                hFindFile = FindFirstFileA(lpFileName, &findFileData)
                
                if (hFindFile != 0xffffffff)
                    FindClose(hFindFile)
                    
                    if ((findFileData.dwFileAttributes.b & 0x10) == 0)
                        sub_5c7ef0(*(esi_13 + 4) + 4, esi_13)
            
            if (var_1e0_1 u>= 0x10)
                int32_t var_238_12 = var_1f4.d
                sub_6b4d5b()
            
            hFindFile.b = 1
    else
        hFindFile.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_224)
return hFindFile
