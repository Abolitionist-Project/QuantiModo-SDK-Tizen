
#include "SamiMeasurement.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeasurement::SamiMeasurement() {
    init();
}

SamiMeasurement::~SamiMeasurement() {
    this->cleanup();
}

void
SamiMeasurement::init() {
    pId = null;
    pUser_id = null;
    pClient_id = null;
    pConnector_id = null;
    pVariable_id = null;
    pSource_id = null;
    pStart_time = null;
    pValue = null;
    pUnit_id = null;
    pOriginal_value = null;
    pOriginal_unit_id = null;
    pDuration = null;
    pNote = null;
    pLatitude = null;
    pLongitude = null;
    pLocation = null;
    pCreated_at = null;
    pUpdated_at = null;
    pError = null;
    
}

void
SamiMeasurement::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
    if(pClient_id != null) {
        
        delete pClient_id;
        pClient_id = null;
    }
    if(pConnector_id != null) {
        
        delete pConnector_id;
        pConnector_id = null;
    }
    if(pVariable_id != null) {
        
        delete pVariable_id;
        pVariable_id = null;
    }
    if(pSource_id != null) {
        
        delete pSource_id;
        pSource_id = null;
    }
    if(pStart_time != null) {
        
        delete pStart_time;
        pStart_time = null;
    }
    if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
    if(pUnit_id != null) {
        
        delete pUnit_id;
        pUnit_id = null;
    }
    if(pOriginal_value != null) {
        
        delete pOriginal_value;
        pOriginal_value = null;
    }
    if(pOriginal_unit_id != null) {
        
        delete pOriginal_unit_id;
        pOriginal_unit_id = null;
    }
    if(pDuration != null) {
        
        delete pDuration;
        pDuration = null;
    }
    if(pNote != null) {
        
        delete pNote;
        pNote = null;
    }
    if(pLatitude != null) {
        
        delete pLatitude;
        pLatitude = null;
    }
    if(pLongitude != null) {
        
        delete pLongitude;
        pLongitude = null;
    }
    if(pLocation != null) {
        
        delete pLocation;
        pLocation = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
    if(pError != null) {
        
        delete pError;
        pError = null;
    }
    
}


