
#include "SamiVariable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVariable::SamiVariable() {
    init();
}

SamiVariable::~SamiVariable() {
    this->cleanup();
}

void
SamiVariable::init() {
    pId = null;
    pClient_id = null;
    pParent_id = null;
    pName = null;
    pVariable_category_id = null;
    pDefault_unit_id = null;
    pCombination_operation = null;
    pFilling_value = null;
    pMaximum_allowed_value = null;
    pMinimum_allowed_value = null;
    pOnset_delay = null;
    pDuration_of_action = null;
    pPublic = null;
    pCause_only = null;
    pMost_common_value = null;
    pMost_common_unit_id = null;
    pStandard_deviation = null;
    pVariance = null;
    pMean = null;
    pMedian = null;
    pNumber_of_measurements = null;
    pNumber_of_unique_values = null;
    pSkewness = null;
    pKurtosis = null;
    pStatus = null;
    pError_message = null;
    pLast_successful_update_time = null;
    pCreated_at = null;
    pUpdated_at = null;
    pProduct_url = null;
    pImage_url = null;
    pPrice = null;
    pNumber_of_user_variables = null;
    pOutcome = null;
    pMinimum_recorded_value = null;
    pMaximum_recorded_value = null;
    
}

void
SamiVariable::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pClient_id != null) {
        
        delete pClient_id;
        pClient_id = null;
    }
    if(pParent_id != null) {
        
        delete pParent_id;
        pParent_id = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pVariable_category_id != null) {
        
        delete pVariable_category_id;
        pVariable_category_id = null;
    }
    if(pDefault_unit_id != null) {
        
        delete pDefault_unit_id;
        pDefault_unit_id = null;
    }
    if(pCombination_operation != null) {
        
        delete pCombination_operation;
        pCombination_operation = null;
    }
    if(pFilling_value != null) {
        
        delete pFilling_value;
        pFilling_value = null;
    }
    if(pMaximum_allowed_value != null) {
        
        delete pMaximum_allowed_value;
        pMaximum_allowed_value = null;
    }
    if(pMinimum_allowed_value != null) {
        
        delete pMinimum_allowed_value;
        pMinimum_allowed_value = null;
    }
    if(pOnset_delay != null) {
        
        delete pOnset_delay;
        pOnset_delay = null;
    }
    if(pDuration_of_action != null) {
        
        delete pDuration_of_action;
        pDuration_of_action = null;
    }
    if(pPublic != null) {
        
        delete pPublic;
        pPublic = null;
    }
    if(pCause_only != null) {
        
        delete pCause_only;
        pCause_only = null;
    }
    if(pMost_common_value != null) {
        
        delete pMost_common_value;
        pMost_common_value = null;
    }
    if(pMost_common_unit_id != null) {
        
        delete pMost_common_unit_id;
        pMost_common_unit_id = null;
    }
    if(pStandard_deviation != null) {
        
        delete pStandard_deviation;
        pStandard_deviation = null;
    }
    if(pVariance != null) {
        
        delete pVariance;
        pVariance = null;
    }
    if(pMean != null) {
        
        delete pMean;
        pMean = null;
    }
    if(pMedian != null) {
        
        delete pMedian;
        pMedian = null;
    }
    if(pNumber_of_measurements != null) {
        
        delete pNumber_of_measurements;
        pNumber_of_measurements = null;
    }
    if(pNumber_of_unique_values != null) {
        
        delete pNumber_of_unique_values;
        pNumber_of_unique_values = null;
    }
    if(pSkewness != null) {
        
        delete pSkewness;
        pSkewness = null;
    }
    if(pKurtosis != null) {
        
        delete pKurtosis;
        pKurtosis = null;
    }
    if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
    if(pError_message != null) {
        
        delete pError_message;
        pError_message = null;
    }
    if(pLast_successful_update_time != null) {
        
        delete pLast_successful_update_time;
        pLast_successful_update_time = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
    if(pProduct_url != null) {
        
        delete pProduct_url;
        pProduct_url = null;
    }
    if(pImage_url != null) {
        
        delete pImage_url;
        pImage_url = null;
    }
    if(pPrice != null) {
        
        delete pPrice;
        pPrice = null;
    }
    if(pNumber_of_user_variables != null) {
        
        delete pNumber_of_user_variables;
        pNumber_of_user_variables = null;
    }
    if(pOutcome != null) {
        
        delete pOutcome;
        pOutcome = null;
    }
    if(pMinimum_recorded_value != null) {
        
        delete pMinimum_recorded_value;
        pMinimum_recorded_value = null;
    }
    if(pMaximum_recorded_value != null) {
        
        delete pMaximum_recorded_value;
        pMaximum_recorded_value = null;
    }
    
}


