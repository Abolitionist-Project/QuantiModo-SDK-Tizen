
#include "SamiConnector.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConnector::SamiConnector() {
    init();
}

SamiConnector::~SamiConnector() {
    this->cleanup();
}

void
SamiConnector::init() {
    pId = null;
    pName = null;
    pDisplay_name = null;
    pImage = null;
    pGet_it_url = null;
    pShort_description = null;
    pLong_description = null;
    pEnabled = null;
    pOauth = null;
    pCreated_at = null;
    pUpdated_at = null;
    
}

void
SamiConnector::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pDisplay_name != null) {
        
        delete pDisplay_name;
        pDisplay_name = null;
    }
    if(pImage != null) {
        
        delete pImage;
        pImage = null;
    }
    if(pGet_it_url != null) {
        
        delete pGet_it_url;
        pGet_it_url = null;
    }
    if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
    if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
    if(pEnabled != null) {
        
        delete pEnabled;
        pEnabled = null;
    }
    if(pOauth != null) {
        
        delete pOauth;
        pOauth = null;
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


SamiConnector*
SamiConnector::fromJson(String* json) {
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
SamiConnector::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pDisplay_nameKey = new JsonString(L"display_name");
        IJsonValue* pDisplay_nameVal = null;
        pJsonObject->GetValue(pDisplay_nameKey, pDisplay_nameVal);
        if(pDisplay_nameVal != null) {
            
            pDisplay_name = new String();
            jsonToValue(pDisplay_name, pDisplay_nameVal, L"String", L"String");
        }
        delete pDisplay_nameKey;
        JsonString* pImageKey = new JsonString(L"image");
        IJsonValue* pImageVal = null;
        pJsonObject->GetValue(pImageKey, pImageVal);
        if(pImageVal != null) {
            
            pImage = new String();
            jsonToValue(pImage, pImageVal, L"String", L"String");
        }
        delete pImageKey;
        JsonString* pGet_it_urlKey = new JsonString(L"get_it_url");
        IJsonValue* pGet_it_urlVal = null;
        pJsonObject->GetValue(pGet_it_urlKey, pGet_it_urlVal);
        if(pGet_it_urlVal != null) {
            
            pGet_it_url = new String();
            jsonToValue(pGet_it_url, pGet_it_urlVal, L"String", L"String");
        }
        delete pGet_it_urlKey;
        JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
        JsonString* pLong_descriptionKey = new JsonString(L"long_description");
        IJsonValue* pLong_descriptionVal = null;
        pJsonObject->GetValue(pLong_descriptionKey, pLong_descriptionVal);
        if(pLong_descriptionVal != null) {
            
            pLong_description = new String();
            jsonToValue(pLong_description, pLong_descriptionVal, L"String", L"String");
        }
        delete pLong_descriptionKey;
        JsonString* pEnabledKey = new JsonString(L"enabled");
        IJsonValue* pEnabledVal = null;
        pJsonObject->GetValue(pEnabledKey, pEnabledVal);
        if(pEnabledVal != null) {
            
            pEnabled = new Boolean(false);
            jsonToValue(pEnabled, pEnabledVal, L"Boolean", L"Boolean");
        }
        delete pEnabledKey;
        JsonString* pOauthKey = new JsonString(L"oauth");
        IJsonValue* pOauthVal = null;
        pJsonObject->GetValue(pOauthKey, pOauthVal);
        if(pOauthVal != null) {
            
            pOauth = new Boolean(false);
            jsonToValue(pOauth, pOauthVal, L"Boolean", L"Boolean");
        }
        delete pOauthKey;
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

SamiConnector::SamiConnector(String* json) {
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
SamiConnector::asJson ()
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
SamiConnector::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pDisplay_nameKey = new JsonString(L"display_name");
    pJsonObject->Add(pDisplay_nameKey, toJson(getPDisplayName(), "String", ""));

    
    JsonString *pImageKey = new JsonString(L"image");
    pJsonObject->Add(pImageKey, toJson(getPImage(), "String", ""));

    
    JsonString *pGet_it_urlKey = new JsonString(L"get_it_url");
    pJsonObject->Add(pGet_it_urlKey, toJson(getPGetItUrl(), "String", ""));

    
    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    
    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    
    JsonString *pEnabledKey = new JsonString(L"enabled");
    pJsonObject->Add(pEnabledKey, toJson(getPEnabled(), "Boolean", ""));

    
    JsonString *pOauthKey = new JsonString(L"oauth");
    pJsonObject->Add(pOauthKey, toJson(getPOauth(), "Boolean", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    return pJsonObject;
}

Integer*
SamiConnector::getPId() {
    return pId;
}
void
SamiConnector::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiConnector::getPName() {
    return pName;
}
void
SamiConnector::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiConnector::getPDisplayName() {
    return pDisplay_name;
}
void
SamiConnector::setPDisplayName(String* pDisplay_name) {
    this->pDisplay_name = pDisplay_name;
}

String*
SamiConnector::getPImage() {
    return pImage;
}
void
SamiConnector::setPImage(String* pImage) {
    this->pImage = pImage;
}

String*
SamiConnector::getPGetItUrl() {
    return pGet_it_url;
}
void
SamiConnector::setPGetItUrl(String* pGet_it_url) {
    this->pGet_it_url = pGet_it_url;
}

String*
SamiConnector::getPShortDescription() {
    return pShort_description;
}
void
SamiConnector::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

String*
SamiConnector::getPLongDescription() {
    return pLong_description;
}
void
SamiConnector::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

Boolean*
SamiConnector::getPEnabled() {
    return pEnabled;
}
void
SamiConnector::setPEnabled(Boolean* pEnabled) {
    this->pEnabled = pEnabled;
}

Boolean*
SamiConnector::getPOauth() {
    return pOauth;
}
void
SamiConnector::setPOauth(Boolean* pOauth) {
    this->pOauth = pOauth;
}

DateTime*
SamiConnector::getPCreatedAt() {
    return pCreated_at;
}
void
SamiConnector::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiConnector::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiConnector::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

