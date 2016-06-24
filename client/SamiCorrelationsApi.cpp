#include "SamiCorrelationsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCorrelationsApi::SamiCorrelationsApi() {

}

SamiCorrelationsApi::~SamiCorrelationsApi() {

}

void
v1AggregatedCorrelationsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1AggregatedCorrelationsGetWithCompletion(String* accessToken, String* effect, String* cause, String* correlationCoefficient, String* onsetDelay, String* durationOfAction, String* lastUpdated, Integer* limit, Integer* offset, Integer* sort, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1AggregatedCorrelationsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("effect"), effect);

    queryParams->Add(new String("cause"), cause);

    queryParams->Add(new String("correlationCoefficient"), correlationCoefficient);

    queryParams->Add(new String("onsetDelay"), onsetDelay);

    queryParams->Add(new String("durationOfAction"), durationOfAction);

    queryParams->Add(new String("lastUpdated"), lastUpdated);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v1/aggregatedCorrelations");


  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1AggregatedCorrelationsPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiCorrelationsApi::v1AggregatedCorrelationsPostWithCompletion(SamiPostCorrelation* body, String* accessToken, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1AggregatedCorrelationsPostProcessor, (void(*)(void*, SamiError*))success);
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

  String url(L"/v1/aggregatedCorrelations");


  client->execute(SamiCorrelationsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
v1CorrelationsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1CorrelationsGetWithCompletion(String* accessToken, String* effect, String* cause, String* correlationCoefficient, String* onsetDelay, String* durationOfAction, String* lastUpdated, Integer* limit, Integer* offset, Integer* sort, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1CorrelationsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("effect"), effect);

    queryParams->Add(new String("cause"), cause);

    queryParams->Add(new String("correlationCoefficient"), correlationCoefficient);

    queryParams->Add(new String("onsetDelay"), onsetDelay);

    queryParams->Add(new String("durationOfAction"), durationOfAction);

    queryParams->Add(new String("lastUpdated"), lastUpdated);

    queryParams->Add(new String("limit"), limit);

    queryParams->Add(new String("offset"), offset);

    queryParams->Add(new String("sort"), sort);

  String* mBody = null;


  String url(L"/v1/correlations");


  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetWithCompletion(Integer* organizationId, Integer* userId, String* variableName, String* organizationToken, String* accessToken, String* includePublic, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("organization_token"), organizationToken);

    queryParams->Add(new String("includePublic"), includePublic);

  String* mBody = null;


  String url(L"/v1/organizations/{organizationId}/users/{userId}/variables/{variableName}/causes");

  String s_organizationId(L"{");
  s_organizationId.Append(L"organizationId");
  s_organizationId.Append(L"}");
  url.Replace(s_organizationId, stringify(organizationId, L"Integer*"));
  String s_userId(L"{");
  s_userId.Append(L"userId");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));

  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCommonResponse");

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

IList* 
SamiCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetWithCompletion(Integer* organizationId, Integer* userId, String* variableName, String* organizationToken, String* accessToken, String* includePublic, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("organization_token"), organizationToken);

    queryParams->Add(new String("include_public"), includePublic);

  String* mBody = null;


  String url(L"/v1/organizations/{organizationId}/users/{userId}/variables/{variableName}/effects");

  String s_organizationId(L"{");
  s_organizationId.Append(L"organizationId");
  s_organizationId.Append(L"}");
  url.Replace(s_organizationId, stringify(organizationId, L"Integer*"));
  String s_userId(L"{");
  s_userId.Append(L"userId");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));

  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1PublicCorrelationsSearchSearchGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1PublicCorrelationsSearchSearchGetWithCompletion(String* search, String* effectOrCause, String* accessToken, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1PublicCorrelationsSearchSearchGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

    queryParams->Add(new String("effectOrCause"), effectOrCause);

  String* mBody = null;


  String url(L"/v1/public/correlations/search/{search}");

  String s_search(L"{");
  s_search.Append(L"search");
  s_search.Append(L"}");
  url.Replace(s_search, stringify(search, L"String*"));

  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VariablesVariableNameCausesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1VariablesVariableNameCausesGetWithCompletion(String* variableName, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesVariableNameCausesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/v1/variables/{variableName}/causes");

  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));

  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VariablesVariableNameEffectsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1VariablesVariableNameEffectsGetWithCompletion(String* variableName, String* accessToken, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesVariableNameEffectsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

  String* mBody = null;


  String url(L"/v1/variables/{variableName}/effects");

  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));

  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VariablesVariableNamePublicCausesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1VariablesVariableNamePublicCausesGetWithCompletion(String* variableName, String* accessToken, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesVariableNamePublicCausesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

  String* mBody = null;


  String url(L"/v1/variables/{variableName}/public/causes");

  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));

  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VariablesVariableNamePublicEffectsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiCorrelation");

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

IList* 
SamiCorrelationsApi::v1VariablesVariableNamePublicEffectsGetWithCompletion(String* variableName, String* accessToken, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VariablesVariableNamePublicEffectsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("access_token"), accessToken);

  String* mBody = null;


  String url(L"/v1/variables/{variableName}/public/effects");

  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));

  client->execute(SamiCorrelationsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VotesDeletePostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCommonResponse* out = new SamiCommonResponse();
    jsonToValue(out, pJson, L"SamiCommonResponse*", L"SamiCommonResponse");

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

SamiCommonResponse* 
SamiCorrelationsApi::v1VotesDeletePostWithCompletion(SamiVoteDelete* body, String* accessToken, void (* success)(SamiCommonResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VotesDeletePostProcessor, (void(*)(void*, SamiError*))success);
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

  String url(L"/v1/votes/delete");


  client->execute(SamiCorrelationsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1VotesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCommonResponse* out = new SamiCommonResponse();
    jsonToValue(out, pJson, L"SamiCommonResponse*", L"SamiCommonResponse");

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

SamiCommonResponse* 
SamiCorrelationsApi::v1VotesPostWithCompletion(SamiPostVote* body, String* accessToken, void (* success)(SamiCommonResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1VotesPostProcessor, (void(*)(void*, SamiError*))success);
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

  String url(L"/v1/votes");


  client->execute(SamiCorrelationsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
