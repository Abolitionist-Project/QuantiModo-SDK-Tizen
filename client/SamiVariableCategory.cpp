
#include "SamiVariableCategory.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVariableCategory::SamiVariableCategory() {
    init();
}

SamiVariableCategory::~SamiVariableCategory() {
    this->cleanup();
}

void
SamiVariableCategory::init() {
    pId = null;
    pName = null;
    pFilling_value = null;
    pMaximum_allowed_value = null;
    pMinimum_allowed_value = null;
    pDuration_of_action = null;
    pOnset_delay = null;
    pCombination_operation = null;
    pUpdated = null;
    pCause_only = null;
    pPublic = null;
    pOutcome = null;
    pCreated_at = null;
    pUpdated_at = null;
    pImage_url = null;
    pDefault_unit_id = null;
    
}

void
SamiVariableCategory::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pFilling_value != null) {
        
        delete pFilling_value;
        pFilling_value = null;
    }
    if(pMaximum_allowed_value != null) {
        
        delete pMaximum_allowed_value;
        pMaximum_allowed_value = null;
    }
    if(pMinimum_allowed_value != null) {
        
        delete pMinimum_allowed_value;
        pMinimum_allowed_value = null;
    }
    if(pDuration_of_action != null) {
        
        delete pDuration_of_action;
        pDuration_of_action = null;
    }
    if(pOnset_delay != null) {
        
        delete pOnset_delay;
        pOnset_delay = null;
    }
    if(pCombination_operation != null) {
        
        delete pCombination_operation;
        pCombination_operation = null;
    }
    if(pUpdated != null) {
        
        delete pUpdated;
        pUpdated = null;
    }
    if(pCause_only != null) {
        
        delete pCause_only;
        pCause_only = null;
    }
    if(pPublic != null) {
        
        delete pPublic;
        pPublic = null;
    }
    if(pOutcome != null) {
        
        delete pOutcome;
        pOutcome = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
    if(pImage_url != null) {
        
        delete pImage_url;
        pImage_url = null;
    }
    if(pDefault_unit_id != null) {
        
        delete pDefault_unit_id;
        pDefault_unit_id = null;
    }
    
}


