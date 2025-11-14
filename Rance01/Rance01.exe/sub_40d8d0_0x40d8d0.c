// 函数: sub_40d8d0
// 地址: 0x40d8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b798
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* hWnd
int32_t eax_2 = data_78c474 ^ &hWnd
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_797d60
void** eax_5 = *(ebx + 4)
void** esi = eax_5[1]
void** edi = eax_5

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x7576d8) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

int32_t* hWnd_1 = *(ebx + 4)
void** var_30 = edi
char eax_7

if (edi != hWnd_1)
    eax_7 = sub_40f4a0(0x7576d8, &edi[3])

void** eax_8

if (edi == hWnd_1 || eax_7 != 0)
    hWnd = hWnd_1
    eax_8 = &hWnd
else
    eax_8 = &var_30

int32_t* result = *eax_8

if (result != hWnd_1)
    int32_t* ecx_2 = result[7]
    
    if (ecx_2 != 0)
        result = (**ecx_2)("|.Pd")
        
        if (result != 0)
            char ecx_4
            result, ecx_4 = (**result)(eax_4)
            hWnd = result
            
            if (result != 0)
                char* eax_11 = arg1
                void* edx_4 = &eax_11[1]
                char i
                
                do
                    i = *eax_11
                    eax_11 = &eax_11[1]
                while (i != 0)
                int32_t var_40 = 0
                int128_t* var_3c_1 = nullptr
                int32_t var_38_1 = 0
                int32_t var_4 = 0
                int32_t var_2c
                sub_402be0(&var_2c, "Sys4xVMOutput")
                ebx.b = sub_6b30f0(&var_40, &var_2c, eax_11 - edx_4 + 1) == 0
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_5c_2 = var_2c
                    sub_6b4d5b()
                
                if (ebx.b == 0)
                    sub_6c02a0(var_3c_1, arg1, eax_11 - edx_4 + 1)
                    SendMessageA(hWnd, 0x400, 0, 0)
                
                result = sub_6b30c0(&var_40)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hWnd)
return result
