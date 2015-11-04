
#include "SamiUserVariable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserVariable::SamiUserVariable() {
    init();
}

SamiUserVariable::~SamiUserVariable() {
    this->cleanup();
}

void
SamiUserVariable::init() {
    pParent_id = null;
    pClient_id = null;
    pVariable_id = null;
    pDefault_unit_id = null;
    pMinimum_allowed_value = null;
    pMaximum_allowed_value = null;
    pFilling_value = null;
    pJoin_with = null;
    pOnset_delay = null;
    pDuration_of_action = null;
    pVariable_category_id = null;
    pUpdated = null;
    pPublic = null;
    pCause_only = null;
    pFilling_type = null;
    pNumber_of_measurements = null;
    pNumber_of_processed_measurements = null;
    pMeasurements_at_last_analysis = null;
    pLast_unit_id = null;
    pLast_original_unit_id = null;
    pLast_value = null;
    pLast_original_value = null;
    pLast_source_id = null;
    pNumber_of_correlations = null;
    pStatus = null;
    pError_message = null;
    pLast_successful_update_time = null;
    pStandard_deviation = null;
    pVariance = null;
    pMinimum_recorded_daily_value = null;
    pMaximum_recorded_daily_value = null;
    pMean = null;
    pMedian = null;
    pMost_common_unit_id = null;
    pMost_common_value = null;
    pNumber_of_unique_daily_values = null;
    pNumber_of_changes = null;
    pSkewness = null;
    pKurtosis = null;
    pLatitude = null;
    pLongitude = null;
    pLocation = null;
    pCreated_at = null;
    pUpdated_at = null;
    pOutcome = null;
    pSources = null;
    pEarliest_source_time = null;
    pLatest_source_time = null;
    pEarliest_measurement_time = null;
    pLatest_measurement_time = null;
    pEarliest_filling_time = null;
    pLatest_filling_time = null;
    
}

