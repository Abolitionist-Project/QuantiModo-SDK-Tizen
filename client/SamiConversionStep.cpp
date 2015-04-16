
#include "SamiConversionStep.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConversionStep::SamiConversionStep() {
    init();
}

SamiConversionStep::~SamiConversionStep() {
    this->cleanup();
}

void
SamiConversionStep::init() {
    pOperation = null;
    pValue = null;
    
}

void
SamiConversionStep::cleanup() {
    if(pOperation != null) {
        
        delete pOperation;
        pOperation = null;
    }
    if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
    
}


SamiConversionStep*
SamiConversionStep::fromJson(String* json) {
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
SamiConversionStep::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pOperationKey = new JsonString(L"operation");
        IJsonValue* pOperationVal = null;
        pJsonObject->GetValue(pOperationKey, pOperationVal);
        if(pOperationVal != null) {
            
            pOperation = new String();
            jsonToValue(pOperation, pOperationVal, L"String", L"String");
        }
        delete pOperationKey;
        JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Double();
            jsonToValue(pValue, pValueVal, L"Double", L"Double");
        }
        delete pValueKey;
        
    }
}

SamiConversionStep::SamiConversionStep(String* json) {
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
SamiConversionStep::asJson ()
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
SamiConversionStep::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pOperationKey = new JsonString(L"operation");
    pJsonObject->Add(pOperationKey, toJson(getPOperation(), "String", ""));

    
    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Double", ""));

    
    return pJsonObject;
}

String*
SamiConversionStep::getPOperation() {
    return pOperation;
}
void
SamiConversionStep::setPOperation(String* pOperation) {
    this->pOperation = pOperation;
}

Double*
SamiConversionStep::getPValue() {
    return pValue;
}
void
SamiConversionStep::setPValue(Double* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

