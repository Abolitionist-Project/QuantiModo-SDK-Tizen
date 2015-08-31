
#include "SamiUserTokenFailedResponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserTokenFailedResponse::SamiUserTokenFailedResponse() {
    init();
}

SamiUserTokenFailedResponse::~SamiUserTokenFailedResponse() {
    this->cleanup();
}

void
SamiUserTokenFailedResponse::init() {
    pCode = null;
    pMessage = null;
    pSuccess = null;
    
}

void
SamiUserTokenFailedResponse::cleanup() {
    if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
    if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
    if(pSuccess != null) {
        
        delete pSuccess;
        pSuccess = null;
    }
    
}


SamiUserTokenFailedResponse*
SamiUserTokenFailedResponse::fromJson(String* json) {
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
SamiUserTokenFailedResponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCodeKey = new JsonString(L"code");
        IJsonValue* pCodeVal = null;
        pJsonObject->GetValue(pCodeKey, pCodeVal);
        if(pCodeVal != null) {
            
            pCode = null;
            jsonToValue(pCode, pCodeVal, L"Integer", L"Integer");
        }
        delete pCodeKey;
        JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
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

SamiUserTokenFailedResponse::SamiUserTokenFailedResponse(String* json) {
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
SamiUserTokenFailedResponse::asJson ()
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
SamiUserTokenFailedResponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "Integer", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    
    JsonString *pSuccessKey = new JsonString(L"success");
    pJsonObject->Add(pSuccessKey, toJson(getPSuccess(), "Boolean", ""));

    
    return pJsonObject;
}

Integer*
SamiUserTokenFailedResponse::getPCode() {
    return pCode;
}
void
SamiUserTokenFailedResponse::setPCode(Integer* pCode) {
    this->pCode = pCode;
}

String*
SamiUserTokenFailedResponse::getPMessage() {
    return pMessage;
}
void
SamiUserTokenFailedResponse::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

Boolean*
SamiUserTokenFailedResponse::getPSuccess() {
    return pSuccess;
}
void
SamiUserTokenFailedResponse::setPSuccess(Boolean* pSuccess) {
    this->pSuccess = pSuccess;
}



} /* namespace Swagger */

