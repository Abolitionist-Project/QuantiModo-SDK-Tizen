#include "SamiAggregatedCorrelationApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAggregatedCorrelationApi::SamiAggregatedCorrelationApi() {

}

SamiAggregatedCorrelationApi::~SamiAggregatedCorrelationApi() {

}

void
aggregatedCorrelationsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInline_response_200* out = new SamiInline_response_200();
    jsonToValue(out, pJson, L"SamiInline_response_200*", L"SamiInline_response_200");

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

SamiInline_response_200* 
SamiAggregatedCorrelationApi::aggregatedCorrelationsGetWithCompletion(String* accessToken, Long* correlation, Integer* causeId, Integer* effectId, Integer* onsetDelay, Integer* durationOfAction, Integer* numberOfPairs, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Long* optimalPearsonProduct, Integer* numberOfUsers, Integer* numberOfCorrelations, Long* statisticalSignificance, String* causeUnit, Integer* causeUnitId, Integer* causeChanges, Integer* effectChanges, Long* aggregateQmScore, String* createdAt, String* updatedAt, String* status, String* errorMessage, String* lastSuccessfulUpdateTime, Long* reversePearsonCorrelationCoefficient, Long* predictivePearsonCorrelationCoefficient, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&aggregatedCorrelationsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);
  
  
    queryParams->Add(new String("correlation"), correlation);
  
  
    queryParams->Add(new String("cause_id"), causeId);
  
  
    queryParams->Add(new String("effect_id"), effectId);
  
  
    queryParams->Add(new String("onset_delay"), onsetDelay);
  
  
    queryParams->Add(new String("duration_of_action"), durationOfAction);
  
  
    queryParams->Add(new String("number_of_pairs"), numberOfPairs);
  
  
    queryParams->Add(new String("value_predicting_high_outcome"), valuePredictingHighOutcome);
  
  
    queryParams->Add(new String("value_predicting_low_outcome"), valuePredictingLowOutcome);
  
  
    queryParams->Add(new String("optimal_pearson_product"), optimalPearsonProduct);
  
  
    queryParams->Add(new String("number_of_users"), numberOfUsers);
  
  
    queryParams->Add(new String("number_of_correlations"), numberOfCorrelations);
  
  
    queryParams->Add(new String("statistical_significance"), statisticalSignificance);
  
  
    queryParams->Add(new String("cause_unit"), causeUnit);
  
  
    queryParams->Add(new String("cause_unit_id"), causeUnitId);
  
  
    queryParams->Add(new String("cause_changes"), causeChanges);
  
  
    queryParams->Add(new String("effect_changes"), effectChanges);
  
  
    queryParams->Add(new String("aggregate_qm_score"), aggregateQmScore);
  
  
    queryParams->Add(new String("created_at"), createdAt);
  
  
    queryParams->Add(new String("updated_at"), updatedAt);
  
  
    queryParams->Add(new String("status"), status);
  
  
    queryParams->Add(new String("error_message"), errorMessage);
  
  
    queryParams->Add(new String("last_successful_update_time"), lastSuccessfulUpdateTime);
  
  
    queryParams->Add(new String("reverse_pearson_correlation_coefficient"), reversePearsonCorrelationCoefficient);
  
  
    queryParams->Add(new String("predictive_pearson_correlation_coefficient"), predictivePearsonCorrelationCoefficient);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/aggregatedCorrelations");

  

  client->execute(SamiAggregatedCorrelationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
aggregatedCorrelationsPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAggregatedCorrelationApi::aggregatedCorrelationsPostWithCompletion(String* accessToken, SamiAggregatedCorrelation* body, void (* success)(SamiInline_response_200_1*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&aggregatedCorrelationsPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);
  
  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/aggregatedCorrelations");

  

  client->execute(SamiAggregatedCorrelationApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
aggregatedCorrelationsIdGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAggregatedCorrelationApi::aggregatedCorrelationsIdGetWithCompletion(Integer* _id, String* accessToken, void (* success)(SamiInline_response_200_1*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&aggregatedCorrelationsIdGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);
  
  

  String* mBody = null;

  

  String url(L"/aggregatedCorrelations/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiAggregatedCorrelationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
aggregatedCorrelationsIdPutProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAggregatedCorrelationApi::aggregatedCorrelationsIdPutWithCompletion(Integer* _id, String* accessToken, SamiAggregatedCorrelation* body, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&aggregatedCorrelationsIdPutProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);
  
  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/aggregatedCorrelations/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiAggregatedCorrelationApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
aggregatedCorrelationsIdDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAggregatedCorrelationApi::aggregatedCorrelationsIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&aggregatedCorrelationsIdDeleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);
  
  

  String* mBody = null;

  

  String url(L"/aggregatedCorrelations/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiAggregatedCorrelationApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
