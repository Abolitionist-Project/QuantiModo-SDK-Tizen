#include "SamiApplicationEndpointsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiApplicationEndpointsApi::SamiApplicationEndpointsApi() {

}

SamiApplicationEndpointsApi::~SamiApplicationEndpointsApi() {

}

void
v2ApplicationConnectionsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_3* out = new SamiInline_response_200_3();
    jsonToValue(out, pJson, L"SamiInline_response_200_3*", L"SamiInline_response_200_3");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_3* 
SamiApplicationEndpointsApi::v2ApplicationConnectionsGetWithCompletion(String* accessToken, Integer* connectorId, String* connectStatus, String* connectError, String* updateRequestedAt, String* updateStatus, String* updateError, String* lastSuccessfulUpdatedAt, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_3*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationConnectionsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("connector_id"), connectorId);

    queryParams->Add(new String("connect_status"), connectStatus);

    queryParams->Add(new String("connect_error"), connectError);

    queryParams->Add(new String("update_requested_at"), updateRequestedAt);

    queryParams->Add(new String("update_status"), updateStatus);

    queryParams->Add(new String("update_error"), updateError);

    queryParams->Add(new String("last_successful_updated_at"), lastSuccessfulUpdatedAt);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/connections");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationCredentialsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_4* out = new SamiInline_response_200_4();
    jsonToValue(out, pJson, L"SamiInline_response_200_4*", L"SamiInline_response_200_4");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_4* 
SamiApplicationEndpointsApi::v2ApplicationCredentialsGetWithCompletion(String* accessToken, Integer* connectorId, String* attrKey, String* attrValue, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_4*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationCredentialsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("connector_id"), connectorId);

    queryParams->Add(new String("attr_key"), attrKey);

    queryParams->Add(new String("attr_value"), attrValue);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/credentials");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationMeasurementsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_5* out = new SamiInline_response_200_5();
    jsonToValue(out, pJson, L"SamiInline_response_200_5*", L"SamiInline_response_200_5");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_5* 
SamiApplicationEndpointsApi::v2ApplicationMeasurementsGetWithCompletion(String* accessToken, String* clientId, Integer* connectorId, Integer* variableId, Integer* sourceId, String* startTime, Long* value, Integer* unitId, Long* originalValue, Integer* originalUnitId, Integer* duration, String* note, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, String* error, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_5*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationMeasurementsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("client_id"), clientId);

    queryParams->Add(new String("connector_id"), connectorId);

    queryParams->Add(new String("variable_id"), variableId);

    queryParams->Add(new String("source_id"), sourceId);

    queryParams->Add(new String("start_time"), startTime);

    queryParams->Add(new String("value"), value);

    queryParams->Add(new String("unit_id"), unitId);

    queryParams->Add(new String("original_value"), originalValue);

    queryParams->Add(new String("original_unit_id"), originalUnitId);

    queryParams->Add(new String("duration"), duration);

    queryParams->Add(new String("note"), note);

    queryParams->Add(new String("latitude"), latitude);

    queryParams->Add(new String("longitude"), longitude);

    queryParams->Add(new String("location"), location);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("error"), error);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/measurements");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationTrackingRemindersGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_1* out = new SamiInline_response_200_1();
    jsonToValue(out, pJson, L"SamiInline_response_200_1*", L"SamiInline_response_200_1");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_1* 
SamiApplicationEndpointsApi::v2ApplicationTrackingRemindersGetWithCompletion(String* accessToken, String* clientId, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_1*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationTrackingRemindersGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("client_id"), clientId);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/trackingReminders");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationUpdatesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_6* out = new SamiInline_response_200_6();
    jsonToValue(out, pJson, L"SamiInline_response_200_6*", L"SamiInline_response_200_6");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_6* 
SamiApplicationEndpointsApi::v2ApplicationUpdatesGetWithCompletion(String* accessToken, Integer* connectorId, Integer* numberOfMeasurements, Boolean* success, String* message, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_6*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationUpdatesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("connector_id"), connectorId);

    queryParams->Add(new String("number_of_measurements"), numberOfMeasurements);

    queryParams->Add(new String("success"), success);

    queryParams->Add(new String("message"), message);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/updates");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationUserVariableRelationshipsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_7* out = new SamiInline_response_200_7();
    jsonToValue(out, pJson, L"SamiInline_response_200_7*", L"SamiInline_response_200_7");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_7* 
