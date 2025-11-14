// 函数: sub_58fc40
// 地址: 0x58fc40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_58fd40(arg2)
int128_t* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0
HRSRC hResInfo = FindResourceA(arg1, 0x8f, &data_74b270)
HRSRC hResData

if (hResInfo == 0)
    hResData.b = 0
else
    HRSRC ebx_1 = SizeofResource(arg1, hResInfo)
    
    if (ebx_1 == 0)
        hResData.b = 0
    else
        hResData = LoadResource(arg1, hResInfo)
        
        if (hResData == 0)
            hResData.b = 0
        else
            int128_t* edi_1 = LockResource(hResData)
            
            if (edi_1 == 0)
                hResData.b = 0
            else
                sub_404f60(ebx_1, &var_1c)
                int128_t* esi_1 = var_1c
                sub_6c02a0(esi_1, edi_1, ebx_1, eax_2)
                
                if (esi_1 == var_18)
                label_58fd15:
                    
                    if (esi_1 == 0)
                        hResData.b = 0
                    else
                        int128_t* var_38_7 = esi_1
                        sub_6b4d5b()
                        hResData.b = 0
                else
                    if (sub_58eed0(arg2 + 8, &var_1c).b == 0)
                        goto label_58fd15
                    
                    *(arg2 + 4) = arg3
                    
                    if (esi_1 != 0)
                        int128_t* var_38_6 = esi_1
                        sub_6b4d5b()
                    
                    hResData.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return hResData
