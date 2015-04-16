
#include "SamiUser.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUser::SamiUser() {
    init();
}

SamiUser::~SamiUser() {
    this->cleanup();
}

void
SamiUser::init() {
    pId = null;
    pWpId = null;
    pDisplayName = null;
    pLoginName = null;
    pEmail = null;
    pToken = null;
    pAdministrator = null;
    
}

void
SamiUser::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pWpId != null) {
        
        delete pWpId;
        pWpId = null;
    }
    if(pDisplayName != null) {
        
        delete pDisplayName;
        pDisplayName = null;
    }
    if(pLoginName != null) {
        
        delete pLoginName;
        pLoginName = null;
    }
    if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
    if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
    if(pAdministrator != null) {
        
        delete pAdministrator;
        pAdministrator = null;
    }
    
}


SamiUser*
SamiUser::fromJson(String* json) {
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
SamiUser::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pWpIdKey = new JsonString(L"wpId");
        IJsonValue* pWpIdVal = null;
        pJsonObject->GetValue(pWpIdKey, pWpIdVal);
        if(pWpIdVal != null) {
            
            pWpId = new Integer();
            jsonToValue(pWpId, pWpIdVal, L"Integer", L"Integer");
        }
        delete pWpIdKey;
        JsonString* pDisplayNameKey = new JsonString(L"displayName");
        IJsonValue* pDisplayNameVal = null;
        pJsonObject->GetValue(pDisplayNameKey, pDisplayNameVal);
        if(pDisplayNameVal != null) {
            
            pDisplayName = new String();
            jsonToValue(pDisplayName, pDisplayNameVal, L"String", L"String");
        }
        delete pDisplayNameKey;
        JsonString* pLoginNameKey = new JsonString(L"loginName");
        IJsonValue* pLoginNameVal = null;
        pJsonObject->GetValue(pLoginNameKey, pLoginNameVal);
        if(pLoginNameVal != null) {
            
            pLoginName = new String();
            jsonToValue(pLoginName, pLoginNameVal, L"String", L"String");
        }
        delete pLoginNameKey;
        JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
        JsonString* pTokenKey = new JsonString(L"token");
        IJsonValue* pTokenVal = null;
        pJsonObject->GetValue(pTokenKey, pTokenVal);
        if(pTokenVal != null) {
            
            pToken = new String();
            jsonToValue(pToken, pTokenVal, L"String", L"String");
        }
        delete pTokenKey;
        JsonString* pAdministratorKey = new JsonString(L"administrator");
        IJsonValue* pAdministratorVal = null;
        pJsonObject->GetValue(pAdministratorKey, pAdministratorVal);
        if(pAdministratorVal != null) {
            
            pAdministrator = new Boolean(false);
            jsonToValue(pAdministrator, pAdministratorVal, L"Boolean", L"Boolean");
        }
        delete pAdministratorKey;
        
    }
}

SamiUser::SamiUser(String* json) {
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
SamiUser::asJson ()
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
SamiUser::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pWpIdKey = new JsonString(L"wpId");
    pJsonObject->Add(pWpIdKey, toJson(getPWpId(), "Integer", ""));

    
    JsonString *pDisplayNameKey = new JsonString(L"displayName");
    pJsonObject->Add(pDisplayNameKey, toJson(getPDisplayName(), "String", ""));

    
    JsonString *pLoginNameKey = new JsonString(L"loginName");
    pJsonObject->Add(pLoginNameKey, toJson(getPLoginName(), "String", ""));

    
    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    
    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    
    JsonString *pAdministratorKey = new JsonString(L"administrator");
    pJsonObject->Add(pAdministratorKey, toJson(getPAdministrator(), "Boolean", ""));

    
    return pJsonObject;
}

Integer*
SamiUser::getPId() {
    return pId;
}
void
SamiUser::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiUser::getPWpId() {
    return pWpId;
}
void
SamiUser::setPWpId(Integer* pWpId) {
    this->pWpId = pWpId;
}

String*
SamiUser::getPDisplayName() {
    return pDisplayName;
}
void
SamiUser::setPDisplayName(String* pDisplayName) {
    this->pDisplayName = pDisplayName;
}

String*
SamiUser::getPLoginName() {
    return pLoginName;
}
void
SamiUser::setPLoginName(String* pLoginName) {
    this->pLoginName = pLoginName;
}

String*
SamiUser::getPEmail() {
    return pEmail;
}
void
SamiUser::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiUser::getPToken() {
    return pToken;
}
void
SamiUser::setPToken(String* pToken) {
    this->pToken = pToken;
}

Boolean*
SamiUser::getPAdministrator() {
    return pAdministrator;
}
void
SamiUser::setPAdministrator(Boolean* pAdministrator) {
    this->pAdministrator = pAdministrator;
}



} /* namespace Swagger */