SamiApplicationEndpointsApi::v2ApplicationUserVariableRelationshipsGetWithCompletion(String* accessToken, Integer* _id, String* confidenceLevel, Long* confidenceScore, String* direction, Integer* durationOfAction, String* errorMessage, Integer* onsetDelay, Integer* outcomeVariableId, Integer* predictorVariableId, Integer* predictorUnitId, Long* sinnRank, String* strengthLevel, Long* strengthScore, String* vote, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_7*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationUserVariableRelationshipsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("id"), _id);

    queryParams->Add(new String("confidence_level"), confidenceLevel);

    queryParams->Add(new String("confidence_score"), confidenceScore);

    queryParams->Add(new String("direction"), direction);

    queryParams->Add(new String("duration_of_action"), durationOfAction);

    queryParams->Add(new String("error_message"), errorMessage);

    queryParams->Add(new String("onset_delay"), onsetDelay);

    queryParams->Add(new String("outcome_variable_id"), outcomeVariableId);

    queryParams->Add(new String("predictor_variable_id"), predictorVariableId);

    queryParams->Add(new String("predictor_unit_id"), predictorUnitId);

    queryParams->Add(new String("sinn_rank"), sinnRank);

    queryParams->Add(new String("strength_level"), strengthLevel);

    queryParams->Add(new String("strength_score"), strengthScore);

    queryParams->Add(new String("vote"), vote);

    queryParams->Add(new String("value_predicting_high_outcome"), valuePredictingHighOutcome);

    queryParams->Add(new String("value_predicting_low_outcome"), valuePredictingLowOutcome);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/userVariableRelationships");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationUserVariablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_8* out = new SamiInline_response_200_8();
    jsonToValue(out, pJson, L"SamiInline_response_200_8*", L"SamiInline_response_200_8");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_8* 
