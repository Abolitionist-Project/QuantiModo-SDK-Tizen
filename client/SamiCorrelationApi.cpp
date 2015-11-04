#include "SamiCorrelationApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCorrelationApi::SamiCorrelationApi() {

}

SamiCorrelationApi::~SamiCorrelationApi() {

}

void
correlationsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiCorrelationApi::correlationsGetWithCompletion(Integer* timestamp, Integer* userId, Long* correlation, Integer* causeId, Integer* effectId, Integer* onsetDelay, Integer* durationOfAction, Integer* numberOfPairs, Long* valuePredictingHighOutcome, Long* valuePredictingLowOutcome, Long* optimalPearsonProduct, Long* vote, Long* statisticalSignificance, String* causeUnit, Integer* causeUnitId, Integer* causeChanges, Integer* effectChanges, Long* qmScore, String* error, String* createdAt, String* updatedAt, Long* reversePearsonCorrelationCoefficient, Long* predictivePearsonCorrelationCoefficient, Integer* limit, Integer* offset, String* sort, void (* success)(SamiInline_response_200_7*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&correlationsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("timestamp"), timestamp);
  
  
    queryParams->Add(new String("user_id"), userId);
  
  
    queryParams->Add(new String("correlation"), correlation);
  
  
    queryParams->Add(new String("cause_id"), causeId);
  
  
    queryParams->Add(new String("effect_id"), effectId);
  
  
    queryParams->Add(new String("onset_delay"), onsetDelay);
  
  
    queryParams->Add(new String("duration_of_action"), durationOfAction);
  
  
    queryParams->Add(new String("number_of_pairs"), numberOfPairs);
  
  
    queryParams->Add(new String("value_predicting_high_outcome"), valuePredictingHighOutcome);
  
  
    queryParams->Add(new String("value_predicting_low_outcome"), valuePredictingLowOutcome);
  
  
    queryParams->Add(new String("optimal_pearson_product"), optimalPearsonProduct);
  
  
    queryParams->Add(new String("vote"), vote);
  
  
    queryParams->Add(new String("statistical_significance"), statisticalSignificance);
  
  
    queryParams->Add(new String("cause_unit"), causeUnit);
  
  
    queryParams->Add(new String("cause_unit_id"), causeUnitId);
  
  
    queryParams->Add(new String("cause_changes"), causeChanges);
  
  
    queryParams->Add(new String("effect_changes"), effectChanges);
  
  
    queryParams->Add(new String("qm_score"), qmScore);
  
  
    queryParams->Add(new String("error"), error);
  
  
    queryParams->Add(new String("created_at"), createdAt);
  
  
    queryParams->Add(new String("updated_at"), updatedAt);
  
  
    queryParams->Add(new String("reverse_pearson_correlation_coefficient"), reversePearsonCorrelationCoefficient);
  
  
    queryParams->Add(new String("predictive_pearson_correlation_coefficient"), predictivePearsonCorrelationCoefficient);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/correlations");

  

  client->execute(SamiCorrelationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
correlationsPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiCorrelationApi::correlationsPostWithCompletion(SamiCorrelation* body, void (* success)(SamiInline_response_200_8*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&correlationsPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/correlations");

  

  client->execute(SamiCorrelationApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
correlationsIdGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiCorrelationApi::correlationsIdGetWithCompletion(Integer* _id, void (* success)(SamiInline_response_200_8*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&correlationsIdGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/correlations/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiCorrelationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
correlationsIdPutProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiCorrelationApi::correlationsIdPutWithCompletion(Integer* _id, SamiCorrelation* body, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&correlationsIdPutProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/correlations/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiCorrelationApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
correlationsIdDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiCorrelationApi::correlationsIdDeleteWithCompletion(Integer* _id, void (* success)(SamiInline_response_200_2*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&correlationsIdDeleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/correlations/{id}");

  
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));
  

  client->execute(SamiCorrelationApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
