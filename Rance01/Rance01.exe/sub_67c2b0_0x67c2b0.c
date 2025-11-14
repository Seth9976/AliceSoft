// 函数: sub_67c2b0
// 地址: 0x67c2b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
bool cond:0 = *(ebp + 0x20) != 0xffffffff
bool cond:1 = *(ebp + 0x24) != 0xffffffff
arg1.b = cond:0
int32_t ebx

if (cond:0 != 0 || cond:1 != 0)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_c = 0
int32_t var_10 = 0
char* eax_1 = data_797d44

if (sub_424db0(eax_1) != 0)
    (***(eax_1 + 8))(&var_c, &var_10)

void* esi_1 = *(ebp + 0x18)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_6 = sub_414e30(esi_1)
int32_t* ecx_2 = *(esi_1 + 0x38)

if (ecx_2 != 0 && eax_6[2] == 0)
    eax_6[8] = ecx_2
    eax_6[2] = (**ecx_2)(1)

eax_6[3] = *(esi_1 + 0x30)
eax_6[4] = esi_1
void* esi_2 = *(ebp + 0x14)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** result = sub_414e30(esi_2)
int32_t* ecx_4 = *(esi_2 + 0x38)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** result_3 = result

if (ecx_4 != 0 && result_3[2] == 0)
    result_3[8] = ecx_4
    result = (**ecx_4)(1)
    result_3[2] = result

result_3[3] = *(esi_2 + 0x30)
result_3[4] = esi_2

if (ebx.b != 0)
    if (*(ebp + 0x1c) == 0xffffffff)
        int32_t* eax_11 = data_797da0
        *(ebp + 0x1c) = 0
        void* eax_12 = sub_5f7370(*eax_11, result_3[2]->vFunc_1)
        
        if (eax_12 != 0)
            int32_t edi_2 = 2
            
            if ((*(**(*(eax_12 + 0xb4) + 8) + 0x34))() == 0)
                edi_2 = 1
            
            if (*(eax_12 + 0x24) != edi_2)
                if (edi_2 u<= 3 && *(*(*(eax_12 + 0xc) + 0x22c) + (edi_2 << 2)) == 1)
                    (*(**(*(eax_12 + 0xb4) + (edi_2 << 2)) + 0x58))()
                
                *(eax_12 + 0x24) = edi_2
                *(eax_12 + 0x10) = 1
        
        void* eax_18 = sub_5f7370(*data_797da0, eax_6[2]->vFunc_1)
        
        if (eax_18 != 0)
            int32_t edi_4 = 2
            
            if ((*(**(*(eax_18 + 0xb4) + 8) + 0x34))() == 0)
                edi_4 = 1
            
            if (*(eax_18 + 0x24) != edi_4)
                if (edi_4 u<= 3 && *(*(*(eax_18 + 0xc) + 0x22c) + (edi_4 << 2)) == 1)
                    (*(**(*(eax_18 + 0xb4) + (edi_4 << 2)) + 0x58))()
                
                *(eax_18 + 0x24) = edi_4
                *(eax_18 + 0x10) = 1
        
        int32_t* i = *(ebp + 0x38)
        int32_t edi_5 = var_10
        int32_t ebx_1 = var_c
        
        for (; i != *(ebp + 0x3c); i = &i[1])
            (***i)(*(ebp + 0x48), ebx_1, edi_5)
    
    result = *(ebp + 0x1c)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** result_1 = result
    
    if (arg1.b != 0)
        result += *(ebp + 0x20)
        result_1 = result
    
    if (cond:1 != 0)
        result += *(ebp + 0x24)
        result_1 = result
    
    if (*(ebp + 0x29) == 0)
        void* eax_25 = sub_5f7370(*data_797da0, result_3[2]->vFunc_1)
        
        if (eax_25 != 0)
            int32_t edi_7 = 2
            
            if ((*(**(*(eax_25 + 0xb4) + 8) + 0x34))() == 0)
                edi_7 = 1
            
            if (*(eax_25 + 0x24) != edi_7)
                if (edi_7 u<= 3)
                    void* eax_28
                    eax_28.b = *(*(*(eax_25 + 0xc) + 0x22c) + (edi_7 << 2)) == 1
                    
                    if (eax_28.b != 0)
                        (*(**(*(eax_25 + 0xb4) + (edi_7 << 2)) + 0x58))()
                
                *(eax_25 + 0x24) = edi_7
                *(eax_25 + 0x10) = 1
        
        result = sub_5f7370(*data_797da0, eax_6[2]->vFunc_1)
        struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** result_2 = result
        
        if (result_2 != 0)
            int32_t edi_9 = 2
            result = (*(*result_2[0x2d]->vFunc_2 + 0x34))()
            
            if (result.b == 0)
                edi_9 = 1
            
            if (result_2[9] != edi_9)
                if (edi_9 u<= 3)
                    result.b = *(*(result_2[3] + 0x22c) + (edi_9 << 2)) == 1
                    
                    if (result.b != 0)
                        result = (*(**(result_2[0x2d] + (edi_9 << 2)) + 0x58))()
                
                result_2[9] = edi_9
                result_2[4].b = 1
    
    int32_t* i_1 = *(ebp + 0x38)
    int32_t edi_10 = var_10
    int32_t ebx_2 = var_c
    
    for (; i_1 != *(ebp + 0x3c); i_1 = &i_1[1])
        result = (*(**i_1 + 0x14))(*(ebp + 0x48), ebx_2, edi_10, result_1)
else if (*(ebp + 0x1c) != 0xffffffff)
    void* eax_38 = sub_5f7370(*data_797da0, result_3[2]->vFunc_1)
    
    if (eax_38 != 0)
        (*(**(*(eax_38 + 0xb4) + 4) + 0x34))()
        
        if (*(eax_38 + 0x24) != 1)
            void* eax_40
            eax_40.b = *(*(*(eax_38 + 0xc) + 0x22c) + 4) == 1
            
            if (eax_40.b != 0)
                (*(**(*(eax_38 + 0xb4) + 4) + 0x58))()
            
            *(eax_38 + 0x24) = 1
            *(eax_38 + 0x10) = 1
    
    void* eax_43 = sub_5f7370(*data_797da0, eax_6[2]->vFunc_1)
    
    if (eax_43 != 0)
        (*(**(*(eax_43 + 0xb4) + 4) + 0x34))()
        
        if (*(eax_43 + 0x24) != 1)
            if (*(*(*(eax_43 + 0xc) + 0x22c) + 4) == 1)
                (*(**(*(eax_43 + 0xb4) + 4) + 0x58))()
            
            *(eax_43 + 0x24) = 1
            *(eax_43 + 0x10) = 1
    
    int32_t ecx_39 = var_10
    int32_t edx_31 = var_c
    *(ebp + 0x1c) = 0xffffffff
    return sub_41d620(ebp + 0x38, edx_31, ecx_39)

return result
