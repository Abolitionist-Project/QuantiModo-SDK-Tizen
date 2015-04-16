
#include "SamiUserTokenSuccessfulResponseInnerUserField.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserTokenSuccessfulResponseInnerUserField::SamiUserTokenSuccessfulResponseInnerUserField() {
    init();
}

SamiUserTokenSuccessfulResponseInnerUserField::~SamiUserTokenSuccessfulResponseInnerUserField() {
    this->cleanup();
}

void
SamiUserTokenSuccessfulResponseInnerUserField::init() {
    p_id = null;
    pAccess_token = null;
    
}

void
SamiUserTokenSuccessfulResponseInnerUserField::cleanup() {
    if(p_id != null) {
        
        delete p_id;
        p_id = null;
    }
    if(pAccess_token != null) {
        
        delete pAccess_token;
        pAccess_token = null;
    }
    
}


SamiUserTokenSuccessfulResponseInnerUserField*
SamiUserTokenSuccessfulResponseInnerUserField::fromJson(String* json) {
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
SamiUserTokenSuccessfulResponseInnerUserField::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* p_idKey = new JsonString(L"_id");
        IJsonValue* p_idVal = null;
        pJsonObject->GetValue(p_idKey, p_idVal);
        if(p_idVal != null) {
            
            p_id = new Integer();
            jsonToValue(p_id, p_idVal, L"Integer", L"Integer");
        }
        delete p_idKey;
        JsonString* pAccess_tokenKey = new JsonString(L"access_token");
        IJsonValue* pAccess_tokenVal = null;
        pJsonObject->GetValue(pAccess_tokenKey, pAccess_tokenVal);
        if(pAccess_tokenVal != null) {
            
            pAccess_token = new String();
            jsonToValue(pAccess_token, pAccess_tokenVal, L"String", L"String");
        }
        delete pAccess_tokenKey;
        
    }
}

SamiUserTokenSuccessfulResponseInnerUserField::SamiUserTokenSuccessfulResponseInnerUserField(String* json) {
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
SamiUserTokenSuccessfulResponseInnerUserField::asJson ()
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
SamiUserTokenSuccessfulResponseInnerUserField::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *p_idKey = new JsonString(L"_id");
    pJsonObject->Add(p_idKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pAccess_tokenKey = new JsonString(L"access_token");
    pJsonObject->Add(pAccess_tokenKey, toJson(getPAccessToken(), "String", ""));

    
    return pJsonObject;
}

Integer*
SamiUserTokenSuccessfulResponseInnerUserField::getPId() {
    return p_id;
}
void
SamiUserTokenSuccessfulResponseInnerUserField::setPId(Integer* p_id) {
    this->p_id = p_id;
}

String*
SamiUserTokenSuccessfulResponseInnerUserField::getPAccessToken() {
    return pAccess_token;
}
void
SamiUserTokenSuccessfulResponseInnerUserField::setPAccessToken(String* pAccess_token) {
    this->pAccess_token = pAccess_token;
}



} /* namespace Swagger */

