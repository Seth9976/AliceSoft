// 函数: sub_5d8190
// 地址: 0x5d8190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71401a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSactSound::`vftable'{for `IChangeVolumeCallback'}
int32_t var_4 = 1
int32_t* edi = arg1[0xb]
int32_t* i = *edi

while (i != edi)
    int32_t* ecx = i[4]
    
    if (ecx != 0)
        (**ecx)(1)
    
    if (*(i + 0x15) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0x15) != 0)
            int32_t* i_4 = i[1]
            
            if (*(i_4 + 0x15) == 0)
                while (i == i_4[2])
                    i = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0x15) != 0)
                        break
            
            i = i_4
        else
            i = i_2
            int32_t* i_3 = *i
            
            while (*(i_3 + 0x15) == 0)
                i = i_3
                i_3 = *i

void** vFunc_1_1 = arg1[0xb]->vFunc_1
void** vFunc_1_3 = vFunc_1_1

if (*(vFunc_1_1 + 0x15) == 0)
    do
        sub_402c20(vFunc_1_3[2])
        vFunc_1_3 = *vFunc_1_3
        void** vFunc_1_2 = vFunc_1_1
        sub_6b4d5b()
        vFunc_1_1 = vFunc_1_3
    while (*(vFunc_1_3 + 0x15) == 0)

void* eax_5 = arg1[0xb]
*(eax_5 + 4) = eax_5
int32_t* eax_6 = arg1[0xb]
*eax_6 = eax_6
void* eax_7 = arg1[0xb]
*(eax_7 + 8) = eax_7
arg1[0xc] = 0
int32_t* edi_1 = arg1[7]
int32_t* i_1 = *edi_1

while (i_1 != edi_1)
    int32_t eax_8 = i_1[4]
    
    if (eax_8 != 0)
        int32_t var_2c_2 = eax_8
        sub_6b4d5b()
    
    if (*(i_1 + 0x15) == 0)
        int32_t* i_5 = i_1[2]
        
        if (*(i_5 + 0x15) != 0)
            int32_t* i_7 = i_1[1]
            
            if (*(i_7 + 0x15) == 0)
                while (i_1 == i_7[2])
                    i_1 = i_7
                    i_7 = i_7[1]
                    
                    if (*(i_7 + 0x15) != 0)
                        break
            
            i_1 = i_7
        else
            i_1 = i_5
            int32_t* i_6 = *i_1
            
            while (*(i_6 + 0x15) == 0)
                i_1 = i_6
                i_6 = *i_1

void* edi_2 = &arg1[6]
void** vFunc_1 = arg1[7]->vFunc_1
void** vFunc_2 = vFunc_1

if (*(vFunc_1 + 0x15) == 0)
    do
        sub_402c20(vFunc_2[2])
        vFunc_2 = *vFunc_2
        void** vFunc = vFunc_1
        sub_6b4d5b()
        vFunc_1 = vFunc_2
    while (*(vFunc_2 + 0x15) == 0)

void* eax_10 = *(edi_2 + 4)
*(eax_10 + 4) = eax_10
int32_t* eax_11 = *(edi_2 + 4)
*eax_11 = eax_11
void* eax_12 = *(edi_2 + 4)
*(eax_12 + 8) = eax_12
*(edi_2 + 8) = 0
int32_t* ecx_4 = arg1[3]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))(eax_2)
    arg1[3] = 0

int32_t* ecx_5 = arg1[4]

if (ecx_5 != 0)
    (*(*ecx_5 + 4))(eax_2)
    arg1[4] = 0

int32_t* ecx_6 = arg1[2]

if (ecx_6 != 0)
    (*(*ecx_6 + 4))(eax_2)
    arg1[2] = 0

int32_t* ecx_7 = arg1[1]

if (ecx_7 != 0)
    (*(*ecx_7 + 4))(eax_2)
    arg1[1] = 0

arg1[5] = 0
void* var_14 = &arg1[0xa]
var_4.b = 2
int32_t*** eax_17 = arg1[0xb]
void var_10
sub_4365a0(&arg1[0xa], &var_10, *eax_17, eax_17)
int32_t var_2c_5 = arg1[0xb]
sub_6b4d5b()
arg1 = edi_2
int32_t var_4_1 = 3
int32_t*** eax_19 = *(edi_2 + 4)
sub_4365a0(edi_2, &var_10, *eax_19, eax_19)
int32_t var_2c_7 = *(edi_2 + 4)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
