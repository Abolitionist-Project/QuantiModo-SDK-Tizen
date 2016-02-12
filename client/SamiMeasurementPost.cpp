
#include "SamiMeasurementPost.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeasurementPost::SamiMeasurementPost() {
    init();
}

SamiMeasurementPost::~SamiMeasurementPost() {
    this->cleanup();
}

void
SamiMeasurementPost::init() {
    pVariable_id = null;
    pSource_id = null;
    pUnit_id = null;
    pMeasurements = null;
    
}

void
SamiMeasurementPost::cleanup() {
    if(pVariable_id != null) {
        
        delete pVariable_id;
        pVariable_id = null;
    }
    if(pSource_id != null) {
        
        delete pSource_id;
        pSource_id = null;
    }
    if(pUnit_id != null) {
        
        delete pUnit_id;
        pUnit_id = null;
    }
    if(pMeasurements != null) {
        pMeasurements->RemoveAll(true);
        delete pMeasurements;
        pMeasurements = null;
    }
    
}


SamiMeasurementPost*
SamiMeasurementPost::fromJson(String* json) {
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
SamiMeasurementPost::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pVariable_idKey = new JsonString(L"variable_id");
        IJsonValue* pVariable_idVal = null;
        pJsonObject->GetValue(pVariable_idKey, pVariable_idVal);
        if(pVariable_idVal != null) {
            
            pVariable_id = new Integer();
            jsonToValue(pVariable_id, pVariable_idVal, L"Integer", L"Integer");
        }
        delete pVariable_idKey;
        JsonString* pSource_idKey = new JsonString(L"source_id");
        IJsonValue* pSource_idVal = null;
        pJsonObject->GetValue(pSource_idKey, pSource_idVal);
        if(pSource_idVal != null) {
            
            pSource_id = new Integer();
            jsonToValue(pSource_id, pSource_idVal, L"Integer", L"Integer");
        }
        delete pSource_idKey;
        JsonString* pUnit_idKey = new JsonString(L"unit_id");
        IJsonValue* pUnit_idVal = null;
        pJsonObject->GetValue(pUnit_idKey, pUnit_idVal);
        if(pUnit_idVal != null) {
            
            pUnit_id = new Integer();
            jsonToValue(pUnit_id, pUnit_idVal, L"Integer", L"Integer");
        }
        delete pUnit_idKey;
        JsonString* pMeasurementsKey = new JsonString(L"measurements");
        IJsonValue* pMeasurementsVal = null;
        pJsonObject->GetValue(pMeasurementsKey, pMeasurementsVal);
        if(pMeasurementsVal != null) {
            pMeasurements = new ArrayList();
            
            jsonToValue(pMeasurements, pMeasurementsVal, L"IList", L"SamiMeasurementValue");
        }
        delete pMeasurementsKey;
        
    }
}

SamiMeasurementPost::SamiMeasurementPost(String* json) {
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
SamiMeasurementPost::asJson ()
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
SamiMeasurementPost::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pVariable_idKey = new JsonString(L"variable_id");
    pJsonObject->Add(pVariable_idKey, toJson(getPVariableId(), "Integer", ""));

    
    JsonString *pSource_idKey = new JsonString(L"source_id");
    pJsonObject->Add(pSource_idKey, toJson(getPSourceId(), "Integer", ""));

    
    JsonString *pUnit_idKey = new JsonString(L"unit_id");
    pJsonObject->Add(pUnit_idKey, toJson(getPUnitId(), "Integer", ""));

    
    JsonString *pMeasurementsKey = new JsonString(L"measurements");
    pJsonObject->Add(pMeasurementsKey, toJson(getPMeasurements(), "SamiMeasurementValue", "array"));

    
    return pJsonObject;
}

Integer*
SamiMeasurementPost::getPVariableId() {
    return pVariable_id;
}
void
SamiMeasurementPost::setPVariableId(Integer* pVariable_id) {
    this->pVariable_id = pVariable_id;
}

Integer*
SamiMeasurementPost::getPSourceId() {
    return pSource_id;
}
void
SamiMeasurementPost::setPSourceId(Integer* pSource_id) {
    this->pSource_id = pSource_id;
}

Integer*
SamiMeasurementPost::getPUnitId() {
    return pUnit_id;
}
void
SamiMeasurementPost::setPUnitId(Integer* pUnit_id) {
    this->pUnit_id = pUnit_id;
}

IList*
SamiMeasurementPost::getPMeasurements() {
    return pMeasurements;
}
void
SamiMeasurementPost::setPMeasurements(IList* pMeasurements) {
    this->pMeasurements = pMeasurements;
}



} /* namespace Swagger */

