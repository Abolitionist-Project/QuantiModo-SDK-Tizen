
#include "SamiHumanTime.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiHumanTime::SamiHumanTime() {
    init();
}

SamiHumanTime::~SamiHumanTime() {
    this->cleanup();
}

void
SamiHumanTime::init() {
    pDate = null;
    pTimezone_type = null;
    pTimezone = null;
    
}

void
SamiHumanTime::cleanup() {
    if(pDate != null) {
        
        delete pDate;
        pDate = null;
    }
    if(pTimezone_type != null) {
        
        delete pTimezone_type;
        pTimezone_type = null;
    }
    if(pTimezone != null) {
        
        delete pTimezone;
        pTimezone = null;
    }
    
}


SamiHumanTime*
SamiHumanTime::fromJson(String* json) {
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
SamiHumanTime::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDateKey = new JsonString(L"date");
        IJsonValue* pDateVal = null;
        pJsonObject->GetValue(pDateKey, pDateVal);
        if(pDateVal != null) {
            
            pDate = new String();
            jsonToValue(pDate, pDateVal, L"String", L"String");
        }
        delete pDateKey;
        JsonString* pTimezone_typeKey = new JsonString(L"timezone_type");
        IJsonValue* pTimezone_typeVal = null;
        pJsonObject->GetValue(pTimezone_typeKey, pTimezone_typeVal);
        if(pTimezone_typeVal != null) {
            
            pTimezone_type = null;
            jsonToValue(pTimezone_type, pTimezone_typeVal, L"Integer", L"Integer");
        }
        delete pTimezone_typeKey;
        JsonString* pTimezoneKey = new JsonString(L"timezone");
        IJsonValue* pTimezoneVal = null;
        pJsonObject->GetValue(pTimezoneKey, pTimezoneVal);
        if(pTimezoneVal != null) {
            
            pTimezone = new String();
            jsonToValue(pTimezone, pTimezoneVal, L"String", L"String");
        }
        delete pTimezoneKey;
        
    }
}

SamiHumanTime::SamiHumanTime(String* json) {
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
SamiHumanTime::asJson ()
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
SamiHumanTime::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pDateKey = new JsonString(L"date");
    pJsonObject->Add(pDateKey, toJson(getPDate(), "String", ""));

    
    JsonString *pTimezone_typeKey = new JsonString(L"timezone_type");
    pJsonObject->Add(pTimezone_typeKey, toJson(getPTimezoneType(), "Integer", ""));

    
    JsonString *pTimezoneKey = new JsonString(L"timezone");
    pJsonObject->Add(pTimezoneKey, toJson(getPTimezone(), "String", ""));

    
    return pJsonObject;
}

String*
SamiHumanTime::getPDate() {
    return pDate;
}
void
SamiHumanTime::setPDate(String* pDate) {
    this->pDate = pDate;
}

Integer*
SamiHumanTime::getPTimezoneType() {
    return pTimezone_type;
}
void
SamiHumanTime::setPTimezoneType(Integer* pTimezone_type) {
    this->pTimezone_type = pTimezone_type;
}

String*
SamiHumanTime::getPTimezone() {
    return pTimezone;
}
void
SamiHumanTime::setPTimezone(String* pTimezone) {
    this->pTimezone = pTimezone;
}



} /* namespace Swagger */

