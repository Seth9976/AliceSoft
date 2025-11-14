// 函数: sub_620da0
// 地址: 0x620da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int128_t* i_4 = (*(*(arg1 + 0xb0) + 0x10))()
int128_t* result = (*(*(arg1 + 0xb0) + 0x14))()

if (i_4 s<= 0 || result s<= 0)
    return result

sub_62b070(result, 0, 0, arg1 + 0xb0, i_4, result, (*(arg1 + 0x1a4)).b, (*(arg1 + 0x1a8)).b, 
    (*(arg1 + 0x1ac)).b)
int16_t* ebx_1 = (*(*(arg1 + 0xb0) + 8))(0, 0)
(*(*(arg1 + 0xb0) + 0x1c))()

if (i_4 s> 0)
    int128_t* i_2 = i_4
    int128_t* i
    
    do
        *ebx_1 = 0
        ebx_1[1].b = 0
        ebx_1 += 3
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t eax_6 = *(arg1 + 0x1c0)
sub_62b070(eax_6, 0, result - 1, arg1 + 0xb0, i_4, 1, (*(arg1 + 0x1bc)).b, eax_6.b, 
    (*(arg1 + 0x1c4)).b)
int16_t* ebx_2 = (*(*(arg1 + 0xb0) + 8))(0, 0)
void* i_3 = result - 1
int32_t eax_11 = (*(*(arg1 + 0xb0) + 0x1c))() - 3

if (i_3 s> 0)
    void* i_1
    
    do
        *ebx_2 = 0
        ebx_2[1].b = 0
        ebx_2 = ebx_2 + 3 + eax_11
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

sub_62b070(result - 1, i_4 - 1, 0, arg1 + 0xb0, 1, result - 1, (*(arg1 + 0x1bc)).b, 
    (*(arg1 + 0x1c0)).b, (*(arg1 + 0x1c4)).b)
int32_t eax_15 = *(arg1 + 0x1c4)
sub_62b070(eax_15, 0, result - 2, arg1 + 0xb0, i_4, 1, (*(arg1 + 0x1bc)).b, (*(arg1 + 0x1c0)).b, 
    eax_15.b)
int128_t* var_4 = (*(*(arg1 + 0xe8) + 0x14))()
int32_t eax_19
int32_t edx_14
eax_19, edx_14 = (*(*(arg1 + 0xe8) + 0x10))()

if (i_4 s> eax_19)
    int128_t* i_5
    i_5, edx_14 = (*(*(arg1 + 0xe8) + 0x10))()
    i_4 = i_5

return sub_61aee0(arg1 + 0xe8, edx_14, arg1 + 0xb0, i_4, var_4)
