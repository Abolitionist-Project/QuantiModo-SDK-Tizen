
#include "SamiUserTokenRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserTokenRequest::SamiUserTokenRequest() {
    init();
}

SamiUserTokenRequest::~SamiUserTokenRequest() {
    this->cleanup();
}

void
SamiUserTokenRequest::init() {
    pUser = null;
    pOrganization_access_token = null;
    
}

void
SamiUserTokenRequest::cleanup() {
    if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
    if(pOrganization_access_token != null) {
        
        delete pOrganization_access_token;
        pOrganization_access_token = null;
    }
    
}


SamiUserTokenRequest*
SamiUserTokenRequest::fromJson(String* json) {
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
SamiUserTokenRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiUserTokenRequestInnerUserField();
            jsonToValue(pUser, pUserVal, L"SamiUserTokenRequestInnerUserField", L"SamiUserTokenRequestInnerUserField");
        }
        delete pUserKey;
        JsonString* pOrganization_access_tokenKey = new JsonString(L"organization_access_token");
        IJsonValue* pOrganization_access_tokenVal = null;
        pJsonObject->GetValue(pOrganization_access_tokenKey, pOrganization_access_tokenVal);
        if(pOrganization_access_tokenVal != null) {
            
            pOrganization_access_token = new String();
            jsonToValue(pOrganization_access_token, pOrganization_access_tokenVal, L"String", L"String");
        }
        delete pOrganization_access_tokenKey;
        
    }
}

SamiUserTokenRequest::SamiUserTokenRequest(String* json) {
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
SamiUserTokenRequest::asJson ()
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
SamiUserTokenRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiUserTokenRequestInnerUserField", ""));

    
    JsonString *pOrganization_access_tokenKey = new JsonString(L"organization_access_token");
    pJsonObject->Add(pOrganization_access_tokenKey, toJson(getPOrganizationAccessToken(), "String", ""));

    
    return pJsonObject;
}

SamiUserTokenRequestInnerUserField*
SamiUserTokenRequest::getPUser() {
    return pUser;
}
void
SamiUserTokenRequest::setPUser(SamiUserTokenRequestInnerUserField* pUser) {
    this->pUser = pUser;
}

String*
SamiUserTokenRequest::getPOrganizationAccessToken() {
    return pOrganization_access_token;
}
void
SamiUserTokenRequest::setPOrganizationAccessToken(String* pOrganization_access_token) {
    this->pOrganization_access_token = pOrganization_access_token;
}



} /* namespace Swagger */