SamiVariableCategory*
SamiVariableCategory::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiVariableCategory::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = null;
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pFilling_valueKey = new JsonString(L"filling_value");
        IJsonValue* pFilling_valueVal = null;
        pJsonObject->GetValue(pFilling_valueKey, pFilling_valueVal);
        if(pFilling_valueVal != null) {
            
            pFilling_value = new Float();
            jsonToValue(pFilling_value, pFilling_valueVal, L"Float", L"Float");
        }
        delete pFilling_valueKey;
        JsonString* pMaximum_allowed_valueKey = new JsonString(L"maximum_allowed_value");
        IJsonValue* pMaximum_allowed_valueVal = null;
        pJsonObject->GetValue(pMaximum_allowed_valueKey, pMaximum_allowed_valueVal);
        if(pMaximum_allowed_valueVal != null) {
            
            pMaximum_allowed_value = new Float();
            jsonToValue(pMaximum_allowed_value, pMaximum_allowed_valueVal, L"Float", L"Float");
        }
        delete pMaximum_allowed_valueKey;
        JsonString* pMinimum_allowed_valueKey = new JsonString(L"minimum_allowed_value");
        IJsonValue* pMinimum_allowed_valueVal = null;
        pJsonObject->GetValue(pMinimum_allowed_valueKey, pMinimum_allowed_valueVal);
        if(pMinimum_allowed_valueVal != null) {
            
            pMinimum_allowed_value = new Float();
            jsonToValue(pMinimum_allowed_value, pMinimum_allowed_valueVal, L"Float", L"Float");
        }
        delete pMinimum_allowed_valueKey;
        JsonString* pDuration_of_actionKey = new JsonString(L"duration_of_action");
        IJsonValue* pDuration_of_actionVal = null;
        pJsonObject->GetValue(pDuration_of_actionKey, pDuration_of_actionVal);
        if(pDuration_of_actionVal != null) {
            
            pDuration_of_action = new Integer();
            jsonToValue(pDuration_of_action, pDuration_of_actionVal, L"Integer", L"Integer");
        }
        delete pDuration_of_actionKey;
        JsonString* pOnset_delayKey = new JsonString(L"onset_delay");
        IJsonValue* pOnset_delayVal = null;
        pJsonObject->GetValue(pOnset_delayKey, pOnset_delayVal);
        if(pOnset_delayVal != null) {
            
            pOnset_delay = new Integer();
            jsonToValue(pOnset_delay, pOnset_delayVal, L"Integer", L"Integer");
        }
        delete pOnset_delayKey;
        JsonString* pCombination_operationKey = new JsonString(L"combination_operation");
        IJsonValue* pCombination_operationVal = null;
        pJsonObject->GetValue(pCombination_operationKey, pCombination_operationVal);
        if(pCombination_operationVal != null) {
            
            pCombination_operation = new String();
            jsonToValue(pCombination_operation, pCombination_operationVal, L"String", L"String");
        }
        delete pCombination_operationKey;
        JsonString* pUpdatedKey = new JsonString(L"updated");
        IJsonValue* pUpdatedVal = null;
        pJsonObject->GetValue(pUpdatedKey, pUpdatedVal);
        if(pUpdatedVal != null) {
            
            pUpdated = new Integer();
            jsonToValue(pUpdated, pUpdatedVal, L"Integer", L"Integer");
        }
        delete pUpdatedKey;
        JsonString* pCause_onlyKey = new JsonString(L"cause_only");
        IJsonValue* pCause_onlyVal = null;
        pJsonObject->GetValue(pCause_onlyKey, pCause_onlyVal);
        if(pCause_onlyVal != null) {
            
            pCause_only = new Boolean(false);
            jsonToValue(pCause_only, pCause_onlyVal, L"Boolean", L"Boolean");
        }
        delete pCause_onlyKey;
        JsonString* pPublicKey = new JsonString(L"public");
        IJsonValue* pPublicVal = null;
        pJsonObject->GetValue(pPublicKey, pPublicVal);
        if(pPublicVal != null) {
            
            pPublic = new Integer();
            jsonToValue(pPublic, pPublicVal, L"Integer", L"Integer");
        }
        delete pPublicKey;
        JsonString* pOutcomeKey = new JsonString(L"outcome");
        IJsonValue* pOutcomeVal = null;
        pJsonObject->GetValue(pOutcomeKey, pOutcomeVal);
        if(pOutcomeVal != null) {
            
            pOutcome = new Boolean(false);
            jsonToValue(pOutcome, pOutcomeVal, L"Boolean", L"Boolean");
        }
        delete pOutcomeKey;
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new DateTime();
            jsonToValue(pCreated_at, pCreated_atVal, L"DateTime", L"DateTime");
        }
        delete pCreated_atKey;
        JsonString* pUpdated_atKey = new JsonString(L"updated_at");
        IJsonValue* pUpdated_atVal = null;
        pJsonObject->GetValue(pUpdated_atKey, pUpdated_atVal);
        if(pUpdated_atVal != null) {
            
            pUpdated_at = new DateTime();
            jsonToValue(pUpdated_at, pUpdated_atVal, L"DateTime", L"DateTime");
        }
        delete pUpdated_atKey;
        JsonString* pImage_urlKey = new JsonString(L"image_url");
        IJsonValue* pImage_urlVal = null;
        pJsonObject->GetValue(pImage_urlKey, pImage_urlVal);
        if(pImage_urlVal != null) {
            
            pImage_url = new String();
            jsonToValue(pImage_url, pImage_urlVal, L"String", L"String");
        }
        delete pImage_urlKey;
        JsonString* pDefault_unit_idKey = new JsonString(L"default_unit_id");
        IJsonValue* pDefault_unit_idVal = null;
        pJsonObject->GetValue(pDefault_unit_idKey, pDefault_unit_idVal);
        if(pDefault_unit_idVal != null) {
            
            pDefault_unit_id = new Integer();
            jsonToValue(pDefault_unit_id, pDefault_unit_idVal, L"Integer", L"Integer");
        }
        delete pDefault_unit_idKey;
        
    }
}

