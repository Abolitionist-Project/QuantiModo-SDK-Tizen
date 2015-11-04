#include "SamiVariableApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiVariableApi::SamiVariableApi() {

}

SamiVariableApi::~SamiVariableApi() {

}

void
variablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_27* out = new SamiInline_response_200_27();
    jsonToValue(out, pJson, L"SamiInline_response_200_27*", L"SamiInline_response_200_27");

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

SamiInline_response_200_27* 
SamiVariableApi::variablesGetWithCompletion(Integer* _id, String* clientId, Integer* parentId, String* name, Integer* variableCategoryId, Integer* defaultUnitId, String* combinationOperation, Long* fillingValue, Long* maximumAllowedValue, Long* minimumAllowedValue, Integer* onsetDelay, Integer* durationOfAction, Integer* public, Boolean* causeOnly, Long* mostCommonValue, Integer* mostCommonUnitId, Long* standardDeviation, Long* variance, Long* mean, Long* median, Long* numberOfMeasurements, Long* numberOfUniqueValues, Long* skewness, Long* kurtosis, Long* latitude, Long* longitude, String* location, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, String* createdAt, String* updatedAt, String* productUrl, String* imageUrl, Long* price, Integer* numberOfUserVariables, Boolean* outcome, Long* minimumRecordedValue, Long* maximumRecordedValue, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_27*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("id"), _id);
  
  
    queryParams->Add(new String("client_id"), clientId);
  
  
    queryParams->Add(new String("parent_id"), parentId);
  
  
    queryParams->Add(new String("name"), name);
  
  
    queryParams->Add(new String("variable_category_id"), variableCategoryId);
  
  
    queryParams->Add(new String("default_unit_id"), defaultUnitId);
  
  
    queryParams->Add(new String("combination_operation"), combinationOperation);
  
  
    queryParams->Add(new String("filling_value"), fillingValue);
  
  
    queryParams->Add(new String("maximum_allowed_value"), maximumAllowedValue);
  
  
    queryParams->Add(new String("minimum_allowed_value"), minimumAllowedValue);
  
  
    queryParams->Add(new String("onset_delay"), onsetDelay);
  
  
    queryParams->Add(new String("duration_of_action"), durationOfAction);
  
  
    queryParams->Add(new String("public"), public);
  
  
    queryParams->Add(new String("cause_only"), causeOnly);
  
  
    queryParams->Add(new String("most_common_value"), mostCommonValue);
  
  
    queryParams->Add(new String("most_common_unit_id"), mostCommonUnitId);
  
  
    queryParams->Add(new String("standard_deviation"), standardDeviation);
  
  
    queryParams->Add(new String("variance"), variance);
  
  
    queryParams->Add(new String("mean"), mean);
  
  
    queryParams->Add(new String("median"), median);
  
  
    queryParams->Add(new String("number_of_measurements"), numberOfMeasurements);
  
  
    queryParams->Add(new String("number_of_unique_values"), numberOfUniqueValues);
  
  
    queryParams->Add(new String("skewness"), skewness);
  
  
    queryParams->Add(new String("kurtosis"), kurtosis);
  
  
    queryParams->Add(new String("latitude"), latitude);
  
  
    queryParams->Add(new String("longitude"), longitude);
  
  
    queryParams->Add(new String("location"), location);
  
  
    queryParams->Add(new String("status"), status);
  
  
    queryParams->Add(new String("error_message"), errorMessage);
  
  
    queryParams->Add(new String("last_successful_update_time"), lastSuccessfulUpdateTime);
  
  
    queryParams->Add(new String("created_at"), createdAt);
  
  
    queryParams->Add(new String("updated_at"), updatedAt);
  
  
    queryParams->Add(new String("product_url"), productUrl);
  
  
    queryParams->Add(new String("image_url"), imageUrl);
  
  
    queryParams->Add(new String("price"), price);
  
  
    queryParams->Add(new String("number_of_user_variables"), numberOfUserVariables);
  
  
    queryParams->Add(new String("outcome"), outcome);
  
  
    queryParams->Add(new String("minimum_recorded_value"), minimumRecordedValue);
  
  
    queryParams->Add(new String("maximum_recorded_value"), maximumRecordedValue);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/variables");

  

  client->execute(SamiVariableApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
variablesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_28* out = new SamiInline_response_200_28();
    jsonToValue(out, pJson, L"SamiInline_response_200_28*", L"SamiInline_response_200_28");

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

SamiInline_response_200_28* 
SamiVariableApi::variablesPostWithCompletion(SamiVariable* body, void (* success)(SamiInline_response_200_28*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/variables");

  

  client->execute(SamiVariableApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
variablesIdGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200_28* out = new SamiInline_response_200_28();
    jsonToValue(out, pJson, L"SamiInline_response_200_28*", L"SamiInline_response_200_28");

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

SamiInline_response_200_28* 
SamiVariableApi::variablesIdGetWithCompletion(Integer* _id, void (* success)(SamiInline_response_200_28*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesIdGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/variables/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiVariableApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
variablesIdPutProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariableApi::variablesIdPutWithCompletion(Integer* _id, SamiVariable* body, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesIdPutProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/variables/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiVariableApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
variablesIdDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariableApi::variablesIdDeleteWithCompletion(Integer* _id, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesIdDeleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/variables/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiVariableApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
