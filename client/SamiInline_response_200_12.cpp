
#include "SamiInline_response_200_12.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInline_response_200_12::SamiInline_response_200_12() {
    init();
}

SamiInline_response_200_12::~SamiInline_response_200_12() {
    this->cleanup();
}

void
SamiInline_response_200_12::init() {
    pData = null;
    pSuccess = null;
    
}

void
SamiInline_response_200_12::cleanup() {
    if(pData != null) {
        pData->RemoveAll(true);
        delete pData;
        pData = null;
    }
    if(pSuccess != null) {
        
        delete pSuccess;
        pSuccess = null;
    }
    
}


SamiInline_response_200_12*
SamiInline_response_200_12::fromJson(String* json) {
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
SamiInline_response_200_12::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDataKey = new JsonString(L"data");
        IJsonValue* pDataVal = null;
        pJsonObject->GetValue(pDataKey, pDataVal);
        if(pDataVal != null) {
            pData = new ArrayList();
            
            jsonToValue(pData, pDataVal, L"IList", L"SamiCommonVariableRelationship");
        }
        delete pDataKey;
        JsonString* pSuccessKey = new JsonString(L"success");
        IJsonValue* pSuccessVal = null;
        pJsonObject->GetValue(pSuccessKey, pSuccessVal);
        if(pSuccessVal != null) {
            
            pSuccess = new Boolean(false);
            jsonToValue(pSuccess, pSuccessVal, L"Boolean", L"Boolean");
        }
        delete pSuccessKey;
        
    }
}

SamiInline_response_200_12::SamiInline_response_200_12(String* json) {
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
SamiInline_response_200_12::asJson ()
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
SamiInline_response_200_12::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pDataKey = new JsonString(L"data");
    pJsonObject->Add(pDataKey, toJson(getPData(), "SamiCommonVariableRelationship", "array"));

    
    JsonString *pSuccessKey = new JsonString(L"success");
    pJsonObject->Add(pSuccessKey, toJson(getPSuccess(), "Boolean", ""));

    
    return pJsonObject;
}

IList*
SamiInline_response_200_12::getPData() {
    return pData;
}
void
SamiInline_response_200_12::setPData(IList* pData) {
    this->pData = pData;
}

Boolean*
SamiInline_response_200_12::getPSuccess() {
    return pSuccess;
}
void
SamiInline_response_200_12::setPSuccess(Boolean* pSuccess) {
    this->pSuccess = pSuccess;
}



} /* namespace Swagger */