SamiVariableCategory::SamiVariableCategory(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiVariableCategory::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiVariableCategory::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pFilling_valueKey = new JsonString(L"filling_value");
    pJsonObject->Add(pFilling_valueKey, toJson(getPFillingValue(), "Float", ""));

    
    JsonString *pMaximum_allowed_valueKey = new JsonString(L"maximum_allowed_value");
    pJsonObject->Add(pMaximum_allowed_valueKey, toJson(getPMaximumAllowedValue(), "Float", ""));

    
    JsonString *pMinimum_allowed_valueKey = new JsonString(L"minimum_allowed_value");
    pJsonObject->Add(pMinimum_allowed_valueKey, toJson(getPMinimumAllowedValue(), "Float", ""));

    
    JsonString *pDuration_of_actionKey = new JsonString(L"duration_of_action");
    pJsonObject->Add(pDuration_of_actionKey, toJson(getPDurationOfAction(), "Integer", ""));

    
    JsonString *pOnset_delayKey = new JsonString(L"onset_delay");
    pJsonObject->Add(pOnset_delayKey, toJson(getPOnsetDelay(), "Integer", ""));

    
    JsonString *pCombination_operationKey = new JsonString(L"combination_operation");
    pJsonObject->Add(pCombination_operationKey, toJson(getPCombinationOperation(), "String", ""));

    
    JsonString *pUpdatedKey = new JsonString(L"updated");
    pJsonObject->Add(pUpdatedKey, toJson(getPUpdated(), "Integer", ""));

    
    JsonString *pCause_onlyKey = new JsonString(L"cause_only");
    pJsonObject->Add(pCause_onlyKey, toJson(getPCauseOnly(), "Boolean", ""));

    
    JsonString *pPublicKey = new JsonString(L"public");
    pJsonObject->Add(pPublicKey, toJson(getPPublic(), "Integer", ""));

    
    JsonString *pOutcomeKey = new JsonString(L"outcome");
    pJsonObject->Add(pOutcomeKey, toJson(getPOutcome(), "Boolean", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    JsonString *pImage_urlKey = new JsonString(L"image_url");
    pJsonObject->Add(pImage_urlKey, toJson(getPImageUrl(), "String", ""));

    
    JsonString *pDefault_unit_idKey = new JsonString(L"default_unit_id");
    pJsonObject->Add(pDefault_unit_idKey, toJson(getPDefaultUnitId(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiVariableCategory::getPId() {
    return pId;
}
void
SamiVariableCategory::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiVariableCategory::getPName() {
    return pName;
}
void
SamiVariableCategory::setPName(String* pName) {
    this->pName = pName;
}

Float*
SamiVariableCategory::getPFillingValue() {
    return pFilling_value;
}
void
SamiVariableCategory::setPFillingValue(Float* pFilling_value) {
    this->pFilling_value = pFilling_value;
}

Float*
SamiVariableCategory::getPMaximumAllowedValue() {
    return pMaximum_allowed_value;
}
void
SamiVariableCategory::setPMaximumAllowedValue(Float* pMaximum_allowed_value) {
    this->pMaximum_allowed_value = pMaximum_allowed_value;
}

Float*
SamiVariableCategory::getPMinimumAllowedValue() {
    return pMinimum_allowed_value;
}
void
SamiVariableCategory::setPMinimumAllowedValue(Float* pMinimum_allowed_value) {
    this->pMinimum_allowed_value = pMinimum_allowed_value;
}

Integer*
SamiVariableCategory::getPDurationOfAction() {
    return pDuration_of_action;
}
void
SamiVariableCategory::setPDurationOfAction(Integer* pDuration_of_action) {
    this->pDuration_of_action = pDuration_of_action;
}

Integer*
SamiVariableCategory::getPOnsetDelay() {
    return pOnset_delay;
}
void
SamiVariableCategory::setPOnsetDelay(Integer* pOnset_delay) {
    this->pOnset_delay = pOnset_delay;
}

String*
SamiVariableCategory::getPCombinationOperation() {
    return pCombination_operation;
}
void
SamiVariableCategory::setPCombinationOperation(String* pCombination_operation) {
    this->pCombination_operation = pCombination_operation;
}

Integer*
SamiVariableCategory::getPUpdated() {
    return pUpdated;
}
void
SamiVariableCategory::setPUpdated(Integer* pUpdated) {
    this->pUpdated = pUpdated;
}

Boolean*
SamiVariableCategory::getPCauseOnly() {
    return pCause_only;
}
void
SamiVariableCategory::setPCauseOnly(Boolean* pCause_only) {
    this->pCause_only = pCause_only;
}

Integer*
SamiVariableCategory::getPPublic() {
    return pPublic;
}
void
SamiVariableCategory::setPPublic(Integer* pPublic) {
    this->pPublic = pPublic;
}

Boolean*
SamiVariableCategory::getPOutcome() {
    return pOutcome;
}
void
SamiVariableCategory::setPOutcome(Boolean* pOutcome) {
    this->pOutcome = pOutcome;
}

DateTime*
SamiVariableCategory::getPCreatedAt() {
    return pCreated_at;
}
void
SamiVariableCategory::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiVariableCategory::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiVariableCategory::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}

String*
SamiVariableCategory::getPImageUrl() {
    return pImage_url;
}
void
SamiVariableCategory::setPImageUrl(String* pImage_url) {
    this->pImage_url = pImage_url;
}

Integer*
SamiVariableCategory::getPDefaultUnitId() {
    return pDefault_unit_id;
}
void
SamiVariableCategory::setPDefaultUnitId(Integer* pDefault_unit_id) {
    this->pDefault_unit_id = pDefault_unit_id;
}



} /* namespace Swagger */

