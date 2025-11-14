// 函数: sub_6ae4d0
// 地址: 0x6ae4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713865
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 5
int32_t* eax_3 = *(arg1 + 0x6c)
int32_t* i = *eax_3

while (i != eax_3)
    void* esi_1 = i[3]
    
    if (esi_1 != 0)
        HWND hWnd = *(esi_1 + 0x34)
        
        if (hWnd != 0 && *(esi_1 + 0x38) != 0)
            DestroyWindow(hWnd)
            HINSTANCE hInstance = *(esi_1 + 0x18)
            PSTR lpClassName = *(esi_1 + 0x2c)
            *(esi_1 + 0x34) = 0
            
            if (UnregisterClassA(lpClassName, hInstance) != 0)
                *(esi_1 + 0x38) = 0
        
        int32_t* ecx_1 = i[3]
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))(1)
    
    if (*(i + 0x31) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0x31) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0x31) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0x31) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0x31) == 0)
                i = i_2
                i_2 = *i

int32_t* eax_6 = *(arg1 + 0xa8)

if (eax_6 != 0)
    sub_663180(eax_6, *(arg1 + 0xac))
    int32_t var_2c_4 = *(arg1 + 0xa8)
    sub_6b4d5b()

*(arg1 + 0xa8) = 0
*(arg1 + 0xac) = 0
*(arg1 + 0xb0) = 0
int32_t* eax_8 = *(arg1 + 0x98)

if (eax_8 != 0)
    sub_663180(eax_8, *(arg1 + 0x9c))
    int32_t var_2c_6 = *(arg1 + 0x98)
    sub_6b4d5b()

*(arg1 + 0x98) = 0
*(arg1 + 0x9c) = 0
*(arg1 + 0xa0) = 0
int32_t eax_10 = *(arg1 + 0x88)

if (eax_10 != 0)
    int32_t var_2c_7 = eax_10
    sub_6b4d5b()

*(arg1 + 0x88) = 0
*(arg1 + 0x8c) = 0
*(arg1 + 0x90) = 0
int32_t eax_11 = *(arg1 + 0x78)

if (eax_11 != 0)
    int32_t var_2c_8 = eax_11
    sub_6b4d5b()

*(arg1 + 0x78) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x80) = 0
void* var_14_1 = arg1 + 0x68
var_4.b = 6
int32_t** eax_12 = *(arg1 + 0x6c)
void var_10
sub_6b04a0(arg1 + 0x68, &var_10, *eax_12, eax_12)
int32_t var_2c_10 = *(arg1 + 0x6c)
int32_t result = sub_6b4d5b()

if (*(arg1 + 0x4c) u>= 0x10)
    int32_t var_2c_11 = *(arg1 + 0x38)
    result = sub_6b4d5b()

*(arg1 + 0x4c) = 0xf
*(arg1 + 0x48) = 0
*(arg1 + 0x38) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