SamiMeasurement*
SamiMeasurement::fromJson(String* json) {
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
SamiMeasurement::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = null;
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
        JsonString* pClient_idKey = new JsonString(L"client_id");
        IJsonValue* pClient_idVal = null;
        pJsonObject->GetValue(pClient_idKey, pClient_idVal);
        if(pClient_idVal != null) {
            
            pClient_id = new String();
            jsonToValue(pClient_id, pClient_idVal, L"String", L"String");
        }
        delete pClient_idKey;
        JsonString* pConnector_idKey = new JsonString(L"connector_id");
        IJsonValue* pConnector_idVal = null;
        pJsonObject->GetValue(pConnector_idKey, pConnector_idVal);
        if(pConnector_idVal != null) {
            
            pConnector_id = new Integer();
            jsonToValue(pConnector_id, pConnector_idVal, L"Integer", L"Integer");
        }
        delete pConnector_idKey;
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
        JsonString* pStart_timeKey = new JsonString(L"start_time");
        IJsonValue* pStart_timeVal = null;
        pJsonObject->GetValue(pStart_timeKey, pStart_timeVal);
        if(pStart_timeVal != null) {
            
            pStart_time = new String();
            jsonToValue(pStart_time, pStart_timeVal, L"String", L"String");
        }
        delete pStart_timeKey;
        JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Float();
            jsonToValue(pValue, pValueVal, L"Float", L"Float");
        }
        delete pValueKey;
        JsonString* pUnit_idKey = new JsonString(L"unit_id");
        IJsonValue* pUnit_idVal = null;
        pJsonObject->GetValue(pUnit_idKey, pUnit_idVal);
        if(pUnit_idVal != null) {
            
            pUnit_id = new Integer();
            jsonToValue(pUnit_id, pUnit_idVal, L"Integer", L"Integer");
        }
        delete pUnit_idKey;
        JsonString* pOriginal_valueKey = new JsonString(L"original_value");
        IJsonValue* pOriginal_valueVal = null;
        pJsonObject->GetValue(pOriginal_valueKey, pOriginal_valueVal);
        if(pOriginal_valueVal != null) {
            
            pOriginal_value = new Float();
            jsonToValue(pOriginal_value, pOriginal_valueVal, L"Float", L"Float");
        }
        delete pOriginal_valueKey;
        JsonString* pOriginal_unit_idKey = new JsonString(L"original_unit_id");
        IJsonValue* pOriginal_unit_idVal = null;
        pJsonObject->GetValue(pOriginal_unit_idKey, pOriginal_unit_idVal);
        if(pOriginal_unit_idVal != null) {
            
            pOriginal_unit_id = new Integer();
            jsonToValue(pOriginal_unit_id, pOriginal_unit_idVal, L"Integer", L"Integer");
        }
        delete pOriginal_unit_idKey;
        JsonString* pDurationKey = new JsonString(L"duration");
        IJsonValue* pDurationVal = null;
        pJsonObject->GetValue(pDurationKey, pDurationVal);
        if(pDurationVal != null) {
            
            pDuration = new Integer();
            jsonToValue(pDuration, pDurationVal, L"Integer", L"Integer");
        }
        delete pDurationKey;
        JsonString* pNoteKey = new JsonString(L"note");
        IJsonValue* pNoteVal = null;
        pJsonObject->GetValue(pNoteKey, pNoteVal);
        if(pNoteVal != null) {
            
            pNote = new String();
            jsonToValue(pNote, pNoteVal, L"String", L"String");
        }
        delete pNoteKey;
        JsonString* pLatitudeKey = new JsonString(L"latitude");
        IJsonValue* pLatitudeVal = null;
        pJsonObject->GetValue(pLatitudeKey, pLatitudeVal);
        if(pLatitudeVal != null) {
            
            pLatitude = new Float();
            jsonToValue(pLatitude, pLatitudeVal, L"Float", L"Float");
        }
        delete pLatitudeKey;
        JsonString* pLongitudeKey = new JsonString(L"longitude");
        IJsonValue* pLongitudeVal = null;
        pJsonObject->GetValue(pLongitudeKey, pLongitudeVal);
        if(pLongitudeVal != null) {
            
            pLongitude = new Float();
            jsonToValue(pLongitude, pLongitudeVal, L"Float", L"Float");
        }
        delete pLongitudeKey;
        JsonString* pLocationKey = new JsonString(L"location");
        IJsonValue* pLocationVal = null;
        pJsonObject->GetValue(pLocationKey, pLocationVal);
        if(pLocationVal != null) {
            
            pLocation = new String();
            jsonToValue(pLocation, pLocationVal, L"String", L"String");
        }
        delete pLocationKey;
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
        JsonString* pErrorKey = new JsonString(L"error");
        IJsonValue* pErrorVal = null;
        pJsonObject->GetValue(pErrorKey, pErrorVal);
        if(pErrorVal != null) {
            
            pError = new String();
            jsonToValue(pError, pErrorVal, L"String", L"String");
        }
        delete pErrorKey;
        
    }
}

