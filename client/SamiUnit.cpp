
#include "SamiUnit.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUnit::SamiUnit() {
    init();
}

SamiUnit::~SamiUnit() {
    this->cleanup();
}

void
SamiUnit::init() {
    pId = null;
    pClient_id = null;
    pName = null;
    pAbbreviated_name = null;
    pCategory_id = null;
    pMinimum_value = null;
    pMaximum_value = null;
    pUpdated = null;
    pDefault_unit_id = null;
    pMultiply = null;
    pAdd = null;
    pCreated_at = null;
    pUpdated_at = null;
    
}

void
SamiUnit::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pClient_id != null) {
        
        delete pClient_id;
        pClient_id = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pAbbreviated_name != null) {
        
        delete pAbbreviated_name;
        pAbbreviated_name = null;
    }
    if(pCategory_id != null) {
        
        delete pCategory_id;
        pCategory_id = null;
    }
    if(pMinimum_value != null) {
        
        delete pMinimum_value;
        pMinimum_value = null;
    }
    if(pMaximum_value != null) {
        
        delete pMaximum_value;
        pMaximum_value = null;
    }
    if(pUpdated != null) {
        
        delete pUpdated;
        pUpdated = null;
    }
    if(pDefault_unit_id != null) {
        
        delete pDefault_unit_id;
        pDefault_unit_id = null;
    }
    if(pMultiply != null) {
        
        delete pMultiply;
        pMultiply = null;
    }
    if(pAdd != null) {
        
        delete pAdd;
        pAdd = null;
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


SamiUnit*
SamiUnit::fromJson(String* json) {
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
SamiUnit::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pClient_idKey = new JsonString(L"client_id");
        IJsonValue* pClient_idVal = null;
        pJsonObject->GetValue(pClient_idKey, pClient_idVal);
        if(pClient_idVal != null) {
            
            pClient_id = new String();
            jsonToValue(pClient_id, pClient_idVal, L"String", L"String");
        }
        delete pClient_idKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pAbbreviated_nameKey = new JsonString(L"abbreviated_name");
        IJsonValue* pAbbreviated_nameVal = null;
        pJsonObject->GetValue(pAbbreviated_nameKey, pAbbreviated_nameVal);
        if(pAbbreviated_nameVal != null) {
            
            pAbbreviated_name = new String();
            jsonToValue(pAbbreviated_name, pAbbreviated_nameVal, L"String", L"String");
        }
        delete pAbbreviated_nameKey;
        JsonString* pCategory_idKey = new JsonString(L"category_id");
        IJsonValue* pCategory_idVal = null;
        pJsonObject->GetValue(pCategory_idKey, pCategory_idVal);
        if(pCategory_idVal != null) {
            
            pCategory_id = null;
            jsonToValue(pCategory_id, pCategory_idVal, L"Integer", L"Integer");
        }
        delete pCategory_idKey;
        JsonString* pMinimum_valueKey = new JsonString(L"minimum_value");
        IJsonValue* pMinimum_valueVal = null;
        pJsonObject->GetValue(pMinimum_valueKey, pMinimum_valueVal);
        if(pMinimum_valueVal != null) {
            
            pMinimum_value = new Float();
            jsonToValue(pMinimum_value, pMinimum_valueVal, L"Float", L"Float");
        }
        delete pMinimum_valueKey;
        JsonString* pMaximum_valueKey = new JsonString(L"maximum_value");
        IJsonValue* pMaximum_valueVal = null;
        pJsonObject->GetValue(pMaximum_valueKey, pMaximum_valueVal);
        if(pMaximum_valueVal != null) {
            
            pMaximum_value = new Float();
            jsonToValue(pMaximum_value, pMaximum_valueVal, L"Float", L"Float");
        }
        delete pMaximum_valueKey;
        JsonString* pUpdatedKey = new JsonString(L"updated");
        IJsonValue* pUpdatedVal = null;
        pJsonObject->GetValue(pUpdatedKey, pUpdatedVal);
        if(pUpdatedVal != null) {
            
            pUpdated = new Integer();
            jsonToValue(pUpdated, pUpdatedVal, L"Integer", L"Integer");
        }
        delete pUpdatedKey;
        JsonString* pDefault_unit_idKey = new JsonString(L"default_unit_id");
        IJsonValue* pDefault_unit_idVal = null;
        pJsonObject->GetValue(pDefault_unit_idKey, pDefault_unit_idVal);
        if(pDefault_unit_idVal != null) {
            
            pDefault_unit_id = new Integer();
            jsonToValue(pDefault_unit_id, pDefault_unit_idVal, L"Integer", L"Integer");
        }
        delete pDefault_unit_idKey;
        JsonString* pMultiplyKey = new JsonString(L"multiply");
        IJsonValue* pMultiplyVal = null;
        pJsonObject->GetValue(pMultiplyKey, pMultiplyVal);
        if(pMultiplyVal != null) {
            
            pMultiply = new Float();
            jsonToValue(pMultiply, pMultiplyVal, L"Float", L"Float");
        }
        delete pMultiplyKey;
        JsonString* pAddKey = new JsonString(L"add");
        IJsonValue* pAddVal = null;
        pJsonObject->GetValue(pAddKey, pAddVal);
        if(pAddVal != null) {
            
            pAdd = new Float();
            jsonToValue(pAdd, pAddVal, L"Float", L"Float");
        }
        delete pAddKey;
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

SamiUnit::SamiUnit(String* json) {
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
SamiUnit::asJson ()
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
SamiUnit::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pClient_idKey = new JsonString(L"client_id");
    pJsonObject->Add(pClient_idKey, toJson(getPClientId(), "String", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pAbbreviated_nameKey = new JsonString(L"abbreviated_name");
    pJsonObject->Add(pAbbreviated_nameKey, toJson(getPAbbreviatedName(), "String", ""));

    
    JsonString *pCategory_idKey = new JsonString(L"category_id");
    pJsonObject->Add(pCategory_idKey, toJson(getPCategoryId(), "Integer", ""));

    
    JsonString *pMinimum_valueKey = new JsonString(L"minimum_value");
    pJsonObject->Add(pMinimum_valueKey, toJson(getPMinimumValue(), "Float", ""));

    
    JsonString *pMaximum_valueKey = new JsonString(L"maximum_value");
    pJsonObject->Add(pMaximum_valueKey, toJson(getPMaximumValue(), "Float", ""));

    
    JsonString *pUpdatedKey = new JsonString(L"updated");
    pJsonObject->Add(pUpdatedKey, toJson(getPUpdated(), "Integer", ""));

    
    JsonString *pDefault_unit_idKey = new JsonString(L"default_unit_id");
    pJsonObject->Add(pDefault_unit_idKey, toJson(getPDefaultUnitId(), "Integer", ""));

    
    JsonString *pMultiplyKey = new JsonString(L"multiply");
    pJsonObject->Add(pMultiplyKey, toJson(getPMultiply(), "Float", ""));

    
    JsonString *pAddKey = new JsonString(L"add");
    pJsonObject->Add(pAddKey, toJson(getPAdd(), "Float", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    return pJsonObject;
}

Integer*
SamiUnit::getPId() {
    return pId;
}
void
SamiUnit::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiUnit::getPClientId() {
    return pClient_id;
}
void
SamiUnit::setPClientId(String* pClient_id) {
    this->pClient_id = pClient_id;
}

String*
SamiUnit::getPName() {
    return pName;
}
void
SamiUnit::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiUnit::getPAbbreviatedName() {
    return pAbbreviated_name;
}
void
SamiUnit::setPAbbreviatedName(String* pAbbreviated_name) {
    this->pAbbreviated_name = pAbbreviated_name;
}

Integer*
SamiUnit::getPCategoryId() {
    return pCategory_id;
}
void
SamiUnit::setPCategoryId(Integer* pCategory_id) {
    this->pCategory_id = pCategory_id;
}

Float*
SamiUnit::getPMinimumValue() {
    return pMinimum_value;
}
void
SamiUnit::setPMinimumValue(Float* pMinimum_value) {
    this->pMinimum_value = pMinimum_value;
}

Float*
SamiUnit::getPMaximumValue() {
    return pMaximum_value;
}
void
SamiUnit::setPMaximumValue(Float* pMaximum_value) {
    this->pMaximum_value = pMaximum_value;
}

Integer*
SamiUnit::getPUpdated() {
    return pUpdated;
}
void
SamiUnit::setPUpdated(Integer* pUpdated) {
    this->pUpdated = pUpdated;
}

Integer*
SamiUnit::getPDefaultUnitId() {
    return pDefault_unit_id;
}
void
SamiUnit::setPDefaultUnitId(Integer* pDefault_unit_id) {
    this->pDefault_unit_id = pDefault_unit_id;
}

Float*
SamiUnit::getPMultiply() {
    return pMultiply;
}
void
SamiUnit::setPMultiply(Float* pMultiply) {
    this->pMultiply = pMultiply;
}

Float*
SamiUnit::getPAdd() {
    return pAdd;
}
void
SamiUnit::setPAdd(Float* pAdd) {
    this->pAdd = pAdd;
}

DateTime*
SamiUnit::getPCreatedAt() {
    return pCreated_at;
}
void
SamiUnit::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiUnit::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiUnit::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