SamiVariable*
SamiVariable::fromJson(String* json) {
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
SamiVariable::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pParent_idKey = new JsonString(L"parent_id");
        IJsonValue* pParent_idVal = null;
        pJsonObject->GetValue(pParent_idKey, pParent_idVal);
        if(pParent_idVal != null) {
            
            pParent_id = new Integer();
            jsonToValue(pParent_id, pParent_idVal, L"Integer", L"Integer");
        }
        delete pParent_idKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pVariable_category_idKey = new JsonString(L"variable_category_id");
        IJsonValue* pVariable_category_idVal = null;
        pJsonObject->GetValue(pVariable_category_idKey, pVariable_category_idVal);
        if(pVariable_category_idVal != null) {
            
            pVariable_category_id = new Integer();
            jsonToValue(pVariable_category_id, pVariable_category_idVal, L"Integer", L"Integer");
        }
        delete pVariable_category_idKey;
        JsonString* pDefault_unit_idKey = new JsonString(L"default_unit_id");
        IJsonValue* pDefault_unit_idVal = null;
        pJsonObject->GetValue(pDefault_unit_idKey, pDefault_unit_idVal);
        if(pDefault_unit_idVal != null) {
            
            pDefault_unit_id = new Integer();
            jsonToValue(pDefault_unit_id, pDefault_unit_idVal, L"Integer", L"Integer");
        }
        delete pDefault_unit_idKey;
        JsonString* pCombination_operationKey = new JsonString(L"combination_operation");
        IJsonValue* pCombination_operationVal = null;
        pJsonObject->GetValue(pCombination_operationKey, pCombination_operationVal);
        if(pCombination_operationVal != null) {
            
            pCombination_operation = new String();
            jsonToValue(pCombination_operation, pCombination_operationVal, L"String", L"String");
        }
        delete pCombination_operationKey;
        JsonString* pFilling_valueKey = new JsonString(L"filling_value");
        IJsonValue* pFilling_valueVal = null;
        pJsonObject->GetValue(pFilling_valueKey, pFilling_valueVal);
        if(pFilling_valueVal != null) {
            
            pFilling_value = new Float();
            jsonToValue(pFilling_value, pFilling_valueVal, L"Float", L"Float");
        }
        delete pFilling_valueKey;
        JsonString* pMaximum_allowed_valueKey = new JsonString(L"maximum_allowed_value");
        IJsonValue* pMaximum_allowed_valueVal = null;
        pJsonObject->GetValue(pMaximum_allowed_valueKey, pMaximum_allowed_valueVal);
        if(pMaximum_allowed_valueVal != null) {
            
            pMaximum_allowed_value = new Float();
            jsonToValue(pMaximum_allowed_value, pMaximum_allowed_valueVal, L"Float", L"Float");
        }
        delete pMaximum_allowed_valueKey;
        JsonString* pMinimum_allowed_valueKey = new JsonString(L"minimum_allowed_value");
        IJsonValue* pMinimum_allowed_valueVal = null;
        pJsonObject->GetValue(pMinimum_allowed_valueKey, pMinimum_allowed_valueVal);
        if(pMinimum_allowed_valueVal != null) {
            
            pMinimum_allowed_value = new Float();
            jsonToValue(pMinimum_allowed_value, pMinimum_allowed_valueVal, L"Float", L"Float");
        }
        delete pMinimum_allowed_valueKey;
        JsonString* pOnset_delayKey = new JsonString(L"onset_delay");
        IJsonValue* pOnset_delayVal = null;
        pJsonObject->GetValue(pOnset_delayKey, pOnset_delayVal);
        if(pOnset_delayVal != null) {
            
            pOnset_delay = new Integer();
            jsonToValue(pOnset_delay, pOnset_delayVal, L"Integer", L"Integer");
        }
        delete pOnset_delayKey;
        JsonString* pDuration_of_actionKey = new JsonString(L"duration_of_action");
        IJsonValue* pDuration_of_actionVal = null;
        pJsonObject->GetValue(pDuration_of_actionKey, pDuration_of_actionVal);
        if(pDuration_of_actionVal != null) {
            
            pDuration_of_action = new Integer();
            jsonToValue(pDuration_of_action, pDuration_of_actionVal, L"Integer", L"Integer");
        }
        delete pDuration_of_actionKey;
        JsonString* pPublicKey = new JsonString(L"public");
        IJsonValue* pPublicVal = null;
        pJsonObject->GetValue(pPublicKey, pPublicVal);
        if(pPublicVal != null) {
            
            pPublic = new Integer();
            jsonToValue(pPublic, pPublicVal, L"Integer", L"Integer");
        }
        delete pPublicKey;
        JsonString* pCause_onlyKey = new JsonString(L"cause_only");
        IJsonValue* pCause_onlyVal = null;
        pJsonObject->GetValue(pCause_onlyKey, pCause_onlyVal);
        if(pCause_onlyVal != null) {
            
            pCause_only = new Boolean(false);
            jsonToValue(pCause_only, pCause_onlyVal, L"Boolean", L"Boolean");
        }
        delete pCause_onlyKey;
        JsonString* pMost_common_valueKey = new JsonString(L"most_common_value");
        IJsonValue* pMost_common_valueVal = null;
        pJsonObject->GetValue(pMost_common_valueKey, pMost_common_valueVal);
        if(pMost_common_valueVal != null) {
            
            pMost_common_value = new Float();
            jsonToValue(pMost_common_value, pMost_common_valueVal, L"Float", L"Float");
        }
        delete pMost_common_valueKey;
        JsonString* pMost_common_unit_idKey = new JsonString(L"most_common_unit_id");
        IJsonValue* pMost_common_unit_idVal = null;
        pJsonObject->GetValue(pMost_common_unit_idKey, pMost_common_unit_idVal);
        if(pMost_common_unit_idVal != null) {
            
            pMost_common_unit_id = new Integer();
            jsonToValue(pMost_common_unit_id, pMost_common_unit_idVal, L"Integer", L"Integer");
        }
        delete pMost_common_unit_idKey;
        JsonString* pStandard_deviationKey = new JsonString(L"standard_deviation");
        IJsonValue* pStandard_deviationVal = null;
        pJsonObject->GetValue(pStandard_deviationKey, pStandard_deviationVal);
        if(pStandard_deviationVal != null) {
            
            pStandard_deviation = new Float();
            jsonToValue(pStandard_deviation, pStandard_deviationVal, L"Float", L"Float");
        }
        delete pStandard_deviationKey;
        JsonString* pVarianceKey = new JsonString(L"variance");
        IJsonValue* pVarianceVal = null;
        pJsonObject->GetValue(pVarianceKey, pVarianceVal);
        if(pVarianceVal != null) {
            
            pVariance = new Float();
            jsonToValue(pVariance, pVarianceVal, L"Float", L"Float");
        }
        delete pVarianceKey;
        JsonString* pMeanKey = new JsonString(L"mean");
        IJsonValue* pMeanVal = null;
        pJsonObject->GetValue(pMeanKey, pMeanVal);
        if(pMeanVal != null) {
            
            pMean = new Float();
            jsonToValue(pMean, pMeanVal, L"Float", L"Float");
        }
        delete pMeanKey;
        JsonString* pMedianKey = new JsonString(L"median");
        IJsonValue* pMedianVal = null;
        pJsonObject->GetValue(pMedianKey, pMedianVal);
        if(pMedianVal != null) {
            
            pMedian = new Float();
            jsonToValue(pMedian, pMedianVal, L"Float", L"Float");
        }
        delete pMedianKey;
        JsonString* pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
        IJsonValue* pNumber_of_measurementsVal = null;
        pJsonObject->GetValue(pNumber_of_measurementsKey, pNumber_of_measurementsVal);
        if(pNumber_of_measurementsVal != null) {
            
            pNumber_of_measurements = new Float();
            jsonToValue(pNumber_of_measurements, pNumber_of_measurementsVal, L"Float", L"Float");
        }
        delete pNumber_of_measurementsKey;
        JsonString* pNumber_of_unique_valuesKey = new JsonString(L"number_of_unique_values");
        IJsonValue* pNumber_of_unique_valuesVal = null;
        pJsonObject->GetValue(pNumber_of_unique_valuesKey, pNumber_of_unique_valuesVal);
        if(pNumber_of_unique_valuesVal != null) {
            
            pNumber_of_unique_values = new Float();
            jsonToValue(pNumber_of_unique_values, pNumber_of_unique_valuesVal, L"Float", L"Float");
        }
        delete pNumber_of_unique_valuesKey;
        JsonString* pSkewnessKey = new JsonString(L"skewness");
        IJsonValue* pSkewnessVal = null;
        pJsonObject->GetValue(pSkewnessKey, pSkewnessVal);
        if(pSkewnessVal != null) {
            
            pSkewness = new Float();
            jsonToValue(pSkewness, pSkewnessVal, L"Float", L"Float");
        }
        delete pSkewnessKey;
        JsonString* pKurtosisKey = new JsonString(L"kurtosis");
        IJsonValue* pKurtosisVal = null;
        pJsonObject->GetValue(pKurtosisKey, pKurtosisVal);
        if(pKurtosisVal != null) {
            
            pKurtosis = new Float();
            jsonToValue(pKurtosis, pKurtosisVal, L"Float", L"Float");
        }
        delete pKurtosisKey;
        JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
        JsonString* pError_messageKey = new JsonString(L"error_message");
        IJsonValue* pError_messageVal = null;
        pJsonObject->GetValue(pError_messageKey, pError_messageVal);
        if(pError_messageVal != null) {
            
            pError_message = new String();
            jsonToValue(pError_message, pError_messageVal, L"String", L"String");
        }
        delete pError_messageKey;
        JsonString* pLast_successful_update_timeKey = new JsonString(L"last_successful_update_time");
        IJsonValue* pLast_successful_update_timeVal = null;
        pJsonObject->GetValue(pLast_successful_update_timeKey, pLast_successful_update_timeVal);
        if(pLast_successful_update_timeVal != null) {
            
            pLast_successful_update_time = new DateTime();
            jsonToValue(pLast_successful_update_time, pLast_successful_update_timeVal, L"DateTime", L"DateTime");
        }
        delete pLast_successful_update_timeKey;
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
        JsonString* pProduct_urlKey = new JsonString(L"product_url");
        IJsonValue* pProduct_urlVal = null;
        pJsonObject->GetValue(pProduct_urlKey, pProduct_urlVal);
        if(pProduct_urlVal != null) {
            
            pProduct_url = new String();
            jsonToValue(pProduct_url, pProduct_urlVal, L"String", L"String");
        }
        delete pProduct_urlKey;
        JsonString* pImage_urlKey = new JsonString(L"image_url");
        IJsonValue* pImage_urlVal = null;
        pJsonObject->GetValue(pImage_urlKey, pImage_urlVal);
        if(pImage_urlVal != null) {
            
            pImage_url = new String();
            jsonToValue(pImage_url, pImage_urlVal, L"String", L"String");
        }
        delete pImage_urlKey;
        JsonString* pPriceKey = new JsonString(L"price");
        IJsonValue* pPriceVal = null;
        pJsonObject->GetValue(pPriceKey, pPriceVal);
        if(pPriceVal != null) {
            
            pPrice = new Float();
            jsonToValue(pPrice, pPriceVal, L"Float", L"Float");
        }
        delete pPriceKey;
        JsonString* pNumber_of_user_variablesKey = new JsonString(L"number_of_user_variables");
        IJsonValue* pNumber_of_user_variablesVal = null;
        pJsonObject->GetValue(pNumber_of_user_variablesKey, pNumber_of_user_variablesVal);
        if(pNumber_of_user_variablesVal != null) {
            
            pNumber_of_user_variables = new Integer();
            jsonToValue(pNumber_of_user_variables, pNumber_of_user_variablesVal, L"Integer", L"Integer");
        }
        delete pNumber_of_user_variablesKey;
        JsonString* pOutcomeKey = new JsonString(L"outcome");
        IJsonValue* pOutcomeVal = null;
        pJsonObject->GetValue(pOutcomeKey, pOutcomeVal);
        if(pOutcomeVal != null) {
            
            pOutcome = new Boolean(false);
            jsonToValue(pOutcome, pOutcomeVal, L"Boolean", L"Boolean");
        }
        delete pOutcomeKey;
        JsonString* pMinimum_recorded_valueKey = new JsonString(L"minimum_recorded_value");
        IJsonValue* pMinimum_recorded_valueVal = null;
        pJsonObject->GetValue(pMinimum_recorded_valueKey, pMinimum_recorded_valueVal);
        if(pMinimum_recorded_valueVal != null) {
            
            pMinimum_recorded_value = new Float();
            jsonToValue(pMinimum_recorded_value, pMinimum_recorded_valueVal, L"Float", L"Float");
        }
        delete pMinimum_recorded_valueKey;
        JsonString* pMaximum_recorded_valueKey = new JsonString(L"maximum_recorded_value");
        IJsonValue* pMaximum_recorded_valueVal = null;
        pJsonObject->GetValue(pMaximum_recorded_valueKey, pMaximum_recorded_valueVal);
        if(pMaximum_recorded_valueVal != null) {
            
            pMaximum_recorded_value = new Float();
            jsonToValue(pMaximum_recorded_value, pMaximum_recorded_valueVal, L"Float", L"Float");
        }
        delete pMaximum_recorded_valueKey;
        
    }
}