SamiMeasurement::SamiMeasurement(String* json) {
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
SamiMeasurement::asJson ()
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
SamiMeasurement::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    
    JsonString *pClient_idKey = new JsonString(L"client_id");
    pJsonObject->Add(pClient_idKey, toJson(getPClientId(), "String", ""));

    
    JsonString *pConnector_idKey = new JsonString(L"connector_id");
    pJsonObject->Add(pConnector_idKey, toJson(getPConnectorId(), "Integer", ""));

    
    JsonString *pVariable_idKey = new JsonString(L"variable_id");
    pJsonObject->Add(pVariable_idKey, toJson(getPVariableId(), "Integer", ""));

    
    JsonString *pSource_idKey = new JsonString(L"source_id");
    pJsonObject->Add(pSource_idKey, toJson(getPSourceId(), "Integer", ""));

    
    JsonString *pStart_timeKey = new JsonString(L"start_time");
    pJsonObject->Add(pStart_timeKey, toJson(getPStartTime(), "String", ""));

    
    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Float", ""));

    
    JsonString *pUnit_idKey = new JsonString(L"unit_id");
    pJsonObject->Add(pUnit_idKey, toJson(getPUnitId(), "Integer", ""));

    
    JsonString *pOriginal_valueKey = new JsonString(L"original_value");
    pJsonObject->Add(pOriginal_valueKey, toJson(getPOriginalValue(), "Float", ""));

    
    JsonString *pOriginal_unit_idKey = new JsonString(L"original_unit_id");
    pJsonObject->Add(pOriginal_unit_idKey, toJson(getPOriginalUnitId(), "Integer", ""));

    
    JsonString *pDurationKey = new JsonString(L"duration");
    pJsonObject->Add(pDurationKey, toJson(getPDuration(), "Integer", ""));

    
    JsonString *pNoteKey = new JsonString(L"note");
    pJsonObject->Add(pNoteKey, toJson(getPNote(), "String", ""));

    
    JsonString *pLatitudeKey = new JsonString(L"latitude");
    pJsonObject->Add(pLatitudeKey, toJson(getPLatitude(), "Float", ""));

    
    JsonString *pLongitudeKey = new JsonString(L"longitude");
    pJsonObject->Add(pLongitudeKey, toJson(getPLongitude(), "Float", ""));

    
    JsonString *pLocationKey = new JsonString(L"location");
    pJsonObject->Add(pLocationKey, toJson(getPLocation(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    JsonString *pErrorKey = new JsonString(L"error");
    pJsonObject->Add(pErrorKey, toJson(getPError(), "String", ""));

    
    return pJsonObject;
}

Integer*
SamiMeasurement::getPId() {
    return pId;
}
void
SamiMeasurement::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiMeasurement::getPUserId() {
    return pUser_id;
}
void
SamiMeasurement::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

String*
SamiMeasurement::getPClientId() {
    return pClient_id;
}
void
SamiMeasurement::setPClientId(String* pClient_id) {
    this->pClient_id = pClient_id;
}

Integer*
SamiMeasurement::getPConnectorId() {
    return pConnector_id;
}
void
SamiMeasurement::setPConnectorId(Integer* pConnector_id) {
    this->pConnector_id = pConnector_id;
}

Integer*
SamiMeasurement::getPVariableId() {
    return pVariable_id;
}
void
SamiMeasurement::setPVariableId(Integer* pVariable_id) {
    this->pVariable_id = pVariable_id;
}

Integer*
SamiMeasurement::getPSourceId() {
    return pSource_id;
}
void
SamiMeasurement::setPSourceId(Integer* pSource_id) {
    this->pSource_id = pSource_id;
}

String*
SamiMeasurement::getPStartTime() {
    return pStart_time;
}
void
SamiMeasurement::setPStartTime(String* pStart_time) {
    this->pStart_time = pStart_time;
}

Float*
SamiMeasurement::getPValue() {
    return pValue;
}
void
SamiMeasurement::setPValue(Float* pValue) {
    this->pValue = pValue;
}

Integer*
SamiMeasurement::getPUnitId() {
    return pUnit_id;
}
void
SamiMeasurement::setPUnitId(Integer* pUnit_id) {
    this->pUnit_id = pUnit_id;
}

Float*
SamiMeasurement::getPOriginalValue() {
    return pOriginal_value;
}
void
SamiMeasurement::setPOriginalValue(Float* pOriginal_value) {
    this->pOriginal_value = pOriginal_value;
}

Integer*
SamiMeasurement::getPOriginalUnitId() {
    return pOriginal_unit_id;
}
void
SamiMeasurement::setPOriginalUnitId(Integer* pOriginal_unit_id) {
    this->pOriginal_unit_id = pOriginal_unit_id;
}

Integer*
SamiMeasurement::getPDuration() {
    return pDuration;
}
void
SamiMeasurement::setPDuration(Integer* pDuration) {
    this->pDuration = pDuration;
}

String*
SamiMeasurement::getPNote() {
    return pNote;
}
void
SamiMeasurement::setPNote(String* pNote) {
    this->pNote = pNote;
}

Float*
SamiMeasurement::getPLatitude() {
    return pLatitude;
}
void
SamiMeasurement::setPLatitude(Float* pLatitude) {
    this->pLatitude = pLatitude;
}

Float*
SamiMeasurement::getPLongitude() {
    return pLongitude;
}
void
SamiMeasurement::setPLongitude(Float* pLongitude) {
    this->pLongitude = pLongitude;
}

String*
SamiMeasurement::getPLocation() {
    return pLocation;
}
void
SamiMeasurement::setPLocation(String* pLocation) {
    this->pLocation = pLocation;
}

DateTime*
SamiMeasurement::getPCreatedAt() {
    return pCreated_at;
}
void
SamiMeasurement::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiMeasurement::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiMeasurement::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}

String*
SamiMeasurement::getPError() {
    return pError;
}
void
SamiMeasurement::setPError(String* pError) {
    this->pError = pError;
}



} /* namespace Swagger */

