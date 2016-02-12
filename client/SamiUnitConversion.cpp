
#include "SamiUnitConversion.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUnitConversion::SamiUnitConversion() {
    init();
}

SamiUnitConversion::~SamiUnitConversion() {
    this->cleanup();
}

void
SamiUnitConversion::init() {
    pUnit_id = null;
    pStep_number = null;
    pOperation = null;
    pValue = null;
    pCreated_at = null;
    pUpdated_at = null;
    
}

void
SamiUnitConversion::cleanup() {
    if(pUnit_id != null) {
        
        delete pUnit_id;
        pUnit_id = null;
    }
    if(pStep_number != null) {
        
        delete pStep_number;
        pStep_number = null;
    }
    if(pOperation != null) {
        
        delete pOperation;
        pOperation = null;
    }
    if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
    
}


SamiUnitConversion*
SamiUnitConversion::fromJson(String* json) {
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
SamiUnitConversion::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUnit_idKey = new JsonString(L"unit_id");
        IJsonValue* pUnit_idVal = null;
        pJsonObject->GetValue(pUnit_idKey, pUnit_idVal);
        if(pUnit_idVal != null) {
            
            pUnit_id = new Integer();
            jsonToValue(pUnit_id, pUnit_idVal, L"Integer", L"Integer");
        }
        delete pUnit_idKey;
        JsonString* pStep_numberKey = new JsonString(L"step_number");
        IJsonValue* pStep_numberVal = null;
        pJsonObject->GetValue(pStep_numberKey, pStep_numberVal);
        if(pStep_numberVal != null) {
            
            pStep_number = new Boolean(false);
            jsonToValue(pStep_number, pStep_numberVal, L"Boolean", L"Boolean");
        }
        delete pStep_numberKey;
        JsonString* pOperationKey = new JsonString(L"operation");
        IJsonValue* pOperationVal = null;
        pJsonObject->GetValue(pOperationKey, pOperationVal);
        if(pOperationVal != null) {
            
            pOperation = new Boolean(false);
            jsonToValue(pOperation, pOperationVal, L"Boolean", L"Boolean");
        }
        delete pOperationKey;
        JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Float();
            jsonToValue(pValue, pValueVal, L"Float", L"Float");
        }
        delete pValueKey;
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
        
    }
}

SamiUnitConversion::SamiUnitConversion(String* json) {
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
SamiUnitConversion::asJson ()
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
SamiUnitConversion::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pUnit_idKey = new JsonString(L"unit_id");
    pJsonObject->Add(pUnit_idKey, toJson(getPUnitId(), "Integer", ""));

    
    JsonString *pStep_numberKey = new JsonString(L"step_number");
    pJsonObject->Add(pStep_numberKey, toJson(getPStepNumber(), "Boolean", ""));

    
    JsonString *pOperationKey = new JsonString(L"operation");
    pJsonObject->Add(pOperationKey, toJson(getPOperation(), "Boolean", ""));

    
    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Float", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    return pJsonObject;
}

Integer*
SamiUnitConversion::getPUnitId() {
    return pUnit_id;
}
void
SamiUnitConversion::setPUnitId(Integer* pUnit_id) {
    this->pUnit_id = pUnit_id;
}

Boolean*
SamiUnitConversion::getPStepNumber() {
    return pStep_number;
}
void
SamiUnitConversion::setPStepNumber(Boolean* pStep_number) {
    this->pStep_number = pStep_number;
}

Boolean*
SamiUnitConversion::getPOperation() {
    return pOperation;
}
void
SamiUnitConversion::setPOperation(Boolean* pOperation) {
    this->pOperation = pOperation;
}

Float*
SamiUnitConversion::getPValue() {
    return pValue;
}
void
SamiUnitConversion::setPValue(Float* pValue) {
    this->pValue = pValue;
}

DateTime*
SamiUnitConversion::getPCreatedAt() {
    return pCreated_at;
}
void
SamiUnitConversion::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiUnitConversion::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiUnitConversion::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

