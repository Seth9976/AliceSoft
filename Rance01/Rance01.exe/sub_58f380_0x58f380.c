// 函数: sub_58f380
// 地址: 0x58f380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712870
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hObject

if (*(arg1 + 0x18) == 0 || *(arg2 + 0xc) == 0 || *(arg1 + 0x44) == 0)
    hObject.b = 0
else
    BOOL hObject_1 = 0xffffffff
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_4 = 0
    
    if (sub_601f00(&hObject_1, arg1 + 8) != 0)
        if (sub_6026c0(*(arg2 + 4), &hObject_1) == 0)
            sub_601e80(&hObject_1)
            hObject.b = 0
        else
            uint32_t var_20
            sub_413150(&var_20, *(arg2 + 8))
            var_4.b = 1
            uint32_t ebp_2 = var_20
            int32_t var_1c
            uint32_t edi_4 = var_1c - ebp_2
            uint32_t* esi_4
            
            if (sub_6021f0(&hObject_1, edi_4, ebp_2) != 0)
                sub_404f60(*(arg2 + 0xc), arg3)
                int32_t edx_1 = *arg3
                esi_4 = &var_20
                
                if ((*(**(arg1 + 0x44) + 8))(edx_1, arg3[1] - edx_1, ebp_2, edi_4) == 0)
                    goto label_58f43d
                
                sub_65ab60(esi_4)
                sub_601e80(&hObject_1)
                hObject.b = 1
            else
                esi_4 = &var_20
            label_58f43d:
                sub_65ab60(esi_4)
                sub_601e80(&hObject_1)
                hObject.b = 0
    else
        hObject = hObject_1
        
        if (hObject != 0xffffffff)
            CloseHandle(hObject)
        
        hObject.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
