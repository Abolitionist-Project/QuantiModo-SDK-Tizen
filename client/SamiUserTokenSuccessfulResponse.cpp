
#include "SamiUserTokenSuccessfulResponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserTokenSuccessfulResponse::SamiUserTokenSuccessfulResponse() {
    init();
}

SamiUserTokenSuccessfulResponse::~SamiUserTokenSuccessfulResponse() {
    this->cleanup();
}

void
SamiUserTokenSuccessfulResponse::init() {
    pCode = null;
    pMessage = null;
    pUser = null;
    
}

void
SamiUserTokenSuccessfulResponse::cleanup() {
    if(pCode != null) {
        
        delete pCode;
        pCode = null;
    }
    if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
    }
    if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
    
}


SamiUserTokenSuccessfulResponse*
SamiUserTokenSuccessfulResponse::fromJson(String* json) {
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
SamiUserTokenSuccessfulResponse::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiUserTokenSuccessfulResponseInnerUserField();
            jsonToValue(pUser, pUserVal, L"SamiUserTokenSuccessfulResponseInnerUserField", L"SamiUserTokenSuccessfulResponseInnerUserField");
        }
        delete pUserKey;
        
    }
}

SamiUserTokenSuccessfulResponse::SamiUserTokenSuccessfulResponse(String* json) {
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
SamiUserTokenSuccessfulResponse::asJson ()
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
SamiUserTokenSuccessfulResponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCodeKey = new JsonString(L"code");
    pJsonObject->Add(pCodeKey, toJson(getPCode(), "Integer", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    
    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiUserTokenSuccessfulResponseInnerUserField", ""));

    
    return pJsonObject;
}

Integer*
SamiUserTokenSuccessfulResponse::getPCode() {
    return pCode;
}
void
SamiUserTokenSuccessfulResponse::setPCode(Integer* pCode) {
    this->pCode = pCode;
}

String*
SamiUserTokenSuccessfulResponse::getPMessage() {
    return pMessage;
}
void
SamiUserTokenSuccessfulResponse::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

SamiUserTokenSuccessfulResponseInnerUserField*
SamiUserTokenSuccessfulResponse::getPUser() {
    return pUser;
}
void
SamiUserTokenSuccessfulResponse::setPUser(SamiUserTokenSuccessfulResponseInnerUserField* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

