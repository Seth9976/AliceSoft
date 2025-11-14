// 函数: sub_56e120
// 地址: 0x56e120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** hResData

if (*(arg1 + 8) == 0)
    hResData.b = 0
else
    int128_t* var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** hResInfo = FindResourceA(arg2, 0x6a, &data_74b66c)
    
    if (hResInfo == 0)
        hResData.b = 0
    else
        struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = SizeofResource(arg2, hResInfo)
        
        if (edi_1 == 0)
            hResData.b = 0
        else
            hResData = LoadResource(arg2, hResInfo)
            
            if (hResData == 0)
                hResData.b = 0
            else
                hResData = LockResource(hResData)
                
                if (hResData == 0)
                    hResData.b = 0
                else
                    sub_404f60(edi_1, &var_1c)
                    int128_t* esi_2 = var_1c
                    sub_6c02a0(esi_2, hResData, edi_1, eax_2)
                    
                    if (esi_2 == var_18_1)
                        if (esi_2 != 0)
                            int128_t* var_38_6 = esi_2
                            sub_6b4d5b()
                        
                        hResData.b = 0
                    else
                        int32_t* ecx_1 = *(arg1 + 0x44)
                        
                        if (ecx_1 != 0)
                            (*(*ecx_1 + 4))()
                            *(arg1 + 0x44) = 0
                        
                        int32_t* eax_6 = (*(**(arg1 + 8) + 0x24))()
                        *(arg1 + 0x44) = eax_6
                        
                        if (eax_6 == 0)
                            sub_65ab60(&var_1c)
                            hResData.b = 0
                        else if ((*(*eax_6 + 8))(esi_2, var_18_1 - esi_2) != 0)
                            sub_65ab60(&var_1c)
                            hResData.b = 1
                        else
                            (*(**(arg1 + 0x44) + 4))()
                            *(arg1 + 0x44) = 0
                            sub_65ab60(&var_1c)
                            hResData.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hResData