SamiApplicationEndpointsApi::v2ApplicationUserVariablesGetWithCompletion(String* accessToken, String* clientId, Integer* parentId, Integer* variableId, Integer* defaultUnitId, Long* minimumAllowedValue, Long* maximumAllowedValue, Long* fillingValue, Integer* joinWith, Integer* onsetDelay, Integer* durationOfAction, Integer* variableCategoryId, Integer* updated, Integer* public, Boolean* causeOnly, String* fillingType, Integer* numberOfMeasurements, Integer* numberOfProcessedMeasurements, Integer* measurementsAtLastAnalysis, Integer* lastUnitId, Integer* lastOriginalUnitId, Integer* lastOriginalValue, Long* lastValue, Integer* lastSourceId, Integer* numberOfCorrelations, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, Long* standardDeviation, Long* variance, Long* minimumRecordedValue, Long* maximumRecordedValue, Long* mean, Long* median, Integer* mostCommonUnitId, Long* mostCommonValue, Long* numberOfUniqueDailyValues, Integer* numberOfChanges, Long* skewness, Long* kurtosis, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, Boolean* outcome, String* sources, Integer* earliestSourceTime, Integer* latestSourceTime, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, Integer* earliestFillingTime, Integer* latestFillingTime, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_8*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationUserVariablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("client_id"), clientId);

    queryParams->Add(new String("parent_id"), parentId);

    queryParams->Add(new String("variable_id"), variableId);

    queryParams->Add(new String("default_unit_id"), defaultUnitId);

    queryParams->Add(new String("minimum_allowed_value"), minimumAllowedValue);

    queryParams->Add(new String("maximum_allowed_value"), maximumAllowedValue);

    queryParams->Add(new String("filling_value"), fillingValue);

    queryParams->Add(new String("join_with"), joinWith);

    queryParams->Add(new String("onset_delay"), onsetDelay);

    queryParams->Add(new String("duration_of_action"), durationOfAction);

    queryParams->Add(new String("variable_category_id"), variableCategoryId);

    queryParams->Add(new String("updated"), updated);

    queryParams->Add(new String("public"), public);

    queryParams->Add(new String("cause_only"), causeOnly);

    queryParams->Add(new String("filling_type"), fillingType);

    queryParams->Add(new String("number_of_measurements"), numberOfMeasurements);

    queryParams->Add(new String("number_of_processed_measurements"), numberOfProcessedMeasurements);

    queryParams->Add(new String("measurements_at_last_analysis"), measurementsAtLastAnalysis);

    queryParams->Add(new String("last_unit_id"), lastUnitId);

    queryParams->Add(new String("last_original_unit_id"), lastOriginalUnitId);

    queryParams->Add(new String("last_original_value"), lastOriginalValue);

    queryParams->Add(new String("last_value"), lastValue);

    queryParams->Add(new String("last_source_id"), lastSourceId);

    queryParams->Add(new String("number_of_correlations"), numberOfCorrelations);

    queryParams->Add(new String("status"), status);

    queryParams->Add(new String("error_message"), errorMessage);

    queryParams->Add(new String("last_successful_update_time"), lastSuccessfulUpdateTime);

    queryParams->Add(new String("standard_deviation"), standardDeviation);

    queryParams->Add(new String("variance"), variance);

    queryParams->Add(new String("minimum_recorded_value"), minimumRecordedValue);

    queryParams->Add(new String("maximum_recorded_value"), maximumRecordedValue);

    queryParams->Add(new String("mean"), mean);

    queryParams->Add(new String("median"), median);

    queryParams->Add(new String("most_common_unit_id"), mostCommonUnitId);

    queryParams->Add(new String("most_common_value"), mostCommonValue);

    queryParams->Add(new String("number_of_unique_daily_values"), numberOfUniqueDailyValues);

    queryParams->Add(new String("number_of_changes"), numberOfChanges);

    queryParams->Add(new String("skewness"), skewness);

    queryParams->Add(new String("kurtosis"), kurtosis);

    queryParams->Add(new String("latitude"), latitude);

    queryParams->Add(new String("longitude"), longitude);

    queryParams->Add(new String("location"), location);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("outcome"), outcome);

    queryParams->Add(new String("sources"), sources);

    queryParams->Add(new String("earliest_source_time"), earliestSourceTime);

    queryParams->Add(new String("latest_source_time"), latestSourceTime);

    queryParams->Add(new String("earliest_measurement_time"), earliestMeasurementTime);

    queryParams->Add(new String("latest_measurement_time"), latestMeasurementTime);

    queryParams->Add(new String("earliest_filling_time"), earliestFillingTime);

    queryParams->Add(new String("latest_filling_time"), latestFillingTime);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/userVariables");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationVariableUserSourcesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_9* out = new SamiInline_response_200_9();
    jsonToValue(out, pJson, L"SamiInline_response_200_9*", L"SamiInline_response_200_9");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_9* 
SamiApplicationEndpointsApi::v2ApplicationVariableUserSourcesGetWithCompletion(String* accessToken, Integer* variableId, Integer* timestamp, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_9*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationVariableUserSourcesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("variable_id"), variableId);

    queryParams->Add(new String("timestamp"), timestamp);

    queryParams->Add(new String("earliest_measurement_time"), earliestMeasurementTime);

    queryParams->Add(new String("latest_measurement_time"), latestMeasurementTime);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/variableUserSources");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v2ApplicationVotesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_10* out = new SamiInline_response_200_10();
    jsonToValue(out, pJson, L"SamiInline_response_200_10*", L"SamiInline_response_200_10");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiInline_response_200_10* 
SamiApplicationEndpointsApi::v2ApplicationVotesGetWithCompletion(String* accessToken, String* clientId, Integer* causeId, Integer* effectId, Integer* value, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_10*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v2ApplicationVotesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("client_id"), clientId);

    queryParams->Add(new String("cause_id"), causeId);

    queryParams->Add(new String("effect_id"), effectId);

    queryParams->Add(new String("value"), value);

    queryParams->Add(new String("created_at"), createdAt);

    queryParams->Add(new String("updated_at"), updatedAt);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v2/application/votes");


  client->execute(SamiApplicationEndpointsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