void
SamiUserVariable::cleanup() {
    if(pParent_id != null) {
        
        delete pParent_id;
        pParent_id = null;
    }
    if(pClient_id != null) {
        
        delete pClient_id;
        pClient_id = null;
    }
    if(pVariable_id != null) {
        
        delete pVariable_id;
        pVariable_id = null;
    }
    if(pDefault_unit_id != null) {
        
        delete pDefault_unit_id;
        pDefault_unit_id = null;
    }
    if(pMinimum_allowed_value != null) {
        
        delete pMinimum_allowed_value;
        pMinimum_allowed_value = null;
    }
    if(pMaximum_allowed_value != null) {
        
        delete pMaximum_allowed_value;
        pMaximum_allowed_value = null;
    }
    if(pFilling_value != null) {
        
        delete pFilling_value;
        pFilling_value = null;
    }
    if(pJoin_with != null) {
        
        delete pJoin_with;
        pJoin_with = null;
    }
    if(pOnset_delay != null) {
        
        delete pOnset_delay;
        pOnset_delay = null;
    }
    if(pDuration_of_action != null) {
        
        delete pDuration_of_action;
        pDuration_of_action = null;
    }
    if(pVariable_category_id != null) {
        
        delete pVariable_category_id;
        pVariable_category_id = null;
    }
    if(pUpdated != null) {
        
        delete pUpdated;
        pUpdated = null;
    }
    if(pPublic != null) {
        
        delete pPublic;
        pPublic = null;
    }
    if(pCause_only != null) {
        
        delete pCause_only;
        pCause_only = null;
    }
    if(pFilling_type != null) {
        
        delete pFilling_type;
        pFilling_type = null;
    }
    if(pNumber_of_measurements != null) {
        
        delete pNumber_of_measurements;
        pNumber_of_measurements = null;
    }
    if(pNumber_of_processed_measurements != null) {
        
        delete pNumber_of_processed_measurements;
        pNumber_of_processed_measurements = null;
    }
    if(pMeasurements_at_last_analysis != null) {
        
        delete pMeasurements_at_last_analysis;
        pMeasurements_at_last_analysis = null;
    }
    if(pLast_unit_id != null) {
        
        delete pLast_unit_id;
        pLast_unit_id = null;
    }
    if(pLast_original_unit_id != null) {
        
        delete pLast_original_unit_id;
        pLast_original_unit_id = null;
    }
    if(pLast_value != null) {
        
        delete pLast_value;
        pLast_value = null;
    }
    if(pLast_original_value != null) {
        
        delete pLast_original_value;
        pLast_original_value = null;
    }
    if(pLast_source_id != null) {
        
        delete pLast_source_id;
        pLast_source_id = null;
    }
    if(pNumber_of_correlations != null) {
        
        delete pNumber_of_correlations;
        pNumber_of_correlations = null;
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
    if(pStandard_deviation != null) {
        
        delete pStandard_deviation;
        pStandard_deviation = null;
    }
    if(pVariance != null) {
        
        delete pVariance;
        pVariance = null;
    }
    if(pMinimum_recorded_daily_value != null) {
        
        delete pMinimum_recorded_daily_value;
        pMinimum_recorded_daily_value = null;
    }
    if(pMaximum_recorded_daily_value != null) {
        
        delete pMaximum_recorded_daily_value;
        pMaximum_recorded_daily_value = null;
    }
    if(pMean != null) {
        
        delete pMean;
        pMean = null;
    }
    if(pMedian != null) {
        
        delete pMedian;
        pMedian = null;
    }
    if(pMost_common_unit_id != null) {
        
        delete pMost_common_unit_id;
        pMost_common_unit_id = null;
    }
    if(pMost_common_value != null) {
        
        delete pMost_common_value;
        pMost_common_value = null;
    }
    if(pNumber_of_unique_daily_values != null) {
        
        delete pNumber_of_unique_daily_values;
        pNumber_of_unique_daily_values = null;
    }
    if(pNumber_of_changes != null) {
        
        delete pNumber_of_changes;
        pNumber_of_changes = null;
    }
    if(pSkewness != null) {
        
        delete pSkewness;
        pSkewness = null;
    }
    if(pKurtosis != null) {
        
        delete pKurtosis;
        pKurtosis = null;
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
    if(pOutcome != null) {
        
        delete pOutcome;
        pOutcome = null;
    }
    if(pSources != null) {
        
        delete pSources;
        pSources = null;
    }
    if(pEarliest_source_time != null) {
        
        delete pEarliest_source_time;
        pEarliest_source_time = null;
    }
    if(pLatest_source_time != null) {
        
        delete pLatest_source_time;
        pLatest_source_time = null;
    }
    if(pEarliest_measurement_time != null) {
        
        delete pEarliest_measurement_time;
        pEarliest_measurement_time = null;
    }
    if(pLatest_measurement_time != null) {
        
        delete pLatest_measurement_time;
        pLatest_measurement_time = null;
    }
    if(pEarliest_filling_time != null) {
        
        delete pEarliest_filling_time;
        pEarliest_filling_time = null;
    }
    if(pLatest_filling_time != null) {
        
        delete pLatest_filling_time;
        pLatest_filling_time = null;
    }
    
}


SamiUserVariable*
SamiUserVariable::fromJson(String* json) {
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
SamiUserVariable::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pParent_idKey = new JsonString(L"parent_id");
        IJsonValue* pParent_idVal = null;
        pJsonObject->GetValue(pParent_idKey, pParent_idVal);
        if(pParent_idVal != null) {
            
            pParent_id = new Integer();
            jsonToValue(pParent_id, pParent_idVal, L"Integer", L"Integer");
        }
        delete pParent_idKey;
        JsonString* pClient_idKey = new JsonString(L"client_id");
        IJsonValue* pClient_idVal = null;
        pJsonObject->GetValue(pClient_idKey, pClient_idVal);
        if(pClient_idVal != null) {
            
            pClient_id = new String();
            jsonToValue(pClient_id, pClient_idVal, L"String", L"String");
        }
        delete pClient_idKey;
        JsonString* pVariable_idKey = new JsonString(L"variable_id");
        IJsonValue* pVariable_idVal = null;
        pJsonObject->GetValue(pVariable_idKey, pVariable_idVal);
        if(pVariable_idVal != null) {
            
            pVariable_id = new Integer();
            jsonToValue(pVariable_id, pVariable_idVal, L"Integer", L"Integer");
        }
        delete pVariable_idKey;
        JsonString* pDefault_unit_idKey = new JsonString(L"default_unit_id");
        IJsonValue* pDefault_unit_idVal = null;
        pJsonObject->GetValue(pDefault_unit_idKey, pDefault_unit_idVal);
        if(pDefault_unit_idVal != null) {
            
            pDefault_unit_id = new Integer();
            jsonToValue(pDefault_unit_id, pDefault_unit_idVal, L"Integer", L"Integer");
        }
        delete pDefault_unit_idKey;
        JsonString* pMinimum_allowed_valueKey = new JsonString(L"minimum_allowed_value");
        IJsonValue* pMinimum_allowed_valueVal = null;
        pJsonObject->GetValue(pMinimum_allowed_valueKey, pMinimum_allowed_valueVal);
        if(pMinimum_allowed_valueVal != null) {
            
            pMinimum_allowed_value = new Float();
            jsonToValue(pMinimum_allowed_value, pMinimum_allowed_valueVal, L"Float", L"Float");
        }
        delete pMinimum_allowed_valueKey;
        JsonString* pMaximum_allowed_valueKey = new JsonString(L"maximum_allowed_value");
        IJsonValue* pMaximum_allowed_valueVal = null;
        pJsonObject->GetValue(pMaximum_allowed_valueKey, pMaximum_allowed_valueVal);
        if(pMaximum_allowed_valueVal != null) {
            
            pMaximum_allowed_value = new Float();
            jsonToValue(pMaximum_allowed_value, pMaximum_allowed_valueVal, L"Float", L"Float");
        }
        delete pMaximum_allowed_valueKey;
        JsonString* pFilling_valueKey = new JsonString(L"filling_value");
        IJsonValue* pFilling_valueVal = null;
        pJsonObject->GetValue(pFilling_valueKey, pFilling_valueVal);
        if(pFilling_valueVal != null) {
            
            pFilling_value = new Float();
            jsonToValue(pFilling_value, pFilling_valueVal, L"Float", L"Float");
        }
        delete pFilling_valueKey;
        JsonString* pJoin_withKey = new JsonString(L"join_with");
        IJsonValue* pJoin_withVal = null;
        pJsonObject->GetValue(pJoin_withKey, pJoin_withVal);
        if(pJoin_withVal != null) {
            
            pJoin_with = new Integer();
            jsonToValue(pJoin_with, pJoin_withVal, L"Integer", L"Integer");
        }
        delete pJoin_withKey;
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
        JsonString* pVariable_category_idKey = new JsonString(L"variable_category_id");
        IJsonValue* pVariable_category_idVal = null;
        pJsonObject->GetValue(pVariable_category_idKey, pVariable_category_idVal);
        if(pVariable_category_idVal != null) {
            
            pVariable_category_id = new Integer();
            jsonToValue(pVariable_category_id, pVariable_category_idVal, L"Integer", L"Integer");
        }
        delete pVariable_category_idKey;
        JsonString* pUpdatedKey = new JsonString(L"updated");
        IJsonValue* pUpdatedVal = null;
        pJsonObject->GetValue(pUpdatedKey, pUpdatedVal);
        if(pUpdatedVal != null) {
            
            pUpdated = new Integer();
            jsonToValue(pUpdated, pUpdatedVal, L"Integer", L"Integer");
        }
        delete pUpdatedKey;
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
        JsonString* pFilling_typeKey = new JsonString(L"filling_type");
        IJsonValue* pFilling_typeVal = null;
        pJsonObject->GetValue(pFilling_typeKey, pFilling_typeVal);
        if(pFilling_typeVal != null) {
            
            pFilling_type = new String();
            jsonToValue(pFilling_type, pFilling_typeVal, L"String", L"String");
        }
        delete pFilling_typeKey;
        JsonString* pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
        IJsonValue* pNumber_of_measurementsVal = null;
        pJsonObject->GetValue(pNumber_of_measurementsKey, pNumber_of_measurementsVal);
        if(pNumber_of_measurementsVal != null) {
            
            pNumber_of_measurements = new Integer();
            jsonToValue(pNumber_of_measurements, pNumber_of_measurementsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_measurementsKey;
        JsonString* pNumber_of_processed_measurementsKey = new JsonString(L"number_of_processed_measurements");
        IJsonValue* pNumber_of_processed_measurementsVal = null;
        pJsonObject->GetValue(pNumber_of_processed_measurementsKey, pNumber_of_processed_measurementsVal);
        if(pNumber_of_processed_measurementsVal != null) {
            
            pNumber_of_processed_measurements = new Integer();
            jsonToValue(pNumber_of_processed_measurements, pNumber_of_processed_measurementsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_processed_measurementsKey;
        JsonString* pMeasurements_at_last_analysisKey = new JsonString(L"measurements_at_last_analysis");
        IJsonValue* pMeasurements_at_last_analysisVal = null;
        pJsonObject->GetValue(pMeasurements_at_last_analysisKey, pMeasurements_at_last_analysisVal);
        if(pMeasurements_at_last_analysisVal != null) {
            
            pMeasurements_at_last_analysis = new Integer();
            jsonToValue(pMeasurements_at_last_analysis, pMeasurements_at_last_analysisVal, L"Integer", L"Integer");
        }
        delete pMeasurements_at_last_analysisKey;
        JsonString* pLast_unit_idKey = new JsonString(L"last_unit_id");
        IJsonValue* pLast_unit_idVal = null;
        pJsonObject->GetValue(pLast_unit_idKey, pLast_unit_idVal);
        if(pLast_unit_idVal != null) {
            
            pLast_unit_id = new Integer();
            jsonToValue(pLast_unit_id, pLast_unit_idVal, L"Integer", L"Integer");
        }
        delete pLast_unit_idKey;
        JsonString* pLast_original_unit_idKey = new JsonString(L"last_original_unit_id");
        IJsonValue* pLast_original_unit_idVal = null;
        pJsonObject->GetValue(pLast_original_unit_idKey, pLast_original_unit_idVal);
        if(pLast_original_unit_idVal != null) {
            
            pLast_original_unit_id = new Integer();
            jsonToValue(pLast_original_unit_id, pLast_original_unit_idVal, L"Integer", L"Integer");
        }
        delete pLast_original_unit_idKey;
        JsonString* pLast_valueKey = new JsonString(L"last_value");
        IJsonValue* pLast_valueVal = null;
        pJsonObject->GetValue(pLast_valueKey, pLast_valueVal);
        if(pLast_valueVal != null) {
            
            pLast_value = new Float();
            jsonToValue(pLast_value, pLast_valueVal, L"Float", L"Float");
        }
        delete pLast_valueKey;
        JsonString* pLast_original_valueKey = new JsonString(L"last_original_value");
        IJsonValue* pLast_original_valueVal = null;
        pJsonObject->GetValue(pLast_original_valueKey, pLast_original_valueVal);
        if(pLast_original_valueVal != null) {
            
            pLast_original_value = new Integer();
            jsonToValue(pLast_original_value, pLast_original_valueVal, L"Integer", L"Integer");
        }
        delete pLast_original_valueKey;
        JsonString* pLast_source_idKey = new JsonString(L"last_source_id");
        IJsonValue* pLast_source_idVal = null;
        pJsonObject->GetValue(pLast_source_idKey, pLast_source_idVal);
        if(pLast_source_idVal != null) {
            
            pLast_source_id = new Integer();
            jsonToValue(pLast_source_id, pLast_source_idVal, L"Integer", L"Integer");
        }
        delete pLast_source_idKey;
        JsonString* pNumber_of_correlationsKey = new JsonString(L"number_of_correlations");
        IJsonValue* pNumber_of_correlationsVal = null;
        pJsonObject->GetValue(pNumber_of_correlationsKey, pNumber_of_correlationsVal);
        if(pNumber_of_correlationsVal != null) {
            
            pNumber_of_correlations = new Integer();
            jsonToValue(pNumber_of_correlations, pNumber_of_correlationsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_correlationsKey;
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
        JsonString* pMinimum_recorded_daily_valueKey = new JsonString(L"minimum_recorded_daily_value");
        IJsonValue* pMinimum_recorded_daily_valueVal = null;
        pJsonObject->GetValue(pMinimum_recorded_daily_valueKey, pMinimum_recorded_daily_valueVal);
        if(pMinimum_recorded_daily_valueVal != null) {
            
            pMinimum_recorded_daily_value = new Float();
            jsonToValue(pMinimum_recorded_daily_value, pMinimum_recorded_daily_valueVal, L"Float", L"Float");
        }
        delete pMinimum_recorded_daily_valueKey;
        JsonString* pMaximum_recorded_daily_valueKey = new JsonString(L"maximum_recorded_daily_value");
        IJsonValue* pMaximum_recorded_daily_valueVal = null;
        pJsonObject->GetValue(pMaximum_recorded_daily_valueKey, pMaximum_recorded_daily_valueVal);
        if(pMaximum_recorded_daily_valueVal != null) {
            
            pMaximum_recorded_daily_value = new Float();
            jsonToValue(pMaximum_recorded_daily_value, pMaximum_recorded_daily_valueVal, L"Float", L"Float");
        }
        delete pMaximum_recorded_daily_valueKey;
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
        JsonString* pMost_common_unit_idKey = new JsonString(L"most_common_unit_id");
        IJsonValue* pMost_common_unit_idVal = null;
        pJsonObject->GetValue(pMost_common_unit_idKey, pMost_common_unit_idVal);
        if(pMost_common_unit_idVal != null) {
            
            pMost_common_unit_id = new Integer();
            jsonToValue(pMost_common_unit_id, pMost_common_unit_idVal, L"Integer", L"Integer");
        }
        delete pMost_common_unit_idKey;
        JsonString* pMost_common_valueKey = new JsonString(L"most_common_value");
        IJsonValue* pMost_common_valueVal = null;
        pJsonObject->GetValue(pMost_common_valueKey, pMost_common_valueVal);
        if(pMost_common_valueVal != null) {
            
            pMost_common_value = new Float();
            jsonToValue(pMost_common_value, pMost_common_valueVal, L"Float", L"Float");
        }
        delete pMost_common_valueKey;
        JsonString* pNumber_of_unique_daily_valuesKey = new JsonString(L"number_of_unique_daily_values");
        IJsonValue* pNumber_of_unique_daily_valuesVal = null;
        pJsonObject->GetValue(pNumber_of_unique_daily_valuesKey, pNumber_of_unique_daily_valuesVal);
        if(pNumber_of_unique_daily_valuesVal != null) {
            
            pNumber_of_unique_daily_values = new Float();
            jsonToValue(pNumber_of_unique_daily_values, pNumber_of_unique_daily_valuesVal, L"Float", L"Float");
        }
        delete pNumber_of_unique_daily_valuesKey;
        JsonString* pNumber_of_changesKey = new JsonString(L"number_of_changes");
        IJsonValue* pNumber_of_changesVal = null;
        pJsonObject->GetValue(pNumber_of_changesKey, pNumber_of_changesVal);
        if(pNumber_of_changesVal != null) {
            
            pNumber_of_changes = new Integer();
            jsonToValue(pNumber_of_changes, pNumber_of_changesVal, L"Integer", L"Integer");
        }
        delete pNumber_of_changesKey;
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
        JsonString* pOutcomeKey = new JsonString(L"outcome");
        IJsonValue* pOutcomeVal = null;
        pJsonObject->GetValue(pOutcomeKey, pOutcomeVal);
        if(pOutcomeVal != null) {
            
            pOutcome = new Boolean(false);
            jsonToValue(pOutcome, pOutcomeVal, L"Boolean", L"Boolean");
        }
        delete pOutcomeKey;
        JsonString* pSourcesKey = new JsonString(L"sources");
        IJsonValue* pSourcesVal = null;
        pJsonObject->GetValue(pSourcesKey, pSourcesVal);
        if(pSourcesVal != null) {
            
            pSources = new String();
            jsonToValue(pSources, pSourcesVal, L"String", L"String");
        }
        delete pSourcesKey;
        JsonString* pEarliest_source_timeKey = new JsonString(L"earliest_source_time");
        IJsonValue* pEarliest_source_timeVal = null;
        pJsonObject->GetValue(pEarliest_source_timeKey, pEarliest_source_timeVal);
        if(pEarliest_source_timeVal != null) {
            
            pEarliest_source_time = new Integer();
            jsonToValue(pEarliest_source_time, pEarliest_source_timeVal, L"Integer", L"Integer");
        }
        delete pEarliest_source_timeKey;
        JsonString* pLatest_source_timeKey = new JsonString(L"latest_source_time");
        IJsonValue* pLatest_source_timeVal = null;
        pJsonObject->GetValue(pLatest_source_timeKey, pLatest_source_timeVal);
        if(pLatest_source_timeVal != null) {
            
            pLatest_source_time = new Integer();
            jsonToValue(pLatest_source_time, pLatest_source_timeVal, L"Integer", L"Integer");
        }
        delete pLatest_source_timeKey;
        JsonString* pEarliest_measurement_timeKey = new JsonString(L"earliest_measurement_time");
        IJsonValue* pEarliest_measurement_timeVal = null;
        pJsonObject->GetValue(pEarliest_measurement_timeKey, pEarliest_measurement_timeVal);
        if(pEarliest_measurement_timeVal != null) {
            
            pEarliest_measurement_time = new Integer();
            jsonToValue(pEarliest_measurement_time, pEarliest_measurement_timeVal, L"Integer", L"Integer");
        }
        delete pEarliest_measurement_timeKey;
        JsonString* pLatest_measurement_timeKey = new JsonString(L"latest_measurement_time");
        IJsonValue* pLatest_measurement_timeVal = null;
        pJsonObject->GetValue(pLatest_measurement_timeKey, pLatest_measurement_timeVal);
        if(pLatest_measurement_timeVal != null) {
            
            pLatest_measurement_time = new Integer();
            jsonToValue(pLatest_measurement_time, pLatest_measurement_timeVal, L"Integer", L"Integer");
        }
        delete pLatest_measurement_timeKey;
        JsonString* pEarliest_filling_timeKey = new JsonString(L"earliest_filling_time");
        IJsonValue* pEarliest_filling_timeVal = null;
        pJsonObject->GetValue(pEarliest_filling_timeKey, pEarliest_filling_timeVal);
        if(pEarliest_filling_timeVal != null) {
            
            pEarliest_filling_time = new Integer();
            jsonToValue(pEarliest_filling_time, pEarliest_filling_timeVal, L"Integer", L"Integer");
        }
        delete pEarliest_filling_timeKey;
        JsonString* pLatest_filling_timeKey = new JsonString(L"latest_filling_time");
        IJsonValue* pLatest_filling_timeVal = null;
        pJsonObject->GetValue(pLatest_filling_timeKey, pLatest_filling_timeVal);
        if(pLatest_filling_timeVal != null) {
            
            pLatest_filling_time = new Integer();
            jsonToValue(pLatest_filling_time, pLatest_filling_timeVal, L"Integer", L"Integer");
        }
        delete pLatest_filling_timeKey;
        
    }
}

SamiUserVariable::SamiUserVariable(String* json) {
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
SamiUserVariable::asJson ()
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
SamiUserVariable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pParent_idKey = new JsonString(L"parent_id");
    pJsonObject->Add(pParent_idKey, toJson(getPParentId(), "Integer", ""));

    
    JsonString *pClient_idKey = new JsonString(L"client_id");
    pJsonObject->Add(pClient_idKey, toJson(getPClientId(), "String", ""));

    
    JsonString *pVariable_idKey = new JsonString(L"variable_id");
    pJsonObject->Add(pVariable_idKey, toJson(getPVariableId(), "Integer", ""));

    
    JsonString *pDefault_unit_idKey = new JsonString(L"default_unit_id");
    pJsonObject->Add(pDefault_unit_idKey, toJson(getPDefaultUnitId(), "Integer", ""));

    
    JsonString *pMinimum_allowed_valueKey = new JsonString(L"minimum_allowed_value");
    pJsonObject->Add(pMinimum_allowed_valueKey, toJson(getPMinimumAllowedValue(), "Float", ""));

    
    JsonString *pMaximum_allowed_valueKey = new JsonString(L"maximum_allowed_value");
    pJsonObject->Add(pMaximum_allowed_valueKey, toJson(getPMaximumAllowedValue(), "Float", ""));

    
    JsonString *pFilling_valueKey = new JsonString(L"filling_value");
    pJsonObject->Add(pFilling_valueKey, toJson(getPFillingValue(), "Float", ""));

    
    JsonString *pJoin_withKey = new JsonString(L"join_with");
    pJsonObject->Add(pJoin_withKey, toJson(getPJoinWith(), "Integer", ""));

    
    JsonString *pOnset_delayKey = new JsonString(L"onset_delay");
    pJsonObject->Add(pOnset_delayKey, toJson(getPOnsetDelay(), "Integer", ""));

    
    JsonString *pDuration_of_actionKey = new JsonString(L"duration_of_action");
    pJsonObject->Add(pDuration_of_actionKey, toJson(getPDurationOfAction(), "Integer", ""));

    
    JsonString *pVariable_category_idKey = new JsonString(L"variable_category_id");
    pJsonObject->Add(pVariable_category_idKey, toJson(getPVariableCategoryId(), "Integer", ""));

    
    JsonString *pUpdatedKey = new JsonString(L"updated");
    pJsonObject->Add(pUpdatedKey, toJson(getPUpdated(), "Integer", ""));

    
    JsonString *pPublicKey = new JsonString(L"public");
    pJsonObject->Add(pPublicKey, toJson(getPPublic(), "Integer", ""));

    
    JsonString *pCause_onlyKey = new JsonString(L"cause_only");
    pJsonObject->Add(pCause_onlyKey, toJson(getPCauseOnly(), "Boolean", ""));

    
    JsonString *pFilling_typeKey = new JsonString(L"filling_type");
    pJsonObject->Add(pFilling_typeKey, toJson(getPFillingType(), "String", ""));

    
    JsonString *pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
    pJsonObject->Add(pNumber_of_measurementsKey, toJson(getPNumberOfMeasurements(), "Integer", ""));

    
    JsonString *pNumber_of_processed_measurementsKey = new JsonString(L"number_of_processed_measurements");
    pJsonObject->Add(pNumber_of_processed_measurementsKey, toJson(getPNumberOfProcessedMeasurements(), "Integer", ""));

    
    JsonString *pMeasurements_at_last_analysisKey = new JsonString(L"measurements_at_last_analysis");
    pJsonObject->Add(pMeasurements_at_last_analysisKey, toJson(getPMeasurementsAtLastAnalysis(), "Integer", ""));

    
    JsonString *pLast_unit_idKey = new JsonString(L"last_unit_id");
    pJsonObject->Add(pLast_unit_idKey, toJson(getPLastUnitId(), "Integer", ""));

    
    JsonString *pLast_original_unit_idKey = new JsonString(L"last_original_unit_id");
    pJsonObject->Add(pLast_original_unit_idKey, toJson(getPLastOriginalUnitId(), "Integer", ""));

    
    JsonString *pLast_valueKey = new JsonString(L"last_value");
    pJsonObject->Add(pLast_valueKey, toJson(getPLastValue(), "Float", ""));

    
    JsonString *pLast_original_valueKey = new JsonString(L"last_original_value");
    pJsonObject->Add(pLast_original_valueKey, toJson(getPLastOriginalValue(), "Integer", ""));

    
    JsonString *pLast_source_idKey = new JsonString(L"last_source_id");
    pJsonObject->Add(pLast_source_idKey, toJson(getPLastSourceId(), "Integer", ""));

    
    JsonString *pNumber_of_correlationsKey = new JsonString(L"number_of_correlations");
    pJsonObject->Add(pNumber_of_correlationsKey, toJson(getPNumberOfCorrelations(), "Integer", ""));

    
    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    
    JsonString *pError_messageKey = new JsonString(L"error_message");
    pJsonObject->Add(pError_messageKey, toJson(getPErrorMessage(), "String", ""));

    
    JsonString *pLast_successful_update_timeKey = new JsonString(L"last_successful_update_time");
    pJsonObject->Add(pLast_successful_update_timeKey, toJson(getPLastSuccessfulUpdateTime(), "DateTime", ""));

    
    JsonString *pStandard_deviationKey = new JsonString(L"standard_deviation");
    pJsonObject->Add(pStandard_deviationKey, toJson(getPStandardDeviation(), "Float", ""));

    
    JsonString *pVarianceKey = new JsonString(L"variance");
    pJsonObject->Add(pVarianceKey, toJson(getPVariance(), "Float", ""));

    
    JsonString *pMinimum_recorded_daily_valueKey = new JsonString(L"minimum_recorded_daily_value");
    pJsonObject->Add(pMinimum_recorded_daily_valueKey, toJson(getPMinimumRecordedDailyValue(), "Float", ""));

    
    JsonString *pMaximum_recorded_daily_valueKey = new JsonString(L"maximum_recorded_daily_value");
    pJsonObject->Add(pMaximum_recorded_daily_valueKey, toJson(getPMaximumRecordedDailyValue(), "Float", ""));

    
    JsonString *pMeanKey = new JsonString(L"mean");
    pJsonObject->Add(pMeanKey, toJson(getPMean(), "Float", ""));

    
    JsonString *pMedianKey = new JsonString(L"median");
    pJsonObject->Add(pMedianKey, toJson(getPMedian(), "Float", ""));

    
    JsonString *pMost_common_unit_idKey = new JsonString(L"most_common_unit_id");
    pJsonObject->Add(pMost_common_unit_idKey, toJson(getPMostCommonUnitId(), "Integer", ""));

    
    JsonString *pMost_common_valueKey = new JsonString(L"most_common_value");
    pJsonObject->Add(pMost_common_valueKey, toJson(getPMostCommonValue(), "Float", ""));

    
    JsonString *pNumber_of_unique_daily_valuesKey = new JsonString(L"number_of_unique_daily_values");
    pJsonObject->Add(pNumber_of_unique_daily_valuesKey, toJson(getPNumberOfUniqueDailyValues(), "Float", ""));

    
    JsonString *pNumber_of_changesKey = new JsonString(L"number_of_changes");
    pJsonObject->Add(pNumber_of_changesKey, toJson(getPNumberOfChanges(), "Integer", ""));

    
    JsonString *pSkewnessKey = new JsonString(L"skewness");
    pJsonObject->Add(pSkewnessKey, toJson(getPSkewness(), "Float", ""));

    
    JsonString *pKurtosisKey = new JsonString(L"kurtosis");
    pJsonObject->Add(pKurtosisKey, toJson(getPKurtosis(), "Float", ""));

    
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

    
    JsonString *pOutcomeKey = new JsonString(L"outcome");
    pJsonObject->Add(pOutcomeKey, toJson(getPOutcome(), "Boolean", ""));

    
    JsonString *pSourcesKey = new JsonString(L"sources");
    pJsonObject->Add(pSourcesKey, toJson(getPSources(), "String", ""));

    
    JsonString *pEarliest_source_timeKey = new JsonString(L"earliest_source_time");
    pJsonObject->Add(pEarliest_source_timeKey, toJson(getPEarliestSourceTime(), "Integer", ""));

    
    JsonString *pLatest_source_timeKey = new JsonString(L"latest_source_time");
    pJsonObject->Add(pLatest_source_timeKey, toJson(getPLatestSourceTime(), "Integer", ""));

    
    JsonString *pEarliest_measurement_timeKey = new JsonString(L"earliest_measurement_time");
    pJsonObject->Add(pEarliest_measurement_timeKey, toJson(getPEarliestMeasurementTime(), "Integer", ""));

    
    JsonString *pLatest_measurement_timeKey = new JsonString(L"latest_measurement_time");
    pJsonObject->Add(pLatest_measurement_timeKey, toJson(getPLatestMeasurementTime(), "Integer", ""));

    
    JsonString *pEarliest_filling_timeKey = new JsonString(L"earliest_filling_time");
    pJsonObject->Add(pEarliest_filling_timeKey, toJson(getPEarliestFillingTime(), "Integer", ""));

    
    JsonString *pLatest_filling_timeKey = new JsonString(L"latest_filling_time");
    pJsonObject->Add(pLatest_filling_timeKey, toJson(getPLatestFillingTime(), "Integer", ""));

    
    return pJsonObject;
}

Integer*
SamiUserVariable::getPParentId() {
    return pParent_id;
}
void
SamiUserVariable::setPParentId(Integer* pParent_id) {
    this->pParent_id = pParent_id;
}

String*
SamiUserVariable::getPClientId() {
    return pClient_id;
}
void
SamiUserVariable::setPClientId(String* pClient_id) {
    this->pClient_id = pClient_id;
}

Integer*
SamiUserVariable::getPVariableId() {
    return pVariable_id;
}
void
SamiUserVariable::setPVariableId(Integer* pVariable_id) {
    this->pVariable_id = pVariable_id;
}

Integer*
SamiUserVariable::getPDefaultUnitId() {
    return pDefault_unit_id;
}
void
SamiUserVariable::setPDefaultUnitId(Integer* pDefault_unit_id) {
    this->pDefault_unit_id = pDefault_unit_id;
}

Float*
SamiUserVariable::getPMinimumAllowedValue() {
    return pMinimum_allowed_value;
}
void
SamiUserVariable::setPMinimumAllowedValue(Float* pMinimum_allowed_value) {
    this->pMinimum_allowed_value = pMinimum_allowed_value;
}

Float*
SamiUserVariable::getPMaximumAllowedValue() {
    return pMaximum_allowed_value;
}
void
SamiUserVariable::setPMaximumAllowedValue(Float* pMaximum_allowed_value) {
    this->pMaximum_allowed_value = pMaximum_allowed_value;
}

Float*
SamiUserVariable::getPFillingValue() {
    return pFilling_value;
}
void
SamiUserVariable::setPFillingValue(Float* pFilling_value) {
    this->pFilling_value = pFilling_value;
}

Integer*
SamiUserVariable::getPJoinWith() {
    return pJoin_with;
}
void
SamiUserVariable::setPJoinWith(Integer* pJoin_with) {
    this->pJoin_with = pJoin_with;
}

Integer*
SamiUserVariable::getPOnsetDelay() {
    return pOnset_delay;
}
void
SamiUserVariable::setPOnsetDelay(Integer* pOnset_delay) {
    this->pOnset_delay = pOnset_delay;
}

Integer*
SamiUserVariable::getPDurationOfAction() {
    return pDuration_of_action;
}
void
SamiUserVariable::setPDurationOfAction(Integer* pDuration_of_action) {
    this->pDuration_of_action = pDuration_of_action;
}

Integer*
SamiUserVariable::getPVariableCategoryId() {
    return pVariable_category_id;
}
void
SamiUserVariable::setPVariableCategoryId(Integer* pVariable_category_id) {
    this->pVariable_category_id = pVariable_category_id;
}

Integer*
SamiUserVariable::getPUpdated() {
    return pUpdated;
}
void
SamiUserVariable::setPUpdated(Integer* pUpdated) {
    this->pUpdated = pUpdated;
}

Integer*
SamiUserVariable::getPPublic() {
    return pPublic;
}
void
SamiUserVariable::setPPublic(Integer* pPublic) {
    this->pPublic = pPublic;
}

Boolean*
SamiUserVariable::getPCauseOnly() {
    return pCause_only;
}
void
SamiUserVariable::setPCauseOnly(Boolean* pCause_only) {
    this->pCause_only = pCause_only;
}

String*
SamiUserVariable::getPFillingType() {
    return pFilling_type;
}
void
SamiUserVariable::setPFillingType(String* pFilling_type) {
    this->pFilling_type = pFilling_type;
}

Integer*
SamiUserVariable::getPNumberOfMeasurements() {
    return pNumber_of_measurements;
}
void
SamiUserVariable::setPNumberOfMeasurements(Integer* pNumber_of_measurements) {
    this->pNumber_of_measurements = pNumber_of_measurements;
}

Integer*
SamiUserVariable::getPNumberOfProcessedMeasurements() {
    return pNumber_of_processed_measurements;
}
void
SamiUserVariable::setPNumberOfProcessedMeasurements(Integer* pNumber_of_processed_measurements) {
    this->pNumber_of_processed_measurements = pNumber_of_processed_measurements;
}

Integer*
SamiUserVariable::getPMeasurementsAtLastAnalysis() {
    return pMeasurements_at_last_analysis;
}
void
SamiUserVariable::setPMeasurementsAtLastAnalysis(Integer* pMeasurements_at_last_analysis) {
    this->pMeasurements_at_last_analysis = pMeasurements_at_last_analysis;
}

Integer*
SamiUserVariable::getPLastUnitId() {
    return pLast_unit_id;
}
void
SamiUserVariable::setPLastUnitId(Integer* pLast_unit_id) {
    this->pLast_unit_id = pLast_unit_id;
}

Integer*
SamiUserVariable::getPLastOriginalUnitId() {
    return pLast_original_unit_id;
}
void
SamiUserVariable::setPLastOriginalUnitId(Integer* pLast_original_unit_id) {
    this->pLast_original_unit_id = pLast_original_unit_id;
}

Float*
SamiUserVariable::getPLastValue() {
    return pLast_value;
}
void
SamiUserVariable::setPLastValue(Float* pLast_value) {
    this->pLast_value = pLast_value;
}

Integer*
SamiUserVariable::getPLastOriginalValue() {
    return pLast_original_value;
}
void
SamiUserVariable::setPLastOriginalValue(Integer* pLast_original_value) {
    this->pLast_original_value = pLast_original_value;
}

Integer*
SamiUserVariable::getPLastSourceId() {
    return pLast_source_id;
}
void
SamiUserVariable::setPLastSourceId(Integer* pLast_source_id) {
    this->pLast_source_id = pLast_source_id;
}

Integer*
SamiUserVariable::getPNumberOfCorrelations() {
    return pNumber_of_correlations;
}
void
SamiUserVariable::setPNumberOfCorrelations(Integer* pNumber_of_correlations) {
    this->pNumber_of_correlations = pNumber_of_correlations;
}

String*
SamiUserVariable::getPStatus() {
    return pStatus;
}
void
SamiUserVariable::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

String*
SamiUserVariable::getPErrorMessage() {
    return pError_message;
}
void
SamiUserVariable::setPErrorMessage(String* pError_message) {
    this->pError_message = pError_message;
}

DateTime*
SamiUserVariable::getPLastSuccessfulUpdateTime() {
    return pLast_successful_update_time;
}
void
SamiUserVariable::setPLastSuccessfulUpdateTime(DateTime* pLast_successful_update_time) {
    this->pLast_successful_update_time = pLast_successful_update_time;
}

Float*
SamiUserVariable::getPStandardDeviation() {
    return pStandard_deviation;
}
void
SamiUserVariable::setPStandardDeviation(Float* pStandard_deviation) {
    this->pStandard_deviation = pStandard_deviation;
}

Float*
SamiUserVariable::getPVariance() {
    return pVariance;
}
void
SamiUserVariable::setPVariance(Float* pVariance) {
    this->pVariance = pVariance;
}

Float*
SamiUserVariable::getPMinimumRecordedDailyValue() {
    return pMinimum_recorded_daily_value;
}
void
SamiUserVariable::setPMinimumRecordedDailyValue(Float* pMinimum_recorded_daily_value) {
    this->pMinimum_recorded_daily_value = pMinimum_recorded_daily_value;
}

Float*
SamiUserVariable::getPMaximumRecordedDailyValue() {
    return pMaximum_recorded_daily_value;
}
void
SamiUserVariable::setPMaximumRecordedDailyValue(Float* pMaximum_recorded_daily_value) {
    this->pMaximum_recorded_daily_value = pMaximum_recorded_daily_value;
}

Float*
SamiUserVariable::getPMean() {
    return pMean;
}
void
SamiUserVariable::setPMean(Float* pMean) {
    this->pMean = pMean;
}

Float*
SamiUserVariable::getPMedian() {
    return pMedian;
}
void
SamiUserVariable::setPMedian(Float* pMedian) {
    this->pMedian = pMedian;
}

Integer*
SamiUserVariable::getPMostCommonUnitId() {
    return pMost_common_unit_id;
}
void
SamiUserVariable::setPMostCommonUnitId(Integer* pMost_common_unit_id) {
    this->pMost_common_unit_id = pMost_common_unit_id;
}

Float*
SamiUserVariable::getPMostCommonValue() {
    return pMost_common_value;
}
void
SamiUserVariable::setPMostCommonValue(Float* pMost_common_value) {
    this->pMost_common_value = pMost_common_value;
}

Float*
SamiUserVariable::getPNumberOfUniqueDailyValues() {
    return pNumber_of_unique_daily_values;
}
void
SamiUserVariable::setPNumberOfUniqueDailyValues(Float* pNumber_of_unique_daily_values) {
    this->pNumber_of_unique_daily_values = pNumber_of_unique_daily_values;
}

Integer*
SamiUserVariable::getPNumberOfChanges() {
    return pNumber_of_changes;
}
void
SamiUserVariable::setPNumberOfChanges(Integer* pNumber_of_changes) {
    this->pNumber_of_changes = pNumber_of_changes;
}

Float*
SamiUserVariable::getPSkewness() {
    return pSkewness;
}
void
SamiUserVariable::setPSkewness(Float* pSkewness) {
    this->pSkewness = pSkewness;
}

Float*
SamiUserVariable::getPKurtosis() {
    return pKurtosis;
}
void
SamiUserVariable::setPKurtosis(Float* pKurtosis) {
    this->pKurtosis = pKurtosis;
}

Float*
SamiUserVariable::getPLatitude() {
    return pLatitude;
}
void
SamiUserVariable::setPLatitude(Float* pLatitude) {
    this->pLatitude = pLatitude;
}

Float*
SamiUserVariable::getPLongitude() {
    return pLongitude;
}
void
SamiUserVariable::setPLongitude(Float* pLongitude) {
    this->pLongitude = pLongitude;
}

String*
SamiUserVariable::getPLocation() {
    return pLocation;
}
void
SamiUserVariable::setPLocation(String* pLocation) {
    this->pLocation = pLocation;
}

DateTime*
SamiUserVariable::getPCreatedAt() {
    return pCreated_at;
}
void
SamiUserVariable::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiUserVariable::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiUserVariable::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}

Boolean*
SamiUserVariable::getPOutcome() {
    return pOutcome;
}
void
SamiUserVariable::setPOutcome(Boolean* pOutcome) {
    this->pOutcome = pOutcome;
}

String*
SamiUserVariable::getPSources() {
    return pSources;
}
void
SamiUserVariable::setPSources(String* pSources) {
    this->pSources = pSources;
}

Integer*
SamiUserVariable::getPEarliestSourceTime() {
    return pEarliest_source_time;
}
void
SamiUserVariable::setPEarliestSourceTime(Integer* pEarliest_source_time) {
    this->pEarliest_source_time = pEarliest_source_time;
}

Integer*
SamiUserVariable::getPLatestSourceTime() {
    return pLatest_source_time;
}
void
SamiUserVariable::setPLatestSourceTime(Integer* pLatest_source_time) {
    this->pLatest_source_time = pLatest_source_time;
}

Integer*
SamiUserVariable::getPEarliestMeasurementTime() {
    return pEarliest_measurement_time;
}
void
SamiUserVariable::setPEarliestMeasurementTime(Integer* pEarliest_measurement_time) {
    this->pEarliest_measurement_time = pEarliest_measurement_time;
}

Integer*
SamiUserVariable::getPLatestMeasurementTime() {
    return pLatest_measurement_time;
}
void
SamiUserVariable::setPLatestMeasurementTime(Integer* pLatest_measurement_time) {
    this->pLatest_measurement_time = pLatest_measurement_time;
}

Integer*
SamiUserVariable::getPEarliestFillingTime() {
    return pEarliest_filling_time;
}
void
SamiUserVariable::setPEarliestFillingTime(Integer* pEarliest_filling_time) {
    this->pEarliest_filling_time = pEarliest_filling_time;
}

Integer*
SamiUserVariable::getPLatestFillingTime() {
    return pLatest_filling_time;
}
void
SamiUserVariable::setPLatestFillingTime(Integer* pLatest_filling_time) {
    this->pLatest_filling_time = pLatest_filling_time;
}



} /* namespace Swagger */