SamiVariable::SamiVariable(String* json) {
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
SamiVariable::asJson ()
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
SamiVariable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pClient_idKey = new JsonString(L"client_id");
    pJsonObject->Add(pClient_idKey, toJson(getPClientId(), "String", ""));

    
    JsonString *pParent_idKey = new JsonString(L"parent_id");
    pJsonObject->Add(pParent_idKey, toJson(getPParentId(), "Integer", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pVariable_category_idKey = new JsonString(L"variable_category_id");
    pJsonObject->Add(pVariable_category_idKey, toJson(getPVariableCategoryId(), "Integer", ""));

    
    JsonString *pDefault_unit_idKey = new JsonString(L"default_unit_id");
    pJsonObject->Add(pDefault_unit_idKey, toJson(getPDefaultUnitId(), "Integer", ""));

    
    JsonString *pCombination_operationKey = new JsonString(L"combination_operation");
    pJsonObject->Add(pCombination_operationKey, toJson(getPCombinationOperation(), "String", ""));

    
    JsonString *pFilling_valueKey = new JsonString(L"filling_value");
    pJsonObject->Add(pFilling_valueKey, toJson(getPFillingValue(), "Float", ""));

    
    JsonString *pMaximum_allowed_valueKey = new JsonString(L"maximum_allowed_value");
    pJsonObject->Add(pMaximum_allowed_valueKey, toJson(getPMaximumAllowedValue(), "Float", ""));

    
    JsonString *pMinimum_allowed_valueKey = new JsonString(L"minimum_allowed_value");
    pJsonObject->Add(pMinimum_allowed_valueKey, toJson(getPMinimumAllowedValue(), "Float", ""));

    
    JsonString *pOnset_delayKey = new JsonString(L"onset_delay");
    pJsonObject->Add(pOnset_delayKey, toJson(getPOnsetDelay(), "Integer", ""));

    
    JsonString *pDuration_of_actionKey = new JsonString(L"duration_of_action");
    pJsonObject->Add(pDuration_of_actionKey, toJson(getPDurationOfAction(), "Integer", ""));

    
    JsonString *pPublicKey = new JsonString(L"public");
    pJsonObject->Add(pPublicKey, toJson(getPPublic(), "Integer", ""));

    
    JsonString *pCause_onlyKey = new JsonString(L"cause_only");
    pJsonObject->Add(pCause_onlyKey, toJson(getPCauseOnly(), "Boolean", ""));

    
    JsonString *pMost_common_valueKey = new JsonString(L"most_common_value");
    pJsonObject->Add(pMost_common_valueKey, toJson(getPMostCommonValue(), "Float", ""));

    
    JsonString *pMost_common_unit_idKey = new JsonString(L"most_common_unit_id");
    pJsonObject->Add(pMost_common_unit_idKey, toJson(getPMostCommonUnitId(), "Integer", ""));

    
    JsonString *pStandard_deviationKey = new JsonString(L"standard_deviation");
    pJsonObject->Add(pStandard_deviationKey, toJson(getPStandardDeviation(), "Float", ""));

    
    JsonString *pVarianceKey = new JsonString(L"variance");
    pJsonObject->Add(pVarianceKey, toJson(getPVariance(), "Float", ""));

    
    JsonString *pMeanKey = new JsonString(L"mean");
    pJsonObject->Add(pMeanKey, toJson(getPMean(), "Float", ""));

    
    JsonString *pMedianKey = new JsonString(L"median");
    pJsonObject->Add(pMedianKey, toJson(getPMedian(), "Float", ""));

    
    JsonString *pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
    pJsonObject->Add(pNumber_of_measurementsKey, toJson(getPNumberOfMeasurements(), "Float", ""));

    
    JsonString *pNumber_of_unique_valuesKey = new JsonString(L"number_of_unique_values");
    pJsonObject->Add(pNumber_of_unique_valuesKey, toJson(getPNumberOfUniqueValues(), "Float", ""));

    
    JsonString *pSkewnessKey = new JsonString(L"skewness");
    pJsonObject->Add(pSkewnessKey, toJson(getPSkewness(), "Float", ""));

    
    JsonString *pKurtosisKey = new JsonString(L"kurtosis");
    pJsonObject->Add(pKurtosisKey, toJson(getPKurtosis(), "Float", ""));

    
    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    
    JsonString *pError_messageKey = new JsonString(L"error_message");
    pJsonObject->Add(pError_messageKey, toJson(getPErrorMessage(), "String", ""));

    
    JsonString *pLast_successful_update_timeKey = new JsonString(L"last_successful_update_time");
    pJsonObject->Add(pLast_successful_update_timeKey, toJson(getPLastSuccessfulUpdateTime(), "DateTime", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    JsonString *pProduct_urlKey = new JsonString(L"product_url");
    pJsonObject->Add(pProduct_urlKey, toJson(getPProductUrl(), "String", ""));

    
    JsonString *pImage_urlKey = new JsonString(L"image_url");
    pJsonObject->Add(pImage_urlKey, toJson(getPImageUrl(), "String", ""));

    
    JsonString *pPriceKey = new JsonString(L"price");
    pJsonObject->Add(pPriceKey, toJson(getPPrice(), "Float", ""));

    
    JsonString *pNumber_of_user_variablesKey = new JsonString(L"number_of_user_variables");
    pJsonObject->Add(pNumber_of_user_variablesKey, toJson(getPNumberOfUserVariables(), "Integer", ""));

    
    JsonString *pOutcomeKey = new JsonString(L"outcome");
    pJsonObject->Add(pOutcomeKey, toJson(getPOutcome(), "Boolean", ""));

    
    JsonString *pMinimum_recorded_valueKey = new JsonString(L"minimum_recorded_value");
    pJsonObject->Add(pMinimum_recorded_valueKey, toJson(getPMinimumRecordedValue(), "Float", ""));

    
    JsonString *pMaximum_recorded_valueKey = new JsonString(L"maximum_recorded_value");
    pJsonObject->Add(pMaximum_recorded_valueKey, toJson(getPMaximumRecordedValue(), "Float", ""));

    
    return pJsonObject;
}

Integer*
SamiVariable::getPId() {
    return pId;
}
void
SamiVariable::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiVariable::getPClientId() {
    return pClient_id;
}
void
SamiVariable::setPClientId(String* pClient_id) {
    this->pClient_id = pClient_id;
}

Integer*
SamiVariable::getPParentId() {
    return pParent_id;
}
void
SamiVariable::setPParentId(Integer* pParent_id) {
    this->pParent_id = pParent_id;
}

String*
SamiVariable::getPName() {
    return pName;
}
void
SamiVariable::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiVariable::getPVariableCategoryId() {
    return pVariable_category_id;
}
void
SamiVariable::setPVariableCategoryId(Integer* pVariable_category_id) {
    this->pVariable_category_id = pVariable_category_id;
}

Integer*
SamiVariable::getPDefaultUnitId() {
    return pDefault_unit_id;
}
void
SamiVariable::setPDefaultUnitId(Integer* pDefault_unit_id) {
    this->pDefault_unit_id = pDefault_unit_id;
}

String*
SamiVariable::getPCombinationOperation() {
    return pCombination_operation;
}
void
SamiVariable::setPCombinationOperation(String* pCombination_operation) {
    this->pCombination_operation = pCombination_operation;
}

Float*
SamiVariable::getPFillingValue() {
    return pFilling_value;
}
void
SamiVariable::setPFillingValue(Float* pFilling_value) {
    this->pFilling_value = pFilling_value;
}

Float*
SamiVariable::getPMaximumAllowedValue() {
    return pMaximum_allowed_value;
}
void
SamiVariable::setPMaximumAllowedValue(Float* pMaximum_allowed_value) {
    this->pMaximum_allowed_value = pMaximum_allowed_value;
}

Float*
SamiVariable::getPMinimumAllowedValue() {
    return pMinimum_allowed_value;
}
void
SamiVariable::setPMinimumAllowedValue(Float* pMinimum_allowed_value) {
    this->pMinimum_allowed_value = pMinimum_allowed_value;
}

Integer*
SamiVariable::getPOnsetDelay() {
    return pOnset_delay;
}
void
SamiVariable::setPOnsetDelay(Integer* pOnset_delay) {
    this->pOnset_delay = pOnset_delay;
}

Integer*
SamiVariable::getPDurationOfAction() {
    return pDuration_of_action;
}
void
SamiVariable::setPDurationOfAction(Integer* pDuration_of_action) {
    this->pDuration_of_action = pDuration_of_action;
}

Integer*
SamiVariable::getPPublic() {
    return pPublic;
}
void
SamiVariable::setPPublic(Integer* pPublic) {
    this->pPublic = pPublic;
}

Boolean*
SamiVariable::getPCauseOnly() {
    return pCause_only;
}
void
SamiVariable::setPCauseOnly(Boolean* pCause_only) {
    this->pCause_only = pCause_only;
}

Float*
SamiVariable::getPMostCommonValue() {
    return pMost_common_value;
}
void
SamiVariable::setPMostCommonValue(Float* pMost_common_value) {
    this->pMost_common_value = pMost_common_value;
}

Integer*
SamiVariable::getPMostCommonUnitId() {
    return pMost_common_unit_id;
}
void
SamiVariable::setPMostCommonUnitId(Integer* pMost_common_unit_id) {
    this->pMost_common_unit_id = pMost_common_unit_id;
}

Float*
SamiVariable::getPStandardDeviation() {
    return pStandard_deviation;
}
void
SamiVariable::setPStandardDeviation(Float* pStandard_deviation) {
    this->pStandard_deviation = pStandard_deviation;
}

Float*
SamiVariable::getPVariance() {
    return pVariance;
}
void
SamiVariable::setPVariance(Float* pVariance) {
    this->pVariance = pVariance;
}

Float*
SamiVariable::getPMean() {
    return pMean;
}
void
SamiVariable::setPMean(Float* pMean) {
    this->pMean = pMean;
}

Float*
SamiVariable::getPMedian() {
    return pMedian;
}
void
SamiVariable::setPMedian(Float* pMedian) {
    this->pMedian = pMedian;
}

Float*
SamiVariable::getPNumberOfMeasurements() {
    return pNumber_of_measurements;
}
void
SamiVariable::setPNumberOfMeasurements(Float* pNumber_of_measurements) {
    this->pNumber_of_measurements = pNumber_of_measurements;
}

Float*
SamiVariable::getPNumberOfUniqueValues() {
    return pNumber_of_unique_values;
}
void
SamiVariable::setPNumberOfUniqueValues(Float* pNumber_of_unique_values) {
    this->pNumber_of_unique_values = pNumber_of_unique_values;
}

Float*
SamiVariable::getPSkewness() {
    return pSkewness;
}
void
SamiVariable::setPSkewness(Float* pSkewness) {
    this->pSkewness = pSkewness;
}

Float*
SamiVariable::getPKurtosis() {
    return pKurtosis;
}
void
SamiVariable::setPKurtosis(Float* pKurtosis) {
    this->pKurtosis = pKurtosis;
}

String*
SamiVariable::getPStatus() {
    return pStatus;
}
void
SamiVariable::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

String*
SamiVariable::getPErrorMessage() {
    return pError_message;
}
void
SamiVariable::setPErrorMessage(String* pError_message) {
    this->pError_message = pError_message;
}

DateTime*
SamiVariable::getPLastSuccessfulUpdateTime() {
    return pLast_successful_update_time;
}
void
SamiVariable::setPLastSuccessfulUpdateTime(DateTime* pLast_successful_update_time) {
    this->pLast_successful_update_time = pLast_successful_update_time;
}

DateTime*
SamiVariable::getPCreatedAt() {
    return pCreated_at;
}
void
SamiVariable::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiVariable::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiVariable::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}

String*
SamiVariable::getPProductUrl() {
    return pProduct_url;
}
void
SamiVariable::setPProductUrl(String* pProduct_url) {
    this->pProduct_url = pProduct_url;
}

String*
SamiVariable::getPImageUrl() {
    return pImage_url;
}
void
SamiVariable::setPImageUrl(String* pImage_url) {
    this->pImage_url = pImage_url;
}

Float*
SamiVariable::getPPrice() {
    return pPrice;
}
void
SamiVariable::setPPrice(Float* pPrice) {
    this->pPrice = pPrice;
}

Integer*
SamiVariable::getPNumberOfUserVariables() {
    return pNumber_of_user_variables;
}
void
SamiVariable::setPNumberOfUserVariables(Integer* pNumber_of_user_variables) {
    this->pNumber_of_user_variables = pNumber_of_user_variables;
}

Boolean*
SamiVariable::getPOutcome() {
    return pOutcome;
}
void
SamiVariable::setPOutcome(Boolean* pOutcome) {
    this->pOutcome = pOutcome;
}

Float*
SamiVariable::getPMinimumRecordedValue() {
    return pMinimum_recorded_value;
}
void
SamiVariable::setPMinimumRecordedValue(Float* pMinimum_recorded_value) {
    this->pMinimum_recorded_value = pMinimum_recorded_value;
}

Float*
SamiVariable::getPMaximumRecordedValue() {
    return pMaximum_recorded_value;
}
void
SamiVariable::setPMaximumRecordedValue(Float* pMaximum_recorded_value) {
    this->pMaximum_recorded_value = pMaximum_recorded_value;
}



} /* namespace Swagger */

