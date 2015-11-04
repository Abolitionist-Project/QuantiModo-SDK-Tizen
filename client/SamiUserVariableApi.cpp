#include "SamiUserVariableApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiUserVariableApi::SamiUserVariableApi() {

}

SamiUserVariableApi::~SamiUserVariableApi() {

}

void
userVariablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_21* out = new SamiInline_response_200_21();
    jsonToValue(out, pJson, L"SamiInline_response_200_21*", L"SamiInline_response_200_21");

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

SamiInline_response_200_21* 
SamiUserVariableApi::userVariablesGetWithCompletion(String* clientId, Integer* variableId, Integer* defaultUnitId, Long* minimumAllowedValue, Long* maximumAllowedValue, Long* fillingValue, Integer* joinWith, Integer* onsetDelay, Integer* durationOfAction, Integer* variableCategoryId, Integer* updated, Integer* public, Boolean* causeOnly, String* fillingType, Integer* numberOfMeasurements, Integer* numberOfProcessedMeasurements, Integer* measurementsAtLastAnalysis, Integer* lastUnitId, Integer* lastOriginalUnitId, Integer* lastOriginalValue, Long* lastValue, Integer* lastSourceId, Integer* numberOfCorrelations, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, Long* standardDeviation, Long* variance, Long* minimumRecordedDailyValue, Long* maximumRecordedDailyValue, Long* mean, Long* median, Integer* mostCommonUnitId, Long* mostCommonValue, Long* numberOfUniqueDailyValues, Integer* numberOfChanges, Long* skewness, Long* kurtosis, Long* latitude, Long* longitude, String* location, String* createdAt, String* updatedAt, Boolean* outcome, String* sources, Integer* earliestSourceTime, Integer* latestSourceTime, Integer* earliestMeasurementTime, Integer* latestMeasurementTime, Integer* earliestFillingTime, Integer* latestFillingTime, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_21*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&userVariablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("client_id"), clientId);
  
  
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
  
  
    queryParams->Add(new String("minimum_recorded_daily_value"), minimumRecordedDailyValue);
  
  
    queryParams->Add(new String("maximum_recorded_daily_value"), maximumRecordedDailyValue);
  
  
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

  

  String url(L"/userVariables");

  

  client->execute(SamiUserVariableApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
userVariablesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_22* out = new SamiInline_response_200_22();
    jsonToValue(out, pJson, L"SamiInline_response_200_22*", L"SamiInline_response_200_22");

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

SamiInline_response_200_22* 
SamiUserVariableApi::userVariablesPostWithCompletion(SamiUserVariable* body, void (* success)(SamiInline_response_200_22*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&userVariablesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/userVariables");

  

  client->execute(SamiUserVariableApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
userVariablesIdGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_22* out = new SamiInline_response_200_22();
    jsonToValue(out, pJson, L"SamiInline_response_200_22*", L"SamiInline_response_200_22");

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

SamiInline_response_200_22* 
SamiUserVariableApi::userVariablesIdGetWithCompletion(Integer* _id, void (* success)(SamiInline_response_200_22*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&userVariablesIdGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/userVariables/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiUserVariableApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
userVariablesIdPutProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_2* out = new SamiInline_response_200_2();
    jsonToValue(out, pJson, L"SamiInline_response_200_2*", L"SamiInline_response_200_2");

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

SamiInline_response_200_2* 
SamiUserVariableApi::userVariablesIdPutWithCompletion(Integer* _id, SamiUserVariable* body, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&userVariablesIdPutProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/userVariables/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiUserVariableApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
userVariablesIdDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_2* out = new SamiInline_response_200_2();
    jsonToValue(out, pJson, L"SamiInline_response_200_2*", L"SamiInline_response_200_2");

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

SamiInline_response_200_2* 
SamiUserVariableApi::userVariablesIdDeleteWithCompletion(Integer* _id, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&userVariablesIdDeleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/userVariables/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiUserVariableApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
