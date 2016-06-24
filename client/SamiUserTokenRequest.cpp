
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
pOrganizationAccessToken = null;
}

void
SamiUserTokenRequest::cleanup() {
    if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
if(pOrganizationAccessToken != null) {
        
        delete pOrganizationAccessToken;
        pOrganizationAccessToken = null;
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
JsonString* pOrganizationAccessTokenKey = new JsonString(L"organizationAccessToken");
        IJsonValue* pOrganizationAccessTokenVal = null;
        pJsonObject->GetValue(pOrganizationAccessTokenKey, pOrganizationAccessTokenVal);
        if(pOrganizationAccessTokenVal != null) {
            
            pOrganizationAccessToken = new String();
            jsonToValue(pOrganizationAccessToken, pOrganizationAccessTokenVal, L"String", L"String");
        }
        delete pOrganizationAccessTokenKey;
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

    JsonString *pOrganizationAccessTokenKey = new JsonString(L"organizationAccessToken");
    pJsonObject->Add(pOrganizationAccessTokenKey, toJson(getPOrganizationAccessToken(), "String", ""));

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
    return pOrganizationAccessToken;
}
void
SamiUserTokenRequest::setPOrganizationAccessToken(String* pOrganizationAccessToken) {
    this->pOrganizationAccessToken = pOrganizationAccessToken;
}



} /* namespace Swagger */

